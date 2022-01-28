/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SensorSharing"
 * 	found in "asn/SensorSharing.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#include "SensorSharingMsg.h"

static int
memb_id_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_id_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_id_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SensorSharingMsg_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SensorSharingMsg, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgCnt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorSharingMsg, id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_id_constr_3, &asn_PER_memb_id_constr_3,  memb_id_constraint_1 },
		0, 0, /* No default value */
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorSharingMsg, equipmentType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EquipmentType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"equipmentType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorSharingMsg, secMark),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSecond,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"secMark"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SensorSharingMsg, sensorPos),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position3D,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sensorPos"
		},
	{ ATF_POINTER, 4, offsetof(struct SensorSharingMsg, detectedRegion),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetectedRegion,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"detectedRegion"
		},
	{ ATF_POINTER, 3, offsetof(struct SensorSharingMsg, participants),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetectedPTCList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"participants"
		},
	{ ATF_POINTER, 2, offsetof(struct SensorSharingMsg, obstacles),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DetectedObstacleList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"obstacles"
		},
	{ ATF_POINTER, 1, offsetof(struct SensorSharingMsg, rtes),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTEList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rtes"
		},
};
static const int asn_MAP_SensorSharingMsg_oms_1[] = { 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_SensorSharingMsg_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SensorSharingMsg_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgCnt */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* equipmentType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* secMark */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sensorPos */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* detectedRegion */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* participants */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* obstacles */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* rtes */
};
asn_SEQUENCE_specifics_t asn_SPC_SensorSharingMsg_specs_1 = {
	sizeof(struct SensorSharingMsg),
	offsetof(struct SensorSharingMsg, _asn_ctx),
	asn_MAP_SensorSharingMsg_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_SensorSharingMsg_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SensorSharingMsg = {
	"SensorSharingMsg",
	"SensorSharingMsg",
	&asn_OP_SEQUENCE,
	asn_DEF_SensorSharingMsg_tags_1,
	sizeof(asn_DEF_SensorSharingMsg_tags_1)
		/sizeof(asn_DEF_SensorSharingMsg_tags_1[0]), /* 1 */
	asn_DEF_SensorSharingMsg_tags_1,	/* Same as above */
	sizeof(asn_DEF_SensorSharingMsg_tags_1)
		/sizeof(asn_DEF_SensorSharingMsg_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SensorSharingMsg_1,
	9,	/* Elements count */
	&asn_SPC_SensorSharingMsg_specs_1	/* Additional specs */
};

