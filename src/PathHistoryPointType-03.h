/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_R36_Source.ASN"
 * 	`asn1c -S ../../../../tools/asn1c/skeletons -pdu=BasicSafetyMessage -fcompound-names`
 */

#ifndef	_PathHistoryPointType_03_H_
#define	_PathHistoryPointType_03_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PathHistoryPointType-03 */
typedef OCTET_STRING_t	 PathHistoryPointType_03_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PathHistoryPointType_03;
asn_struct_free_f PathHistoryPointType_03_free;
asn_struct_print_f PathHistoryPointType_03_print;
asn_constr_check_f PathHistoryPointType_03_constraint;
ber_type_decoder_f PathHistoryPointType_03_decode_ber;
der_type_encoder_f PathHistoryPointType_03_encode_der;
xer_type_decoder_f PathHistoryPointType_03_decode_xer;
xer_type_encoder_f PathHistoryPointType_03_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PathHistoryPointType_03_H_ */
#include <asn_internal.h>
