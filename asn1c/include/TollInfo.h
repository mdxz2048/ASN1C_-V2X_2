/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VPM"
 * 	found in "asn/VPM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_TollInfo_H_
#define	_TollInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PositionOffsetLLV;
struct ReferencePath;
struct DDateTime;
struct NodeReferenceID;

/* TollInfo */
typedef struct TollInfo {
	long	*price	/* OPTIONAL */;
	struct PositionOffsetLLV	*entrancePos	/* OPTIONAL */;
	struct PositionOffsetLLV	*exitPos	/* OPTIONAL */;
	struct tollRoad {
		A_SEQUENCE_OF(struct NodeReferenceID) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tollRoad;
	struct ReferencePath	*tollPath	/* OPTIONAL */;
	struct DDateTime	*timeBegin	/* OPTIONAL */;
	struct DDateTime	*timeEnd	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TollInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TollInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_TollInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_TollInfo_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PositionOffsetLLV.h"
#include "ReferencePath.h"
#include "DDateTime.h"
#include "NodeReferenceID.h"

#endif	/* _TollInfo_H_ */
#include <asn_internal.h>
