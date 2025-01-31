// CkJwsU.h: interface for the CkJwsU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkJwsU_H
#define _CkJwsU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkUtf16Base.h"

class CkStringBuilderU;
class CkBinDataU;
class CkJsonObjectU;
class CkPrivateKeyU;
class CkPublicKeyU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkJwsU
class CK_VISIBLE_PUBLIC CkJwsU  : public CkUtf16Base
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkJwsU(const CkJwsU &);
	CkJwsU &operator=(const CkJwsU &);

    public:
	CkJwsU(void);
	virtual ~CkJwsU(void);

	

	static CkJwsU *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of signatures contained in this JWS.
	int get_NumSignatures(void);

	// Controls whether to use the JWS Compact Serialization or JWS JSON Serialization
	// when creating JWSs. The default value is true, which is to choose the compact
	// serialization when possible. If multiple signatures exist, or if any unprotected
	// headers exist, then JWS JSON Serialization is used regardless of this property
	// setting.
	bool get_PreferCompact(void);
	// Controls whether to use the JWS Compact Serialization or JWS JSON Serialization
	// when creating JWSs. The default value is true, which is to choose the compact
	// serialization when possible. If multiple signatures exist, or if any unprotected
	// headers exist, then JWS JSON Serialization is used regardless of this property
	// setting.
	void put_PreferCompact(bool newVal);

	// Controls whether to use the flattened or general JWE JSON Serialization when
	// creating JWSs. The default value is true, which is to choose the flattened
	// serialization when possible. If multiple signatures exist, then the general
	// (non-flattened) JWS JSON Serialization is used regardless of this property
	// setting.
	bool get_PreferFlattened(void);
	// Controls whether to use the flattened or general JWE JSON Serialization when
	// creating JWSs. The default value is true, which is to choose the flattened
	// serialization when possible. If multiple signatures exist, then the general
	// (non-flattened) JWS JSON Serialization is used regardless of this property
	// setting.
	void put_PreferFlattened(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Creates and returns the JWS containing one or more signatures according to the
	// previously set payload, headers, and keys.
	bool CreateJws(CkString &outStr);
	// Creates and returns the JWS containing one or more signatures according to the
	// previously set payload, headers, and keys.
	const uint16_t *createJws(void);

	// Creates and returns the JWS by appending it to the contents of sbJws.
	bool CreateJwsSb(CkStringBuilderU &sbJws);

	// Returns the JWS payload. The charset specifies the byte representation to be used
	// in interpreting the bytes of the payload. (For example, "utf-8", "windows-1252",
	// "utf-16", etc.)
	bool GetPayload(const uint16_t *charset, CkString &outStr);
	// Returns the JWS payload. The charset specifies the byte representation to be used
	// in interpreting the bytes of the payload. (For example, "utf-8", "windows-1252",
	// "utf-16", etc.)
	const uint16_t *getPayload(const uint16_t *charset);
	// Returns the JWS payload. The charset specifies the byte representation to be used
	// in interpreting the bytes of the payload. (For example, "utf-8", "windows-1252",
	// "utf-16", etc.)
	const uint16_t *payload(const uint16_t *charset);

	// Returns the JWS payload by appending it to the binData.
	bool GetPayloadBd(CkBinDataU &binData);

	// Returns the JWS payload by appending it to the sbPayload. The charset specifies the byte
	// representation to be used in interpreting the bytes of the payload. (For
	// example, "utf-8", "windows-1252", "utf-16", etc.)
	bool GetPayloadSb(const uint16_t *charset, CkStringBuilderU &sbPayload);

	// Returns the protected header for the Nth signature. The index is the index of the
	// signature. The 1st signature is at index 0. In most cases, a JWS contains a
	// single signature at index 0.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObjectU *GetProtectedHeader(int index);

	// Returns the optional unprotected header for the Nth signature. The index is the
	// index of the signature. The 1st signature is at index 0. In most cases, a JWS
	// contains a single signature at index 0.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObjectU *GetUnprotectedHeader(int index);

	// Loads a JWS contained in jwsStr.
	bool LoadJws(const uint16_t *jwsStr);

	// Loads a JWS from the contents of sbJws.
	bool LoadJwsSb(CkStringBuilderU &sbJws);

	// Sets the MAC key to be used for creating or validating a signature for the
	// algorithms "HS256", "HS384", or "HS512". The key is an encoded string
	// representation of the MAC key bytes. The encoding is an encoding, such as
	// "base64url", "base64", "hex", etc. The 1st signature is at index 0. (Most JWSs
	// only contain a single signature.)
	bool SetMacKey(int index, const uint16_t *key, const uint16_t *encoding);

	// Sets the MAC key to be used for creating or validating a signature for the
	// algorithms "HS256", "HS384", or "HS512". The key contains the binary bytes of
	// the MAC key for the Nth signature. The 1st signature is at index 0.
	bool SetMacKeyBd(int index, CkBinDataU &key);

	// Sets the JWS payload from the contents of payload. The charset specifies the byte
	// representation to be used for the string that is to be the payload. (For
	// example, "utf-8", "windows-1252", "utf-16", etc.). If includeBom is true, then the
	// byte-order-mark (BOM), also known as preamble, if one exists for the given charset,
	// is included in the payload. Normally, includeBom should be set to false.
	bool SetPayload(const uint16_t *payload, const uint16_t *charset, bool includeBom);

	// Sets the JWS payload from the contents of binData.
	bool SetPayloadBd(CkBinDataU &binData);

	// Sets the JWS payload from the contents of sbPayload. The charset specifies the byte
	// representation to be used for the string that is to be the payload. (For
	// example, "utf-8", "windows-1252", "utf-16", etc.). If includeBom is true, then the
	// byte-order-mark (BOM), also known as preamble, if one exists for the given charset,
	// is included in the payload. Normally, includeBom should be set to false.
	bool SetPayloadSb(CkStringBuilderU &sbPayload, const uint16_t *charset, bool includeBom);

	// Sets the private key (ECC or RSA) to be used in creating a signature for the
	// following algorithms:
	// RS256
	// RS384
	// RS512
	// ES256
	// ES384
	// ES512
	// PS256
	// PS384
	// PS512
	// The JWS algorithms are described in RFC 7518, section 3.1. Here is a summary:
	//    +--------------+-------------------------------+--------------------+
	//    | "alg" Param  | Digital Signature or MAC      | Implementation     |
	//    | Value        | Algorithm                     | Requirements       |
	//    +--------------+-------------------------------+--------------------+
	//    | HS256        | HMAC using SHA-256            | Required           |
	//    | HS384        | HMAC using SHA-384            | Optional           |
	//    | HS512        | HMAC using SHA-512            | Optional           |
	//    | RS256        | RSASSA-PKCS1-v1_5 using       | Recommended        |
	//    |              | SHA-256                       |                    |
	//    | RS384        | RSASSA-PKCS1-v1_5 using       | Optional           |
	//    |              | SHA-384                       |                    |
	//    | RS512        | RSASSA-PKCS1-v1_5 using       | Optional           |
	//    |              | SHA-512                       |                    |
	//    | ES256        | ECDSA using P-256 and SHA-256 | Recommended+       |
	//    | ES384        | ECDSA using P-384 and SHA-384 | Optional           |
	//    | ES512        | ECDSA using P-521 and SHA-512 | Optional           |
	//    | PS256        | RSASSA-PSS using SHA-256 and  | Optional           |
	//    |              | MGF1 with SHA-256             |                    |
	//    | PS384        | RSASSA-PSS using SHA-384 and  | Optional           |
	//    |              | MGF1 with SHA-384             |                    |
	//    | PS512        | RSASSA-PSS using SHA-512 and  | Optional           |
	//    |              | MGF1 with SHA-512             |                    |
	//    | none         | No digital signature or MAC   | Optional           |
	//    |              | performed                     |                    |
	//    +--------------+-------------------------------+--------------------+
	bool SetPrivateKey(int index, CkPrivateKeyU &privKey);

	// Sets a signature's protected header. The index is the index of the signature. The
	// 1st signature is at index 0. In most cases, a JWS contains a single signature at
	// index 0.
	bool SetProtectedHeader(int index, CkJsonObjectU &json);

	// Sets the public key (ECC or RSA) to be used in validating a signature for the
	// following algorithms:
	// RS256
	// RS384
	// RS512
	// ES256
	// ES384
	// ES512
	// PS256
	// PS384
	// PS512
	bool SetPublicKey(int index, CkPublicKeyU &pubKey);

	// Sets a signature's optional unprotected header. The index is the index of the
	// signature. The 1st signature is at index 0. In most cases, a JWS contains a
	// single signature at index 0.
	bool SetUnprotectedHeader(int index, CkJsonObjectU &json);

	// Validates the Nth signature or MAC using the Nth public key or MAC key.
	// 
	// Returns 1 if the signature was validated, thus verifying that the signer used
	// the same MAC key or the matching private key.
	// Returns 0 if the incorrect public key or MAC key was provided.
	// Returns -1 for any other error, such as if no public key or MAC key was
	// previously set for the given index.
	// 
	// Prior to calling this method, a program should provide the public key or MAC key
	// via the SetPublicKey, SetMacKey, or SetMacKeyBd methods.
	// 
	int Validate(int index);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
