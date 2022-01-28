/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PAM"
 * 	found in "asn/PAM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_PAMNodeAttributes_H_
#define	_PAMNodeAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PAMNodeAttributes {
	PAMNodeAttributes_entrance	= 0,
	PAMNodeAttributes_exit	= 1,
	PAMNodeAttributes_toUpstair	= 2,
	PAMNodeAttributes_toDownstair	= 3,
	PAMNodeAttributes_etc	= 4,
	PAMNodeAttributes_mtc	= 5,
	PAMNodeAttributes_passAfterPayment	= 6,
	PAMNodeAttributes_blocked	= 7
} e_PAMNodeAttributes;

/* PAMNodeAttributes */
typedef BIT_STRING_t	 PAMNodeAttributes_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PAMNodeAttributes_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PAMNodeAttributes;
asn_struct_free_f PAMNodeAttributes_free;
asn_struct_print_f PAMNodeAttributes_print;
asn_constr_check_f PAMNodeAttributes_constraint;
ber_type_decoder_f PAMNodeAttributes_decode_ber;
der_type_encoder_f PAMNodeAttributes_encode_der;
xer_type_decoder_f PAMNodeAttributes_decode_xer;
xer_type_encoder_f PAMNodeAttributes_encode_xer;
oer_type_decoder_f PAMNodeAttributes_decode_oer;
oer_type_encoder_f PAMNodeAttributes_encode_oer;
per_type_decoder_f PAMNodeAttributes_decode_uper;
per_type_encoder_f PAMNodeAttributes_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PAMNodeAttributes_H_ */
#include <asn_internal.h>
