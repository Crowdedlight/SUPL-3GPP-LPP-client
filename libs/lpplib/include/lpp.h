#pragma once
#include "asnlib.h"
#include <cell_id.h>
#include <chrono>
#include <vector>
#include <functional>
#include "asn_helper.h"
#define AD_REQUEST_INVALID ((LPP_Client::AD_Request)(0))

struct LocationInformation {
    double lat;
    double lon;
    double altitude;

    double hacc;
    double vacc;

    double velocity;
    double tracking;

    time_t time;
};

struct ECIDInformation {
    struct Neighbor {
        long id;
        long earfcn;
        long rsrp;
        long rsrq;
    };

    CellID cell;

    int      neighbor_count;
    Neighbor neighbors[16];
};

struct LPP_Transaction {
    long id;
    int  end;
    int  initiator;
};

class SUPL_Client;
class LPP_Client {
public:
    typedef int32_t AD_Request;
    // typedef void (*AD_Callback)(LPP_Client*, LPP_Transaction*, LPP_Message*,
    //                             void*);
    // typedef bool (*PLI_Callback)(LocationInformation*, void*);
    // typedef bool (*PECID_Callback)(ECIDInformation*, void*);

    struct ProvideLI {
        LocationInformationType_t             type;
        LPP_Transaction                       transaction;
        std::chrono::system_clock::time_point last;
    };

    LPP_Client(bool segmentation);
    ~LPP_Client();

    // Open connection to location server.
    // The 'cell' arguments is required for backwards compatibility and SHOULD
    // match the cell-id used in the first request_assistance_data call.
    bool connect(const std::string& host, int port, bool use_ssl, CellID cell);
    bool disconnect();

    // Run process loop of receive/send LPP messages.
    bool process();

    // Request assistance data for a specific cell-id. The callback will be
    // called for each assistance data message the client receives.
    AD_Request request_assistance_data(CellID cell, void* userdata,
                                       std::function<void(LPP_Client*, LPP_Transaction*, LPP_Message*, void*)> callback);
    AD_Request request_assistance_data_ssr(CellID cell, void* userdata,
                                           std::function<void(LPP_Client*, LPP_Transaction*, LPP_Message*, void*)> callback);


    // Update assistance data request with new cell-id.
    bool update_assistance_data(AD_Request id, CellID cell);

    // Cancel ongoing assistance data request.
    bool cancel_assistance_data(AD_Request id);

    // The location server may or may not request location information from the
    // device. The information is provided to the LPP client through callbacks:
    // provide_location_information_callback and provide_ecid_callback. Return
    // false in the callback to indicate that no location information exists.
    void provide_location_information_callback(void* userdata,
                                               std::function<bool(LocationInformation*, void*)> callback);
    void provide_ecid_callback(void* userdata, std::function<bool(ECIDInformation*, void*)> callback);


private:
    bool wait_for_assistance_data_response(LPP_Transaction* transaction);
    bool process_message(LPP_Message*, LPP_Transaction* transaction);
    bool handle_request_location_information(LPP_Message*     message,
                                             LPP_Transaction* transaction);
    bool handle_provide_location_information(ProvideLI*);

    bool supl_start(CellID cell);
    bool supl_response();
    bool supl_send_posinit(CellID cell);
    bool supl_receive(std::vector<LPP_Message*>& messages, int milliseconds);
    bool supl_send(LPP_Message* message);
    bool supl_send(const std::vector<LPP_Message*>& messages);

    OCTET_STRING* encode(LPP_Message* message);
    LPP_Message* decode(OCTET_STRING* data);

    LPP_Transaction new_transaction();

private:
    std::unique_ptr<SUPL_Client> mSUPL;
    uint32_t                     client_id;
    bool                         connected;
    long                         transaction_counter;

    // TODO(ewasjon): support multiple requests
    AD_Request                                                                  main_request;
    std::function<void(LPP_Client*, LPP_Transaction*, LPP_Message*, void*)>     main_request_callback;
    void*                                                                       main_request_userdata;
    LPP_Transaction                                                             main_request_transaction;

    std::function<bool(LocationInformation*, void*)> pli_callback;
    void*        pli_userdata;

    std::function<bool(ECIDInformation*, void*)> pecid_callback;
    void*          pecid_userdata;

    ProvideLI provide_li;

    bool mEnableSegmentation;
};

void network_initialize();
void network_cleanup();
