/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "asn/RSI.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_RoadSideInformation_H_
#define	_RoadSideInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MsgCount.h"
#include "MinuteOfTheYear.h"
#include <OCTET_STRING.h>
#include "Position3D.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RTEList;
struct RTSList;

/* RoadSideInformation */
typedef struct RoadSideInformation {
	MsgCount_t	 msgCnt;
	MinuteOfTheYear_t	*moy	/* OPTIONAL */;
	OCTET_STRING_t	 id;
	Position3D_t	 refPos;
	struct RTEList	*rtes	/* OPTIONAL */;
	struct RTSList	*rtss	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoadSideInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadSideInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_RoadSideInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_RoadSideInformation_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RTEList.h"
#include "RTSList.h"

#endif	/* _RoadSideInformation_H_ */
#include <asn_internal.h>
