/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "GNSS-RTK-MAC-CorrectionDifferences-r15.h"

asn_TYPE_member_t asn_MBR_GNSS_RTK_MAC_CorrectionDifferences_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GNSS_RTK_MAC_CorrectionDifferences_r15, networkID_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_NetworkID_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"networkID-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_RTK_MAC_CorrectionDifferences_r15, subNetworkID_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SubNetworkID_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subNetworkID-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GNSS_RTK_MAC_CorrectionDifferences_r15, master_ReferenceStationID_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_ReferenceStationID_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"master-ReferenceStationID-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct GNSS_RTK_MAC_CorrectionDifferences_r15, l1_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_FrequencyID_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"l1-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_RTK_MAC_CorrectionDifferences_r15, l2_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_FrequencyID_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"l2-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GNSS_RTK_MAC_CorrectionDifferences_r15, rtkCorrectionDifferencesList_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTK_CorrectionDifferencesList_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rtkCorrectionDifferencesList-r15"
		},
};
static const int asn_MAP_GNSS_RTK_MAC_CorrectionDifferences_r15_oms_1[] = { 1, 3, 4 };
static const ber_tlv_tag_t asn_DEF_GNSS_RTK_MAC_CorrectionDifferences_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_RTK_MAC_CorrectionDifferences_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* networkID-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* subNetworkID-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* master-ReferenceStationID-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* l1-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* l2-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* rtkCorrectionDifferencesList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_RTK_MAC_CorrectionDifferences_r15_specs_1 = {
	sizeof(struct GNSS_RTK_MAC_CorrectionDifferences_r15),
	offsetof(struct GNSS_RTK_MAC_CorrectionDifferences_r15, _asn_ctx),
	asn_MAP_GNSS_RTK_MAC_CorrectionDifferences_r15_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_GNSS_RTK_MAC_CorrectionDifferences_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_RTK_MAC_CorrectionDifferences_r15 = {
	"GNSS-RTK-MAC-CorrectionDifferences-r15",
	"GNSS-RTK-MAC-CorrectionDifferences-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_RTK_MAC_CorrectionDifferences_r15_tags_1,
	sizeof(asn_DEF_GNSS_RTK_MAC_CorrectionDifferences_r15_tags_1)
		/sizeof(asn_DEF_GNSS_RTK_MAC_CorrectionDifferences_r15_tags_1[0]), /* 1 */
	asn_DEF_GNSS_RTK_MAC_CorrectionDifferences_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_RTK_MAC_CorrectionDifferences_r15_tags_1)
		/sizeof(asn_DEF_GNSS_RTK_MAC_CorrectionDifferences_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GNSS_RTK_MAC_CorrectionDifferences_r15_1,
	6,	/* Elements count */
	&asn_SPC_GNSS_RTK_MAC_CorrectionDifferences_r15_specs_1	/* Additional specs */
};
