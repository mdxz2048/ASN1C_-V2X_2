/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Map"
 * 	found in "asn/Map.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#include "Node.h"

asn_TYPE_member_t asn_MBR_Node_1[] = {
	{ ATF_POINTER, 1, offsetof(struct Node, name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DescriptiveName,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Node, id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeReferenceID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Node, refPos),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position3D,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refPos"
		},
	{ ATF_POINTER, 3, offsetof(struct Node, inLinks),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LinkList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inLinks"
		},
	{ ATF_POINTER, 2, offsetof(struct Node, inLinks_ex),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LinkExList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"inLinks-ex"
		},
	{ ATF_POINTER, 1, offsetof(struct Node, prohibitedzone),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProhibitedZone,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prohibitedzone"
		},
};
static const int asn_MAP_Node_oms_1[] = { 0, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_Node_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Node_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* name */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* refPos */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* inLinks */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* inLinks-ex */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* prohibitedzone */
};
asn_SEQUENCE_specifics_t asn_SPC_Node_specs_1 = {
	sizeof(struct Node),
	offsetof(struct Node, _asn_ctx),
	asn_MAP_Node_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_Node_oms_1,	/* Optional members */
	2, 2,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Node = {
	"Node",
	"Node",
	&asn_OP_SEQUENCE,
	asn_DEF_Node_tags_1,
	sizeof(asn_DEF_Node_tags_1)
		/sizeof(asn_DEF_Node_tags_1[0]), /* 1 */
	asn_DEF_Node_tags_1,	/* Same as above */
	sizeof(asn_DEF_Node_tags_1)
		/sizeof(asn_DEF_Node_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Node_1,
	6,	/* Elements count */
	&asn_SPC_Node_specs_1	/* Additional specs */
};

