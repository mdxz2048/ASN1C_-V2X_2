/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SensorSharing"
 * 	found in "asn/SensorSharing.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#include "DetectedPTCData.h"

static int
memb_tracking_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_type_relatedExt_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_type_relatedExt_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_tracking_constr_10 CC_NOTUSED = {
	{ 2, 1 }	/* (1..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_tracking_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (1..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_type_relatedExt_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct type_relatedExt, choice.motorExt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MotorDataExtension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"motorExt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct type_relatedExt, choice.non_motorExt),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Non_motorDataExtension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"non-motorExt"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_type_relatedExt_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* motorExt */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* non-motorExt */
};
static asn_CHOICE_specifics_t asn_SPC_type_relatedExt_specs_12 = {
	sizeof(struct type_relatedExt),
	offsetof(struct type_relatedExt, _asn_ctx),
	offsetof(struct type_relatedExt, present),
	sizeof(((struct type_relatedExt *)0)->present),
	asn_MAP_type_relatedExt_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_type_relatedExt_12 = {
	"type-relatedExt",
	"type-relatedExt",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_type_relatedExt_constr_12, &asn_PER_type_type_relatedExt_constr_12, CHOICE_constraint },
	asn_MBR_type_relatedExt_12,
	2,	/* Elements count */
	&asn_SPC_type_relatedExt_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DetectedPTCData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DetectedPTCData, ptc),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ParticipantData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ptc"
		},
	{ ATF_POINTER, 10, offsetof(struct DetectedPTCData, objSizeConfidence),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectSizeConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"objSizeConfidence"
		},
	{ ATF_POINTER, 9, offsetof(struct DetectedPTCData, detectedPTCType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetectedPTCType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"detectedPTCType"
		},
	{ ATF_POINTER, 8, offsetof(struct DetectedPTCData, typeConfidence),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Confidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"typeConfidence"
		},
	{ ATF_POINTER, 7, offsetof(struct DetectedPTCData, acc4WayConfidence),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccSet4WayConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"acc4WayConfidence"
		},
	{ ATF_POINTER, 6, offsetof(struct DetectedPTCData, statusDuration),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeOffset,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"statusDuration"
		},
	{ ATF_POINTER, 5, offsetof(struct DetectedPTCData, pathHistory),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PathHistory,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pathHistory"
		},
	{ ATF_POINTER, 4, offsetof(struct DetectedPTCData, planningList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PlanningList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"planningList"
		},
	{ ATF_POINTER, 3, offsetof(struct DetectedPTCData, tracking),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_tracking_constr_10, &asn_PER_memb_tracking_constr_10,  memb_tracking_constraint_1 },
		0, 0, /* No default value */
		"tracking"
		},
	{ ATF_POINTER, 2, offsetof(struct DetectedPTCData, polygon),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Polygon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"polygon"
		},
	{ ATF_POINTER, 1, offsetof(struct DetectedPTCData, type_relatedExt),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_type_relatedExt_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"type-relatedExt"
		},
};
static const int asn_MAP_DetectedPTCData_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_DetectedPTCData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DetectedPTCData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ptc */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* objSizeConfidence */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* detectedPTCType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* typeConfidence */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* acc4WayConfidence */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* statusDuration */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pathHistory */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* planningList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* tracking */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* polygon */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* type-relatedExt */
};
asn_SEQUENCE_specifics_t asn_SPC_DetectedPTCData_specs_1 = {
	sizeof(struct DetectedPTCData),
	offsetof(struct DetectedPTCData, _asn_ctx),
	asn_MAP_DetectedPTCData_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_DetectedPTCData_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DetectedPTCData = {
	"DetectedPTCData",
	"DetectedPTCData",
	&asn_OP_SEQUENCE,
	asn_DEF_DetectedPTCData_tags_1,
	sizeof(asn_DEF_DetectedPTCData_tags_1)
		/sizeof(asn_DEF_DetectedPTCData_tags_1[0]), /* 1 */
	asn_DEF_DetectedPTCData_tags_1,	/* Same as above */
	sizeof(asn_DEF_DetectedPTCData_tags_1)
		/sizeof(asn_DEF_DetectedPTCData_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DetectedPTCData_1,
	11,	/* Elements count */
	&asn_SPC_DetectedPTCData_specs_1	/* Additional specs */
};

