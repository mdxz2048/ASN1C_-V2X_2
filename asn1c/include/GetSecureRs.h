/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VPM"
 * 	found in "asn/VPM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_GetSecureRs_H_
#define	_GetSecureRs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RangeOfFile.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GetSecureRs */
typedef struct GetSecureRs {
	RangeOfFile_t	 file;
	OCTET_STRING_t	 authenticator;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetSecureRs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetSecureRs;
extern asn_SEQUENCE_specifics_t asn_SPC_GetSecureRs_specs_1;
extern asn_TYPE_member_t asn_MBR_GetSecureRs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _GetSecureRs_H_ */
#include <asn_internal.h>
