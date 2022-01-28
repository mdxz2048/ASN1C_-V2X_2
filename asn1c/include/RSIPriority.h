/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "asn/RSI.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_RSIPriority_H_
#define	_RSIPriority_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RSIPriority */
typedef OCTET_STRING_t	 RSIPriority_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RSIPriority_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RSIPriority;
asn_struct_free_f RSIPriority_free;
asn_struct_print_f RSIPriority_print;
asn_constr_check_f RSIPriority_constraint;
ber_type_decoder_f RSIPriority_decode_ber;
der_type_encoder_f RSIPriority_encode_der;
xer_type_decoder_f RSIPriority_decode_xer;
xer_type_encoder_f RSIPriority_encode_xer;
oer_type_decoder_f RSIPriority_decode_oer;
oer_type_encoder_f RSIPriority_encode_oer;
per_type_decoder_f RSIPriority_decode_uper;
per_type_encoder_f RSIPriority_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RSIPriority_H_ */
#include <asn_internal.h>
