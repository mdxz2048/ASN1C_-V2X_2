/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PAM"
 * 	found in "asn/PAM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_ParkingSlotPosition_H_
#define	_ParkingSlotPosition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PositionOffsetLLV.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ParkingSlotPosition */
typedef struct ParkingSlotPosition {
	PositionOffsetLLV_t	 topLeft;
	PositionOffsetLLV_t	 topRight;
	PositionOffsetLLV_t	 bottomLeft;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ParkingSlotPosition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ParkingSlotPosition;
extern asn_SEQUENCE_specifics_t asn_SPC_ParkingSlotPosition_specs_1;
extern asn_TYPE_member_t asn_MBR_ParkingSlotPosition_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ParkingSlotPosition_H_ */
#include <asn_internal.h>
