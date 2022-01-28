/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "asn/RSI.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#include "AuxiliarySign.h"

asn_TYPE_member_t asn_MBR_AuxiliarySign_1[] = {
	{ ATF_POINTER, 2, offsetof(struct AuxiliarySign, signWithVehicleType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AuxiliarySignVehicleType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signWithVehicleType"
		},
	{ ATF_POINTER, 1, offsetof(struct AuxiliarySign, signDirection),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AuxiliarySignDirection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signDirection"
		},
};
static const int asn_MAP_AuxiliarySign_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_AuxiliarySign_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AuxiliarySign_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* signWithVehicleType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* signDirection */
};
asn_SEQUENCE_specifics_t asn_SPC_AuxiliarySign_specs_1 = {
	sizeof(struct AuxiliarySign),
	offsetof(struct AuxiliarySign, _asn_ctx),
	asn_MAP_AuxiliarySign_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_AuxiliarySign_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AuxiliarySign = {
	"AuxiliarySign",
	"AuxiliarySign",
	&asn_OP_SEQUENCE,
	asn_DEF_AuxiliarySign_tags_1,
	sizeof(asn_DEF_AuxiliarySign_tags_1)
		/sizeof(asn_DEF_AuxiliarySign_tags_1[0]), /* 1 */
	asn_DEF_AuxiliarySign_tags_1,	/* Same as above */
	sizeof(asn_DEF_AuxiliarySign_tags_1)
		/sizeof(asn_DEF_AuxiliarySign_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AuxiliarySign_1,
	2,	/* Elements count */
	&asn_SPC_AuxiliarySign_specs_1	/* Additional specs */
};

