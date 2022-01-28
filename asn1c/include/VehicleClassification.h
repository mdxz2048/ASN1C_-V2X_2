/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VehClass"
 * 	found in "asn/VehClass.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_VehicleClassification_H_
#define	_VehicleClassification_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BasicVehicleClass.h"
#include "FuelType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VehicleClassification */
typedef struct VehicleClassification {
	BasicVehicleClass_t	 classification;
	FuelType_t	*fuelType	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleClassification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleClassification;
extern asn_SEQUENCE_specifics_t asn_SPC_VehicleClassification_specs_1;
extern asn_TYPE_member_t asn_MBR_VehicleClassification_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleClassification_H_ */
#include <asn_internal.h>
