/*
 * Generated by asn1c-0.9.26 (http://lionet.info/asn1c)
 * From ASN.1 module "J2735BSMESSAGE"
 * 	found in "BasicSafetyMessage-Volvo.txt"
 * 	`asn1c -S/home/jspring/downloads/asn1c-0.9.26/skeletons`
 */

#ifndef	_CACCFlags_H_
#define	_CACCFlags_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CACCFlags */
typedef OCTET_STRING_t	 CACCFlags_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CACCFlags;
asn_struct_free_f CACCFlags_free;
asn_struct_print_f CACCFlags_print;
asn_constr_check_f CACCFlags_constraint;
ber_type_decoder_f CACCFlags_decode_ber;
der_type_encoder_f CACCFlags_encode_der;
xer_type_decoder_f CACCFlags_decode_xer;
xer_type_encoder_f CACCFlags_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CACCFlags_H_ */
#include <asn_internal.h>
