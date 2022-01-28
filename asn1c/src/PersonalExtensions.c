/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PSM"
 * 	found in "asn/PSM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#include "PersonalExtensions.h"

asn_TYPE_member_t asn_MBR_PersonalExtensions_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PersonalExtensions, useState),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalDeviceUsageState,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useState"
		},
	{ ATF_POINTER, 1, offsetof(struct PersonalExtensions, assistType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersonalAssistive,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"assistType"
		},
};
static const int asn_MAP_PersonalExtensions_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_PersonalExtensions_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PersonalExtensions_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* useState */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* assistType */
};
asn_SEQUENCE_specifics_t asn_SPC_PersonalExtensions_specs_1 = {
	sizeof(struct PersonalExtensions),
	offsetof(struct PersonalExtensions, _asn_ctx),
	asn_MAP_PersonalExtensions_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PersonalExtensions_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PersonalExtensions = {
	"PersonalExtensions",
	"PersonalExtensions",
	&asn_OP_SEQUENCE,
	asn_DEF_PersonalExtensions_tags_1,
	sizeof(asn_DEF_PersonalExtensions_tags_1)
		/sizeof(asn_DEF_PersonalExtensions_tags_1[0]), /* 1 */
	asn_DEF_PersonalExtensions_tags_1,	/* Same as above */
	sizeof(asn_DEF_PersonalExtensions_tags_1)
		/sizeof(asn_DEF_PersonalExtensions_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PersonalExtensions_1,
	2,	/* Elements count */
	&asn_SPC_PersonalExtensions_specs_1	/* Additional specs */
};

