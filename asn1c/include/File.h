/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VPM"
 * 	found in "asn/VPM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_File_H_
#define	_File_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* File */
typedef OCTET_STRING_t	 File_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_File_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_File;
asn_struct_free_f File_free;
asn_struct_print_f File_print;
asn_constr_check_f File_constraint;
ber_type_decoder_f File_decode_ber;
der_type_encoder_f File_encode_der;
xer_type_decoder_f File_decode_xer;
xer_type_encoder_f File_encode_xer;
oer_type_decoder_f File_decode_oer;
oer_type_encoder_f File_encode_oer;
per_type_decoder_f File_decode_uper;
per_type_encoder_f File_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _File_H_ */
#include <asn_internal.h>
