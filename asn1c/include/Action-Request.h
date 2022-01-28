/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VPM"
 * 	found in "asn/VPM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_Action_Request_H_
#define	_Action_Request_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DDateTime.h"
#include <BOOLEAN.h>
#include <OCTET_STRING.h>
#include "PaymentEntityID.h"
#include "TransInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Action-Request */
typedef struct Action_Request {
	DDateTime_t	 time;
	BOOLEAN_t	 mode;
	OCTET_STRING_t	 sourceId;
	OCTET_STRING_t	*targetId	/* OPTIONAL */;
	PaymentEntityID_t	 paymentEntityId;
	TransInfo_t	 actionParameter;
	OCTET_STRING_t	*accessCredentials	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Action_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Action_Request;
extern asn_SEQUENCE_specifics_t asn_SPC_Action_Request_specs_1;
extern asn_TYPE_member_t asn_MBR_Action_Request_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _Action_Request_H_ */
#include <asn_internal.h>
