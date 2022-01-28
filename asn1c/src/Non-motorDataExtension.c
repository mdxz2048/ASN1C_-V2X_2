/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SensorSharing"
 * 	found in "asn/SensorSharing.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#include "Non-motorDataExtension.h"

static int
memb_overallRadius_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 200)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_overallRadius_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..200) */,
	-1};
static asn_per_constraints_t asn_PER_memb_overallRadius_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  200 }	/* (0..200) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Non_motorDataExtension_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Non_motorDataExtension, overallRadius),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_overallRadius_constr_2, &asn_PER_memb_overallRadius_constr_2,  memb_overallRadius_constraint_1 },
		0, 0, /* No default value */
		"overallRadius"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_motorDataExtension, non_motorData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Non_motorData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"non-motorData"
		},
};
static const ber_tlv_tag_t asn_DEF_Non_motorDataExtension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Non_motorDataExtension_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* overallRadius */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* non-motorData */
};
asn_SEQUENCE_specifics_t asn_SPC_Non_motorDataExtension_specs_1 = {
	sizeof(struct Non_motorDataExtension),
	offsetof(struct Non_motorDataExtension, _asn_ctx),
	asn_MAP_Non_motorDataExtension_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Non_motorDataExtension = {
	"Non-motorDataExtension",
	"Non-motorDataExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_Non_motorDataExtension_tags_1,
	sizeof(asn_DEF_Non_motorDataExtension_tags_1)
		/sizeof(asn_DEF_Non_motorDataExtension_tags_1[0]), /* 1 */
	asn_DEF_Non_motorDataExtension_tags_1,	/* Same as above */
	sizeof(asn_DEF_Non_motorDataExtension_tags_1)
		/sizeof(asn_DEF_Non_motorDataExtension_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Non_motorDataExtension_1,
	2,	/* Elements count */
	&asn_SPC_Non_motorDataExtension_specs_1	/* Additional specs */
};

