/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SensorSharing"
 * 	found in "asn/SensorSharing.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_AngularVConfidence_H_
#define	_AngularVConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AngularVConfidence {
	AngularVConfidence_unavailable	= 0,
	AngularVConfidence_prec100deg	= 1,
	AngularVConfidence_prec10deg	= 2,
	AngularVConfidence_prec5deg	= 3,
	AngularVConfidence_prec1deg	= 4,
	AngularVConfidence_prec0_1deg	= 5,
	AngularVConfidence_prec0_05deg	= 6,
	AngularVConfidence_prec0_01deg	= 7
} e_AngularVConfidence;

/* AngularVConfidence */
typedef long	 AngularVConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AngularVConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AngularVConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_AngularVConfidence_specs_1;
asn_struct_free_f AngularVConfidence_free;
asn_struct_print_f AngularVConfidence_print;
asn_constr_check_f AngularVConfidence_constraint;
ber_type_decoder_f AngularVConfidence_decode_ber;
der_type_encoder_f AngularVConfidence_encode_der;
xer_type_decoder_f AngularVConfidence_decode_xer;
xer_type_encoder_f AngularVConfidence_encode_xer;
oer_type_decoder_f AngularVConfidence_decode_oer;
oer_type_encoder_f AngularVConfidence_encode_oer;
per_type_decoder_f AngularVConfidence_decode_uper;
per_type_encoder_f AngularVConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AngularVConfidence_H_ */
#include <asn_internal.h>
