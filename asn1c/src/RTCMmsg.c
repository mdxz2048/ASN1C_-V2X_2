/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RTCM"
 * 	found in "asn/RTCM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#include "RTCMmsg.h"

asn_TYPE_member_t asn_MBR_RTCMmsg_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RTCMmsg, rev),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTCM_Revision,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rev"
		},
	{ ATF_POINTER, 1, offsetof(struct RTCMmsg, rtcmID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTCM_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rtcmID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RTCMmsg, payload),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTCM_Payload,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"payload"
		},
};
static const int asn_MAP_RTCMmsg_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RTCMmsg_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RTCMmsg_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rev */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rtcmID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* payload */
};
asn_SEQUENCE_specifics_t asn_SPC_RTCMmsg_specs_1 = {
	sizeof(struct RTCMmsg),
	offsetof(struct RTCMmsg, _asn_ctx),
	asn_MAP_RTCMmsg_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RTCMmsg_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RTCMmsg = {
	"RTCMmsg",
	"RTCMmsg",
	&asn_OP_SEQUENCE,
	asn_DEF_RTCMmsg_tags_1,
	sizeof(asn_DEF_RTCMmsg_tags_1)
		/sizeof(asn_DEF_RTCMmsg_tags_1[0]), /* 1 */
	asn_DEF_RTCMmsg_tags_1,	/* Same as above */
	sizeof(asn_DEF_RTCMmsg_tags_1)
		/sizeof(asn_DEF_RTCMmsg_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RTCMmsg_1,
	3,	/* Elements count */
	&asn_SPC_RTCMmsg_specs_1	/* Additional specs */
};

