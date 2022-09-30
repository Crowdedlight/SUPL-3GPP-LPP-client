/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "GNSS-GenericAssistDataReqElement.h"

static asn_TYPE_member_t asn_MBR_ext1_14[] = {
	{ ATF_POINTER, 2, offsetof(struct GNSS_GenericAssistDataReqElement__ext1, bds_DifferentialCorrectionsReq_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BDS_DifferentialCorrectionsReq_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bds-DifferentialCorrectionsReq-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_GenericAssistDataReqElement__ext1, bds_GridModelReq_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BDS_GridModelReq_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bds-GridModelReq-r12"
		},
};
static const int asn_MAP_ext1_oms_14[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bds-DifferentialCorrectionsReq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* bds-GridModelReq-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_14 = {
	sizeof(struct GNSS_GenericAssistDataReqElement__ext1),
	offsetof(struct GNSS_GenericAssistDataReqElement__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_14,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_14,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_14 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_14,
	sizeof(asn_DEF_ext1_tags_14)
		/sizeof(asn_DEF_ext1_tags_14[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_14,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_14)
		/sizeof(asn_DEF_ext1_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_14,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_17[] = {
	{ ATF_POINTER, 8, offsetof(struct GNSS_GenericAssistDataReqElement__ext2, gnss_RTK_ObservationsReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_RTK_ObservationsReq_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-RTK-ObservationsReq-r15"
		},
	{ ATF_POINTER, 7, offsetof(struct GNSS_GenericAssistDataReqElement__ext2, glo_RTK_BiasInformationReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GLO_RTK_BiasInformationReq_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"glo-RTK-BiasInformationReq-r15"
		},
	{ ATF_POINTER, 6, offsetof(struct GNSS_GenericAssistDataReqElement__ext2, gnss_RTK_MAC_CorrectionDifferencesReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_RTK_MAC_CorrectionDifferencesReq_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-RTK-MAC-CorrectionDifferencesReq-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct GNSS_GenericAssistDataReqElement__ext2, gnss_RTK_ResidualsReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_RTK_ResidualsReq_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-RTK-ResidualsReq-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct GNSS_GenericAssistDataReqElement__ext2, gnss_RTK_FKP_GradientsReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_RTK_FKP_GradientsReq_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-RTK-FKP-GradientsReq-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct GNSS_GenericAssistDataReqElement__ext2, gnss_SSR_OrbitCorrectionsReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SSR_OrbitCorrectionsReq_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-SSR-OrbitCorrectionsReq-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct GNSS_GenericAssistDataReqElement__ext2, gnss_SSR_ClockCorrectionsReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SSR_ClockCorrectionsReq_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-SSR-ClockCorrectionsReq-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_GenericAssistDataReqElement__ext2, gnss_SSR_CodeBiasReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SSR_CodeBiasReq_r15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-SSR-CodeBiasReq-r15"
		},
};
static const int asn_MAP_ext2_oms_17[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-RTK-ObservationsReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* glo-RTK-BiasInformationReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gnss-RTK-MAC-CorrectionDifferencesReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gnss-RTK-ResidualsReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gnss-RTK-FKP-GradientsReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* gnss-SSR-OrbitCorrectionsReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* gnss-SSR-ClockCorrectionsReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* gnss-SSR-CodeBiasReq-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_17 = {
	sizeof(struct GNSS_GenericAssistDataReqElement__ext2),
	offsetof(struct GNSS_GenericAssistDataReqElement__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_17,
	8,	/* Count of tags in the map */
	asn_MAP_ext2_oms_17,	/* Optional members */
	8, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_17 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_17,
	sizeof(asn_DEF_ext2_tags_17)
		/sizeof(asn_DEF_ext2_tags_17[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_17,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_17)
		/sizeof(asn_DEF_ext2_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_17,
	8,	/* Elements count */
	&asn_SPC_ext2_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_26[] = {
	{ ATF_POINTER, 6, offsetof(struct GNSS_GenericAssistDataReqElement__ext3, gnss_SSR_URA_Req_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SSR_URA_Req_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-SSR-URA-Req-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct GNSS_GenericAssistDataReqElement__ext3, gnss_SSR_PhaseBiasReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SSR_PhaseBiasReq_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-SSR-PhaseBiasReq-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct GNSS_GenericAssistDataReqElement__ext3, gnss_SSR_STEC_CorrectionReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SSR_STEC_CorrectionReq_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-SSR-STEC-CorrectionReq-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct GNSS_GenericAssistDataReqElement__ext3, gnss_SSR_GriddedCorrectionReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_SSR_GriddedCorrectionReq_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-SSR-GriddedCorrectionReq-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct GNSS_GenericAssistDataReqElement__ext3, navic_DifferentialCorrectionsReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NavIC_DifferentialCorrectionsReq_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"navic-DifferentialCorrectionsReq-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_GenericAssistDataReqElement__ext3, navic_GridModelReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NavIC_GridModelReq_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"navic-GridModelReq-r16"
		},
};
static const int asn_MAP_ext3_oms_26[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-SSR-URA-Req-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gnss-SSR-PhaseBiasReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gnss-SSR-STEC-CorrectionReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gnss-SSR-GriddedCorrectionReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* navic-DifferentialCorrectionsReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* navic-GridModelReq-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_26 = {
	sizeof(struct GNSS_GenericAssistDataReqElement__ext3),
	offsetof(struct GNSS_GenericAssistDataReqElement__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_26,
	6,	/* Count of tags in the map */
	asn_MAP_ext3_oms_26,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_26 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_26,
	sizeof(asn_DEF_ext3_tags_26)
		/sizeof(asn_DEF_ext3_tags_26[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_26,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_26)
		/sizeof(asn_DEF_ext3_tags_26[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext3_26,
	6,	/* Elements count */
	&asn_SPC_ext3_specs_26	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GNSS_GenericAssistDataReqElement_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-ID"
		},
	{ ATF_POINTER, 13, offsetof(struct GNSS_GenericAssistDataReqElement, sbas_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBAS_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sbas-ID"
		},
	{ ATF_POINTER, 12, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_TimeModelsReq),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_TimeModelListReq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-TimeModelsReq"
		},
	{ ATF_POINTER, 11, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_DifferentialCorrectionsReq),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_DifferentialCorrectionsReq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-DifferentialCorrectionsReq"
		},
	{ ATF_POINTER, 10, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_NavigationModelReq),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GNSS_NavigationModelReq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-NavigationModelReq"
		},
	{ ATF_POINTER, 9, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_RealTimeIntegrityReq),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_RealTimeIntegrityReq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-RealTimeIntegrityReq"
		},
	{ ATF_POINTER, 8, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_DataBitAssistanceReq),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_DataBitAssistanceReq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-DataBitAssistanceReq"
		},
	{ ATF_POINTER, 7, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_AcquisitionAssistanceReq),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_AcquisitionAssistanceReq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-AcquisitionAssistanceReq"
		},
	{ ATF_POINTER, 6, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_AlmanacReq),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_AlmanacReq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-AlmanacReq"
		},
	{ ATF_POINTER, 5, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_UTCModelReq),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_UTC_ModelReq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-UTCModelReq"
		},
	{ ATF_POINTER, 4, offsetof(struct GNSS_GenericAssistDataReqElement, gnss_AuxiliaryInformationReq),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_AuxiliaryInformationReq,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnss-AuxiliaryInformationReq"
		},
	{ ATF_POINTER, 3, offsetof(struct GNSS_GenericAssistDataReqElement, ext1),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_ext1_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct GNSS_GenericAssistDataReqElement, ext2),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		0,
		&asn_DEF_ext2_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct GNSS_GenericAssistDataReqElement, ext3),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_ext3_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_GNSS_GenericAssistDataReqElement_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
static const ber_tlv_tag_t asn_DEF_GNSS_GenericAssistDataReqElement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_GenericAssistDataReqElement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sbas-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gnss-TimeModelsReq */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gnss-DifferentialCorrectionsReq */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gnss-NavigationModelReq */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* gnss-RealTimeIntegrityReq */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* gnss-DataBitAssistanceReq */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* gnss-AcquisitionAssistanceReq */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* gnss-AlmanacReq */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* gnss-UTCModelReq */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* gnss-AuxiliaryInformationReq */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_GenericAssistDataReqElement_specs_1 = {
	sizeof(struct GNSS_GenericAssistDataReqElement),
	offsetof(struct GNSS_GenericAssistDataReqElement, _asn_ctx),
	asn_MAP_GNSS_GenericAssistDataReqElement_tag2el_1,
	14,	/* Count of tags in the map */
	asn_MAP_GNSS_GenericAssistDataReqElement_oms_1,	/* Optional members */
	10, 3,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_GenericAssistDataReqElement = {
	"GNSS-GenericAssistDataReqElement",
	"GNSS-GenericAssistDataReqElement",
	&asn_OP_SEQUENCE,
	asn_DEF_GNSS_GenericAssistDataReqElement_tags_1,
	sizeof(asn_DEF_GNSS_GenericAssistDataReqElement_tags_1)
		/sizeof(asn_DEF_GNSS_GenericAssistDataReqElement_tags_1[0]), /* 1 */
	asn_DEF_GNSS_GenericAssistDataReqElement_tags_1,	/* Same as above */
	sizeof(asn_DEF_GNSS_GenericAssistDataReqElement_tags_1)
		/sizeof(asn_DEF_GNSS_GenericAssistDataReqElement_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GNSS_GenericAssistDataReqElement_1,
	14,	/* Elements count */
	&asn_SPC_GNSS_GenericAssistDataReqElement_specs_1	/* Additional specs */
};
