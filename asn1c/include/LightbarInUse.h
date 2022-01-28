/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VehEmgExt"
 * 	found in "asn/VehEmgExt.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_LightbarInUse_H_
#define	_LightbarInUse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LightbarInUse {
	LightbarInUse_unavailable	= 0,
	LightbarInUse_notInUse	= 1,
	LightbarInUse_inUse	= 2,
	LightbarInUse_yellowCautionLights	= 3,
	LightbarInUse_schooldBusLights	= 4,
	LightbarInUse_arrowSignsActive	= 5,
	LightbarInUse_slowMovingVehicle	= 6,
	LightbarInUse_freqStops	= 7
} e_LightbarInUse;

/* LightbarInUse */
typedef long	 LightbarInUse_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LightbarInUse_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LightbarInUse;
extern const asn_INTEGER_specifics_t asn_SPC_LightbarInUse_specs_1;
asn_struct_free_f LightbarInUse_free;
asn_struct_print_f LightbarInUse_print;
asn_constr_check_f LightbarInUse_constraint;
ber_type_decoder_f LightbarInUse_decode_ber;
der_type_encoder_f LightbarInUse_encode_der;
xer_type_decoder_f LightbarInUse_decode_xer;
xer_type_encoder_f LightbarInUse_encode_xer;
oer_type_decoder_f LightbarInUse_decode_oer;
oer_type_encoder_f LightbarInUse_encode_oer;
per_type_decoder_f LightbarInUse_decode_uper;
per_type_encoder_f LightbarInUse_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LightbarInUse_H_ */
#include <asn_internal.h>
