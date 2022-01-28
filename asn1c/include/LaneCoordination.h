/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSC"
 * 	found in "asn/RSC.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_LaneCoordination_H_
#define	_LaneCoordination_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReferenceLink.h"
#include "Speed.h"
#include "DriveBehavior.h"
#include "CoordinationInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReferencePath;
struct DDateTime;
struct Description;

/* LaneCoordination */
typedef struct LaneCoordination {
	ReferenceLink_t	 targetLane;
	struct ReferencePath	*relatedPath	/* OPTIONAL */;
	struct DDateTime	*tBegin	/* OPTIONAL */;
	struct DDateTime	*tEnd	/* OPTIONAL */;
	Speed_t	*recommendedSpeed	/* OPTIONAL */;
	DriveBehavior_t	*recommendedBehavior	/* OPTIONAL */;
	CoordinationInfo_t	*info	/* OPTIONAL */;
	struct Description	*description	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LaneCoordination_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneCoordination;
extern asn_SEQUENCE_specifics_t asn_SPC_LaneCoordination_specs_1;
extern asn_TYPE_member_t asn_MBR_LaneCoordination_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReferencePath.h"
#include "DDateTime.h"
#include "Description.h"

#endif	/* _LaneCoordination_H_ */
#include <asn_internal.h>
