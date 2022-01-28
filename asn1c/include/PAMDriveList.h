/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PAM"
 * 	found in "asn/PAM.asn"
 * 	`asn1c -D out/ -gen-autotools`
 */

#ifndef	_PAMDriveList_H_
#define	_PAMDriveList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PAMDrive;

/* PAMDriveList */
typedef struct PAMDriveList {
	A_SEQUENCE_OF(struct PAMDrive) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PAMDriveList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PAMDriveList;
extern asn_SET_OF_specifics_t asn_SPC_PAMDriveList_specs_1;
extern asn_TYPE_member_t asn_MBR_PAMDriveList_1[1];
extern asn_per_constraints_t asn_PER_type_PAMDriveList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PAMDrive.h"

#endif	/* _PAMDriveList_H_ */
#include <asn_internal.h>
