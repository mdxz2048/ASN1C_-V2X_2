/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PSM"
 * 	found in "asn/PSM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_PersonalSafetyMessage_H_
#define	_PersonalSafetyMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MsgCount.h"
#include <OCTET_STRING.h>
#include "DSecond.h"
#include "TimeConfidence.h"
#include "Position3D.h"
#include "PositionalAccuracy.h"
#include "Speed.h"
#include "Heading.h"
#include <NativeInteger.h>
#include "Non-motorData.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AccelerationSet4Way;
struct PathHistory;
struct PathPlanning;

/* PersonalSafetyMessage */
typedef struct PersonalSafetyMessage {
	MsgCount_t	 msgCnt;
	OCTET_STRING_t	 id;
	DSecond_t	 secMark;
	TimeConfidence_t	*timeConfidence	/* OPTIONAL */;
	Position3D_t	 pos;
	PositionalAccuracy_t	 posAccuracy;
	Speed_t	 speed;
	Heading_t	 heading;
	struct AccelerationSet4Way	*accelSet	/* OPTIONAL */;
	struct PathHistory	*pathHistory	/* OPTIONAL */;
	struct PathPlanning	*path_Planning	/* OPTIONAL */;
	long	 overallRadius;
	Non_motorData_t	 non_motorData;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PersonalSafetyMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PersonalSafetyMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_PersonalSafetyMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_PersonalSafetyMessage_1[13];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AccelerationSet4Way.h"
#include "PathHistory.h"
#include "PathPlanning.h"

#endif	/* _PersonalSafetyMessage_H_ */
#include <asn_internal.h>
