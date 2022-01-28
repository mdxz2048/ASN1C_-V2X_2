/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VPM"
 * 	found in "asn/VPM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_EquipmentClass_H_
#define	_EquipmentClass_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EquipmentClass {
	EquipmentClass_onechipOBU	= 0,
	EquipmentClass_iccOBU	= 1,
	EquipmentClass_cpcOBU	= 2
	/*
	 * Enumeration is extensible
	 */
} e_EquipmentClass;

/* EquipmentClass */
typedef long	 EquipmentClass_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EquipmentClass_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EquipmentClass;
extern const asn_INTEGER_specifics_t asn_SPC_EquipmentClass_specs_1;
asn_struct_free_f EquipmentClass_free;
asn_struct_print_f EquipmentClass_print;
asn_constr_check_f EquipmentClass_constraint;
ber_type_decoder_f EquipmentClass_decode_ber;
der_type_encoder_f EquipmentClass_encode_der;
xer_type_decoder_f EquipmentClass_decode_xer;
xer_type_encoder_f EquipmentClass_encode_xer;
oer_type_decoder_f EquipmentClass_decode_oer;
oer_type_encoder_f EquipmentClass_encode_oer;
per_type_decoder_f EquipmentClass_decode_uper;
per_type_encoder_f EquipmentClass_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EquipmentClass_H_ */
#include <asn_internal.h>
