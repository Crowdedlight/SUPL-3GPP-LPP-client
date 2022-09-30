/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "StandardClockModelElement.h"

static int
memb_stanClockToc_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 16383)) {
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
memb_stanClockAF2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32 && value <= 31)) {
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
memb_stanClockAF1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1048576 && value <= 1048575)) {
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
memb_stanClockAF0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1073741824 && value <= 1073741823)) {
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
memb_stanClockTgd_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -512 && value <= 511)) {
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
memb_sisa_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_stanModelID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_stanClockToc_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 14,  14,  0,  16383 }	/* (0..16383) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stanClockAF2_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -32,  31 }	/* (-32..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stanClockAF1_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 21, -1, -1048576,  1048575 }	/* (-1048576..1048575) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stanClockAF0_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 31, -1, -1073741824,  1073741823 }	/* (-1073741824..1073741823) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stanClockTgd_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10, -512,  511 }	/* (-512..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sisa_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stanModelID_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_StandardClockModelElement_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct StandardClockModelElement, stanClockToc),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_stanClockToc_constr_2,  memb_stanClockToc_constraint_1 },
		0, 0, /* No default value */
		"stanClockToc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandardClockModelElement, stanClockAF2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_stanClockAF2_constr_3,  memb_stanClockAF2_constraint_1 },
		0, 0, /* No default value */
		"stanClockAF2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandardClockModelElement, stanClockAF1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_stanClockAF1_constr_4,  memb_stanClockAF1_constraint_1 },
		0, 0, /* No default value */
		"stanClockAF1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandardClockModelElement, stanClockAF0),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_stanClockAF0_constr_5,  memb_stanClockAF0_constraint_1 },
		0, 0, /* No default value */
		"stanClockAF0"
		},
	{ ATF_POINTER, 1, offsetof(struct StandardClockModelElement, stanClockTgd),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_stanClockTgd_constr_6,  memb_stanClockTgd_constraint_1 },
		0, 0, /* No default value */
		"stanClockTgd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct StandardClockModelElement, sisa),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_sisa_constr_7,  memb_sisa_constraint_1 },
		0, 0, /* No default value */
		"sisa"
		},
	{ ATF_POINTER, 1, offsetof(struct StandardClockModelElement, stanModelID),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_stanModelID_constr_8,  memb_stanModelID_constraint_1 },
		0, 0, /* No default value */
		"stanModelID"
		},
};
static const int asn_MAP_StandardClockModelElement_oms_1[] = { 4, 6 };
static const ber_tlv_tag_t asn_DEF_StandardClockModelElement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_StandardClockModelElement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* stanClockToc */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* stanClockAF2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* stanClockAF1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* stanClockAF0 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* stanClockTgd */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sisa */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* stanModelID */
};
asn_SEQUENCE_specifics_t asn_SPC_StandardClockModelElement_specs_1 = {
	sizeof(struct StandardClockModelElement),
	offsetof(struct StandardClockModelElement, _asn_ctx),
	asn_MAP_StandardClockModelElement_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_StandardClockModelElement_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_StandardClockModelElement = {
	"StandardClockModelElement",
	"StandardClockModelElement",
	&asn_OP_SEQUENCE,
	asn_DEF_StandardClockModelElement_tags_1,
	sizeof(asn_DEF_StandardClockModelElement_tags_1)
		/sizeof(asn_DEF_StandardClockModelElement_tags_1[0]), /* 1 */
	asn_DEF_StandardClockModelElement_tags_1,	/* Same as above */
	sizeof(asn_DEF_StandardClockModelElement_tags_1)
		/sizeof(asn_DEF_StandardClockModelElement_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_StandardClockModelElement_1,
	7,	/* Elements count */
	&asn_SPC_StandardClockModelElement_specs_1	/* Additional specs */
};
