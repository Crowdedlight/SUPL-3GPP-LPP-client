/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_BDS_SgnTypeElement_r12_H_
#define	_BDS_SgnTypeElement_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DBDS-CorrectionList-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GNSS_SignalID;

/* BDS-SgnTypeElement-r12 */
typedef struct BDS_SgnTypeElement_r12 {
	struct GNSS_SignalID	*gnss_SignalID	/* OPTIONAL */;
	DBDS_CorrectionList_r12_t	 dbds_CorrectionList_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BDS_SgnTypeElement_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BDS_SgnTypeElement_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_BDS_SgnTypeElement_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_BDS_SgnTypeElement_r12_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GNSS-SignalID.h"

#endif	/* _BDS_SgnTypeElement_r12_H_ */
#include <asn_internal.h>