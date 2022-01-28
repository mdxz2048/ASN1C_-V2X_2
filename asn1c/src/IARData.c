/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VIR"
 * 	found in "asn/VIR.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#include "IARData.h"

static int
memb_reqs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_reqs_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_reqs_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_reqs_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_reqs_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_reqs_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DriveRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_reqs_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_reqs_specs_5 = {
	sizeof(struct reqs),
	offsetof(struct reqs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reqs_5 = {
	"reqs",
	"reqs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_reqs_tags_5,
	sizeof(asn_DEF_reqs_tags_5)
		/sizeof(asn_DEF_reqs_tags_5[0]) - 1, /* 1 */
	asn_DEF_reqs_tags_5,	/* Same as above */
	sizeof(asn_DEF_reqs_tags_5)
		/sizeof(asn_DEF_reqs_tags_5[0]), /* 2 */
	{ &asn_OER_type_reqs_constr_5, &asn_PER_type_reqs_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_reqs_5,
	1,	/* Single element */
	&asn_SPC_reqs_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_IARData_1[] = {
	{ ATF_POINTER, 4, offsetof(struct IARData, currentPos),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PathPlanningPoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"currentPos"
		},
	{ ATF_POINTER, 3, offsetof(struct IARData, path_Planning),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PathPlanning,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"path-Planning"
		},
	{ ATF_POINTER, 2, offsetof(struct IARData, currentBehavior),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DriveBehavior,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"currentBehavior"
		},
	{ ATF_POINTER, 1, offsetof(struct IARData, reqs),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_reqs_5,
		0,
		{ &asn_OER_memb_reqs_constr_5, &asn_PER_memb_reqs_constr_5,  memb_reqs_constraint_1 },
		0, 0, /* No default value */
		"reqs"
		},
};
static const int asn_MAP_IARData_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_IARData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IARData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* currentPos */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* path-Planning */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* currentBehavior */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* reqs */
};
asn_SEQUENCE_specifics_t asn_SPC_IARData_specs_1 = {
	sizeof(struct IARData),
	offsetof(struct IARData, _asn_ctx),
	asn_MAP_IARData_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_IARData_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IARData = {
	"IARData",
	"IARData",
	&asn_OP_SEQUENCE,
	asn_DEF_IARData_tags_1,
	sizeof(asn_DEF_IARData_tags_1)
		/sizeof(asn_DEF_IARData_tags_1[0]), /* 1 */
	asn_DEF_IARData_tags_1,	/* Same as above */
	sizeof(asn_DEF_IARData_tags_1)
		/sizeof(asn_DEF_IARData_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IARData_1,
	4,	/* Elements count */
	&asn_SPC_IARData_specs_1	/* Additional specs */
};

