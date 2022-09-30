/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "NR-DL-PRS-BeamInfo-r16.h"

asn_TYPE_member_t asn_MBR_NR_DL_PRS_BeamInfo_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_BeamInfo_r16, trp_id_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TRP_ID_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trp-id-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DL_PRS_BeamInfo_r16, lcs_gcs_translation_parameter_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCS_GCS_Translation_Parameter_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lcs-gcs-translation-parameter-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_BeamInfo_r16, dl_prs_BeamInfoSet_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PRS_BeamInfoSet_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-prs-BeamInfoSet-r16"
		},
};
static const int asn_MAP_NR_DL_PRS_BeamInfo_r16_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_DL_PRS_BeamInfo_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DL_PRS_BeamInfo_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trp-id-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lcs-gcs-translation-parameter-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dl-prs-BeamInfoSet-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DL_PRS_BeamInfo_r16_specs_1 = {
	sizeof(struct NR_DL_PRS_BeamInfo_r16),
	offsetof(struct NR_DL_PRS_BeamInfo_r16, _asn_ctx),
	asn_MAP_NR_DL_PRS_BeamInfo_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_DL_PRS_BeamInfo_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_PRS_BeamInfo_r16 = {
	"NR-DL-PRS-BeamInfo-r16",
	"NR-DL-PRS-BeamInfo-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DL_PRS_BeamInfo_r16_tags_1,
	sizeof(asn_DEF_NR_DL_PRS_BeamInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_DL_PRS_BeamInfo_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_DL_PRS_BeamInfo_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DL_PRS_BeamInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_DL_PRS_BeamInfo_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_DL_PRS_BeamInfo_r16_1,
	3,	/* Elements count */
	&asn_SPC_NR_DL_PRS_BeamInfo_r16_specs_1	/* Additional specs */
};
