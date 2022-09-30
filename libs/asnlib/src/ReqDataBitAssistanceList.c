/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "/home/martin/repos/LPP-Client/asn/SUPL.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "ReqDataBitAssistanceList.h"

static int
memb_NativeInteger_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ganssDataBitInterval_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ganssDataBitSatList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ganssDataBitSatList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ganssDataBitInterval_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ganssDataBitSatList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ganssDataBitSatList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_Member_constr_5,  memb_NativeInteger_constraint_4 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ganssDataBitSatList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ganssDataBitSatList_specs_4 = {
	sizeof(struct ReqDataBitAssistanceList__ganssDataBitSatList),
	offsetof(struct ReqDataBitAssistanceList__ganssDataBitSatList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ganssDataBitSatList_4 = {
	"ganssDataBitSatList",
	"ganssDataBitSatList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ganssDataBitSatList_tags_4,
	sizeof(asn_DEF_ganssDataBitSatList_tags_4)
		/sizeof(asn_DEF_ganssDataBitSatList_tags_4[0]) - 1, /* 1 */
	asn_DEF_ganssDataBitSatList_tags_4,	/* Same as above */
	sizeof(asn_DEF_ganssDataBitSatList_tags_4)
		/sizeof(asn_DEF_ganssDataBitSatList_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_ganssDataBitSatList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_ganssDataBitSatList_4,
	1,	/* Single element */
	&asn_SPC_ganssDataBitSatList_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ReqDataBitAssistanceList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReqDataBitAssistanceList, gnssSignals),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GANSSSignals,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gnssSignals"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReqDataBitAssistanceList, ganssDataBitInterval),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_ganssDataBitInterval_constr_3,  memb_ganssDataBitInterval_constraint_1 },
		0, 0, /* No default value */
		"ganssDataBitInterval"
		},
	{ ATF_POINTER, 1, offsetof(struct ReqDataBitAssistanceList, ganssDataBitSatList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ganssDataBitSatList_4,
		0,
		{ 0, &asn_PER_memb_ganssDataBitSatList_constr_4,  memb_ganssDataBitSatList_constraint_1 },
		0, 0, /* No default value */
		"ganssDataBitSatList"
		},
};
static const int asn_MAP_ReqDataBitAssistanceList_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ReqDataBitAssistanceList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReqDataBitAssistanceList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnssSignals */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ganssDataBitInterval */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ganssDataBitSatList */
};
asn_SEQUENCE_specifics_t asn_SPC_ReqDataBitAssistanceList_specs_1 = {
	sizeof(struct ReqDataBitAssistanceList),
	offsetof(struct ReqDataBitAssistanceList, _asn_ctx),
	asn_MAP_ReqDataBitAssistanceList_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ReqDataBitAssistanceList_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReqDataBitAssistanceList = {
	"ReqDataBitAssistanceList",
	"ReqDataBitAssistanceList",
	&asn_OP_SEQUENCE,
	asn_DEF_ReqDataBitAssistanceList_tags_1,
	sizeof(asn_DEF_ReqDataBitAssistanceList_tags_1)
		/sizeof(asn_DEF_ReqDataBitAssistanceList_tags_1[0]), /* 1 */
	asn_DEF_ReqDataBitAssistanceList_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReqDataBitAssistanceList_tags_1)
		/sizeof(asn_DEF_ReqDataBitAssistanceList_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReqDataBitAssistanceList_1,
	3,	/* Elements count */
	&asn_SPC_ReqDataBitAssistanceList_specs_1	/* Additional specs */
};
