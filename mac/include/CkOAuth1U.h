// CkOAuth1U.h: interface for the CkOAuth1U class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkOAuth1U_H
#define _CkOAuth1U_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkUtf16Base.h"

class CkPrivateKeyU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkOAuth1U
class CK_VISIBLE_PUBLIC CkOAuth1U  : public CkUtf16Base
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkOAuth1U(const CkOAuth1U &);
	CkOAuth1U &operator=(const CkOAuth1U &);

    public:
	CkOAuth1U(void);
	virtual ~CkOAuth1U(void);

	

	static CkOAuth1U *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The authorization header. This is what would be included in the Authorization
	// HTTP request header if it is going to be used as the means for providing the
	// OAuth1 authorization information.
	void get_AuthorizationHeader(CkString &str);
	// The authorization header. This is what would be included in the Authorization
	// HTTP request header if it is going to be used as the means for providing the
	// OAuth1 authorization information.
	const uint16_t *authorizationHeader(void);

	// This is the exact string that was signed. For example, if the signature method
	// is HMAC-SHA1, the BaseString is the exact string that passed to the HMAC-SHA1.
	// An application does not set the BaseString property. The BaseString is exposed
	// as a property to allow for debugging and to see the exact string that is signed.
	void get_BaseString(CkString &str);
	// This is the exact string that was signed. For example, if the signature method
	// is HMAC-SHA1, the BaseString is the exact string that passed to the HMAC-SHA1.
	// An application does not set the BaseString property. The BaseString is exposed
	// as a property to allow for debugging and to see the exact string that is signed.
	const uint16_t *baseString(void);

	// The consumer key.
	void get_ConsumerKey(CkString &str);
	// The consumer key.
	const uint16_t *consumerKey(void);
	// The consumer key.
	void put_ConsumerKey(const uint16_t *newVal);

	// The consumer secret.
	void get_ConsumerSecret(CkString &str);
	// The consumer secret.
	const uint16_t *consumerSecret(void);
	// The consumer secret.
	void put_ConsumerSecret(const uint16_t *newVal);

	// The URL encoded representation of the Signature property
	void get_EncodedSignature(CkString &str);
	// The URL encoded representation of the Signature property
	const uint16_t *encodedSignature(void);

	// The URL that includes the OAuth1 query params.
	void get_GeneratedUrl(CkString &str);
	// The URL that includes the OAuth1 query params.
	const uint16_t *generatedUrl(void);

	// The exact HMAC key used to sign the BaseString. An application does not directly
	// set the HmacKey. The HmacKey property is read-only and is provided for debugging
	// to see the exact HMAC key used to sign the BaseString. The HMAC key is composed
	// from the consumer secret (if it exists) and the token secret (if it exists).
	void get_HmacKey(CkString &str);
	// The exact HMAC key used to sign the BaseString. An application does not directly
	// set the HmacKey. The HmacKey property is read-only and is provided for debugging
	// to see the exact HMAC key used to sign the BaseString. The HMAC key is composed
	// from the consumer secret (if it exists) and the token secret (if it exists).
	const uint16_t *hmacKey(void);

	// The nonce.
	void get_Nonce(CkString &str);
	// The nonce.
	const uint16_t *nonce(void);
	// The nonce.
	void put_Nonce(const uint16_t *newVal);

	// The HTTP method, such as "GET", "POST", "PUT", "DELETE", or "HEAD". Defaults to
	// "GET".
	void get_OauthMethod(CkString &str);
	// The HTTP method, such as "GET", "POST", "PUT", "DELETE", or "HEAD". Defaults to
	// "GET".
	const uint16_t *oauthMethod(void);
	// The HTTP method, such as "GET", "POST", "PUT", "DELETE", or "HEAD". Defaults to
	// "GET".
	void put_OauthMethod(const uint16_t *newVal);

	// The OAuth URL, such as "http://echo.lab.madgex.com/echo.ashx". See
	// http://bettiolo.github.io/oauth-reference-page/ to compare Chilkat results with
	// another tool's results.
	// 
	// Note: The OAuthUrl should not include query parameters. For example, do not set
	// the OAuthUrl equal
	// tohttps://rest.sandbox.netsuite.com/app/site/hosting/restlet.nl?script=165&deploy
	// =1 Instead, set OAuthUrl equal
	// tohttps://rest.sandbox.netsuite.com/app/site/hosting/restlet.nl and then
	// subsequently call AddParam for each query parameter.
	// 
	void get_OauthUrl(CkString &str);
	// The OAuth URL, such as "http://echo.lab.madgex.com/echo.ashx". See
	// http://bettiolo.github.io/oauth-reference-page/ to compare Chilkat results with
	// another tool's results.
	// 
	// Note: The OAuthUrl should not include query parameters. For example, do not set
	// the OAuthUrl equal
	// tohttps://rest.sandbox.netsuite.com/app/site/hosting/restlet.nl?script=165&deploy
	// =1 Instead, set OAuthUrl equal
	// tohttps://rest.sandbox.netsuite.com/app/site/hosting/restlet.nl and then
	// subsequently call AddParam for each query parameter.
	// 
	const uint16_t *oauthUrl(void);
	// The OAuth URL, such as "http://echo.lab.madgex.com/echo.ashx". See
	// http://bettiolo.github.io/oauth-reference-page/ to compare Chilkat results with
	// another tool's results.
	// 
	// Note: The OAuthUrl should not include query parameters. For example, do not set
	// the OAuthUrl equal
	// tohttps://rest.sandbox.netsuite.com/app/site/hosting/restlet.nl?script=165&deploy
	// =1 Instead, set OAuthUrl equal
	// tohttps://rest.sandbox.netsuite.com/app/site/hosting/restlet.nl and then
	// subsequently call AddParam for each query parameter.
	// 
	void put_OauthUrl(const uint16_t *newVal);

	// The oauth_version. Defaults to "1.0". May be set to the empty string to exclude.
	void get_OauthVersion(CkString &str);
	// The oauth_version. Defaults to "1.0". May be set to the empty string to exclude.
	const uint16_t *oauthVersion(void);
	// The oauth_version. Defaults to "1.0". May be set to the empty string to exclude.
	void put_OauthVersion(const uint16_t *newVal);

	// Contains the normalized set of request parameters that are signed. This is a
	// read-only property made available for debugging purposes.
	void get_QueryString(CkString &str);
	// Contains the normalized set of request parameters that are signed. This is a
	// read-only property made available for debugging purposes.
	const uint16_t *queryString(void);

	// The realm (optional).
	void get_Realm(CkString &str);
	// The realm (optional).
	const uint16_t *realm(void);
	// The realm (optional).
	void put_Realm(const uint16_t *newVal);

	// The generated base64 signature.
	void get_Signature(CkString &str);
	// The generated base64 signature.
	const uint16_t *signature(void);

	// The signature method. Defaults to "HMAC-SHA1". Other possible choices are
	// "HMAC1-SHA256", "RSA-SHA1", and "RSA-SHA2".
	void get_SignatureMethod(CkString &str);
	// The signature method. Defaults to "HMAC-SHA1". Other possible choices are
	// "HMAC1-SHA256", "RSA-SHA1", and "RSA-SHA2".
	const uint16_t *signatureMethod(void);
	// The signature method. Defaults to "HMAC-SHA1". Other possible choices are
	// "HMAC1-SHA256", "RSA-SHA1", and "RSA-SHA2".
	void put_SignatureMethod(const uint16_t *newVal);

	// The timestamp, such as "1441632569".
	void get_Timestamp(CkString &str);
	// The timestamp, such as "1441632569".
	const uint16_t *timestamp(void);
	// The timestamp, such as "1441632569".
	void put_Timestamp(const uint16_t *newVal);

	// The token.
	void get_Token(CkString &str);
	// The token.
	const uint16_t *token(void);
	// The token.
	void put_Token(const uint16_t *newVal);

	// The token secret
	void get_TokenSecret(CkString &str);
	// The token secret
	const uint16_t *tokenSecret(void);
	// The token secret
	void put_TokenSecret(const uint16_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds an extra name/value parameter to the OAuth1 signature.
	bool AddParam(const uint16_t *name, const uint16_t *value);

	// Generate the signature based on the property settings. Input properties are
	// OauthVersion, OauthMethod, Url, ConsumerKey, ConsumerSecret, Token, TokenSecret,
	// Nonce, and Timestamp. Properties set by this method include: BaseString,
	// Signature, HmacKey, EncodedSignature, QueryString, GeneratedUrl,
	// andAuthorizationHeader.
	bool Generate(void);

	// Generates a random nonce numBytes in length and sets the Nonce property to the hex
	// encoded value.
	bool GenNonce(int numBytes);

	// Sets the Timestamp property to the current date/time.
	bool GenTimestamp(void);

	// Removes a name/value parameter from the OAuth1 signature.
	bool RemoveParam(const uint16_t *name);

	// Sets the RSA key to be used when the SignatureMethod is set to "RSA-SHA1" or
	// "RSA-SHA2".
	bool SetRsaKey(CkPrivateKeyU &privKey);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
