// CkRestU.h: interface for the CkRestU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkRestU_H
#define _CkRestU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkClassWithCallbacksU.h"

class CkStringBuilderU;
class CkTaskU;
class CkBinDataU;
class CkByteData;
class CkStreamU;
class CkJsonObjectU;
class CkUrlU;
class CkAuthAwsU;
class CkAuthAzureADU;
class CkAuthAzureSASU;
class CkAuthAzureStorageU;
class CkSecureStringU;
class CkAuthGoogleU;
class CkOAuth1U;
class CkOAuth2U;
class CkSocketU;
class CkBaseProgressU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkRestU
class CK_VISIBLE_PUBLIC CkRestU  : public CkClassWithCallbacksU
{
	public:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkRestU(const CkRestU &);
	CkRestU &operator=(const CkRestU &);

    public:
	CkRestU(void);
	virtual ~CkRestU(void);

	

	static CkRestU *createNew(void);
	

	CkRestU(bool bCallbackOwned);
	static CkRestU *createNew(bool bCallbackOwned);

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkBaseProgressU *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgressU *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// If this property is set to false, then no MIME header folding will be
	// automatically applied to any request header. The default is true. This
	// property is provided to satisfy certain providers, such as Quickbooks, that
	// require all MIME headers to be single unfolded lines regardless of length.
	bool get_AllowHeaderFolding(void);
	// If this property is set to false, then no MIME header folding will be
	// automatically applied to any request header. The default is true. This
	// property is provided to satisfy certain providers, such as Quickbooks, that
	// require all MIME headers to be single unfolded lines regardless of length.
	void put_AllowHeaderFolding(bool newVal);

	// Controls whether non us-ascii HTTP request headers are automatically Q/B
	// encoded. The default value is true.
	// 
	// Q/B encoded headers explicitly indicate the charset and byte representation, and
	// appear as such: =?utf-8?Q?...?= or =?utf-8?B?...?=, where the charset may be
	// "utf-8" or any other possible charset.
	// 
	// If this property is set to false, then no Q/B encoding is applied to any
	// request header.
	// 
	bool get_AllowHeaderQB(void);
	// Controls whether non us-ascii HTTP request headers are automatically Q/B
	// encoded. The default value is true.
	// 
	// Q/B encoded headers explicitly indicate the charset and byte representation, and
	// appear as such: =?utf-8?Q?...?= or =?utf-8?B?...?=, where the charset may be
	// "utf-8" or any other possible charset.
	// 
	// If this property is set to false, then no Q/B encoding is applied to any
	// request header.
	// 
	void put_AllowHeaderQB(bool newVal);

	// The value of the Authorization HTTP request header (if needed).
	void get_Authorization(CkString &str);
	// The value of the Authorization HTTP request header (if needed).
	const uint16_t *authorization(void);
	// The value of the Authorization HTTP request header (if needed).
	void put_Authorization(const uint16_t *newVal);

	// If the Connect method fails, this property can be checked to determine the
	// reason for failure.
	// 
	// Possible values are:
	// 0 = success
	// 
	// Normal (non-SSL) sockets:
	// 1 = empty hostname
	// 2 = DNS lookup failed
	// 3 = DNS timeout
	// 4 = Aborted by application.
	// 5 = Internal failure.
	// 6 = Connect Timed Out
	// 7 = Connect Rejected (or failed for some other reason)
	// 
	// SSL/TLS:
	// 100 = TLS internal error.
	// 101 = Failed to send client hello.
	// 102 = Unexpected handshake message.
	// 103 = Failed to read server hello.
	// 104 = No server certificate.
	// 105 = Unexpected TLS protocol version.
	// 106 = Server certificate verify failed (the server certificate is expired or the cert's signature verification failed).
	// 107 = Unacceptable TLS protocol version.
	// 109 = Failed to read handshake messages.
	// 110 = Failed to send client certificate handshake message.
	// 111 = Failed to send client key exchange handshake message.
	// 112 = Client certificate's private key not accessible.
	// 113 = Failed to send client cert verify handshake message.
	// 114 = Failed to send change cipher spec handshake message.
	// 115 = Failed to send finished handshake message.
	// 116 = Server's Finished message is invalid.
	// 
	int get_ConnectFailReason(void);

	// The maximum amount of time to wait for the connection to be accepted by the HTTP
	// server.
	// 
	// Note: Suprisingly, this property was forgotten and not added until Chilkat
	// v9.5.0.71.
	// 
	int get_ConnectTimeoutMs(void);
	// The maximum amount of time to wait for the connection to be accepted by the HTTP
	// server.
	// 
	// Note: Suprisingly, this property was forgotten and not added until Chilkat
	// v9.5.0.71.
	// 
	void put_ConnectTimeoutMs(int newVal);

	// If true then all calls to Send* or FullRequest* methods will not actually send
	// a request. Instead, the request will be written to a memory buffer which can
	// then be retrieved by calling GetLastDebugRequest.
	bool get_DebugMode(void);
	// If true then all calls to Send* or FullRequest* methods will not actually send
	// a request. Instead, the request will be written to a memory buffer which can
	// then be retrieved by calling GetLastDebugRequest.
	void put_DebugMode(bool newVal);

	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Specifies the time interval in milliseconds between AbortCheck events. A value
	// of 0 (the default) indicate that no AbortCheck events will fire. Any REST method
	// can be aborted via the AbortCheck event.
	// 
	int get_HeartbeatMs(void);
	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Specifies the time interval in milliseconds between AbortCheck events. A value
	// of 0 (the default) indicate that no AbortCheck events will fire. Any REST method
	// can be aborted via the AbortCheck event.
	// 
	void put_HeartbeatMs(int newVal);

	// The value of the Host HTTP request header.
	void get_Host(CkString &str);
	// The value of the Host HTTP request header.
	const uint16_t *host(void);
	// The value of the Host HTTP request header.
	void put_Host(const uint16_t *newVal);

	// The maximum amount of time to wait for additional incoming data when receiving,
	// or the max time to wait to send additional data. The default value is 30000 (30
	// seconds). This is not an overall max timeout. Rather, it is the maximum time to
	// wait when receiving or sending has halted.
	int get_IdleTimeoutMs(void);
	// The maximum amount of time to wait for additional incoming data when receiving,
	// or the max time to wait to send additional data. The default value is 30000 (30
	// seconds). This is not an overall max timeout. Rather, it is the maximum time to
	// wait when receiving or sending has halted.
	void put_IdleTimeoutMs(int newVal);

	// The full MIME header (not including the HTTP start line which contains the
	// status code and status text), of the last request sent.
	void get_LastRequestHeader(CkString &str);
	// The full MIME header (not including the HTTP start line which contains the
	// status code and status text), of the last request sent.
	const uint16_t *lastRequestHeader(void);

	// The full start line of the last request sent. (The start line begins with the
	// HTTP verb, such as GET, POST, etc., is followed by the URI path, and ends with
	// the HTTP version.)
	void get_LastRequestStartLine(CkString &str);
	// The full start line of the last request sent. (The start line begins with the
	// HTTP verb, such as GET, POST, etc., is followed by the URI path, and ends with
	// the HTTP version.)
	const uint16_t *lastRequestStartLine(void);

	// The number of response header fields. The first response header field is at
	// index 0.
	int get_NumResponseHeaders(void);

	// Only used for multipart requests. Selects the target MIME part for calls to
	// AddHeader, RemoveHeader, SetMultipartBodyBinary, SetMultipartBodyString,
	// SetMultipartBodyStream, etc. The default is an empty string and indicates the
	// top-level header. A string value of "1" would indicate the 1st sub-part in a
	// multipart request. A string value of "1.2" would indicate the 2nd sub-part under
	// the 1st sub-part.
	// 
	// It is unlikely you'll ever encounter the need for nested multipart requests
	// (i.e. part selectors such as "1.2") Also, most REST requests are NOT multipart,
	// and therefore this feature is rarely used. An example of a multipart REST
	// request would be for a Google Drive upload, where the top-level Content-Type is
	// multipart/related, the1st sub-part contains the JSON meta-data, and the 2nd
	// sub-part contains the file data.
	// 
	void get_PartSelector(CkString &str);
	// Only used for multipart requests. Selects the target MIME part for calls to
	// AddHeader, RemoveHeader, SetMultipartBodyBinary, SetMultipartBodyString,
	// SetMultipartBodyStream, etc. The default is an empty string and indicates the
	// top-level header. A string value of "1" would indicate the 1st sub-part in a
	// multipart request. A string value of "1.2" would indicate the 2nd sub-part under
	// the 1st sub-part.
	// 
	// It is unlikely you'll ever encounter the need for nested multipart requests
	// (i.e. part selectors such as "1.2") Also, most REST requests are NOT multipart,
	// and therefore this feature is rarely used. An example of a multipart REST
	// request would be for a Google Drive upload, where the top-level Content-Type is
	// multipart/related, the1st sub-part contains the JSON meta-data, and the 2nd
	// sub-part contains the file data.
	// 
	const uint16_t *partSelector(void);
	// Only used for multipart requests. Selects the target MIME part for calls to
	// AddHeader, RemoveHeader, SetMultipartBodyBinary, SetMultipartBodyString,
	// SetMultipartBodyStream, etc. The default is an empty string and indicates the
	// top-level header. A string value of "1" would indicate the 1st sub-part in a
	// multipart request. A string value of "1.2" would indicate the 2nd sub-part under
	// the 1st sub-part.
	// 
	// It is unlikely you'll ever encounter the need for nested multipart requests
	// (i.e. part selectors such as "1.2") Also, most REST requests are NOT multipart,
	// and therefore this feature is rarely used. An example of a multipart REST
	// request would be for a Google Drive upload, where the top-level Content-Type is
	// multipart/related, the1st sub-part contains the JSON meta-data, and the 2nd
	// sub-part contains the file data.
	// 
	void put_PartSelector(const uint16_t *newVal);

	// This property only applies to the FullRequest* methods, which are methods that
	// both send an HTTP request and receive the response. (It also only applies to
	// programming languages that support event callbacks.) It determines whether
	// percentage completion is tracked for the sending of the HTTP request, or for the
	// downloading the HTTP response. The default value is false, which is to measure
	// the percent completion when receiving the response.
	// 
	// For example: If the REST request is to download a file, then this property
	// should remain at the default value of false. If the REST request is to upload
	// a file (using a Full* method), then set this property to true. Also note if a
	// server sends an HTTP response in the chunked encoding, it is not possible to
	// measure percent completion because the HTTP client has no way of knowing the
	// total size of the HTTP response.
	// 
	bool get_PercentDoneOnSend(void);
	// This property only applies to the FullRequest* methods, which are methods that
	// both send an HTTP request and receive the response. (It also only applies to
	// programming languages that support event callbacks.) It determines whether
	// percentage completion is tracked for the sending of the HTTP request, or for the
	// downloading the HTTP response. The default value is false, which is to measure
	// the percent completion when receiving the response.
	// 
	// For example: If the REST request is to download a file, then this property
	// should remain at the default value of false. If the REST request is to upload
	// a file (using a Full* method), then set this property to true. Also note if a
	// server sends an HTTP response in the chunked encoding, it is not possible to
	// measure percent completion because the HTTP client has no way of knowing the
	// total size of the HTTP response.
	// 
	void put_PercentDoneOnSend(bool newVal);

	// The full response MIME header (not including the HTTP start line which contains
	// the status code and status text).
	void get_ResponseHeader(CkString &str);
	// The full response MIME header (not including the HTTP start line which contains
	// the status code and status text).
	const uint16_t *responseHeader(void);

	// The response status code.
	int get_ResponseStatusCode(void);

	// The status message corresponding to the response status code.
	void get_ResponseStatusText(CkString &str);
	// The status message corresponding to the response status code.
	const uint16_t *responseStatusText(void);

	// If true, then methods that upload data are sent non-chunked if possible. For
	// example, if the FullRequestStream method is called where the stream is a file
	// stream, then the size of the content is known and the HTTP request will be sent
	// using a Content-Length header instead of using a Transfer-Encoding: chunked
	// upload. If false, then the chunked transfer encoding is used. The default
	// value of this property is true.
	bool get_StreamNonChunked(void);
	// If true, then methods that upload data are sent non-chunked if possible. For
	// example, if the FullRequestStream method is called where the stream is a file
	// stream, then the size of the content is known and the HTTP request will be sent
	// using a Content-Length header instead of using a Transfer-Encoding: chunked
	// upload. If false, then the chunked transfer encoding is used. The default
	// value of this property is true.
	void put_StreamNonChunked(bool newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty. Can be set to a
	// list of the following comma separated keywords:
	//     "ProtectFromVpn" - Introduced in v9.5.0.80. On Android systems, will bypass
	//     any VPN that may be installed or active.
	//     "AllowInsecureBasicAuth" - Introduced in v9.5.0.80. Allows HTTP Basic
	//     authentication over non-TLS connections. (HTTP Basic authentication puts the
	//     login:password in the Authorization header field in base64 encoding. If
	//     transmitted over an insecure connection, it is potentially visible to anything
	//     sniffing the traffic. By default, Chilkat disallows HTTP Basic authentication
	//     except for SSL/TLS connections, SSH tunneled connections, or connections to
	//     localhost.)
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty. Can be set to a
	// list of the following comma separated keywords:
	//     "ProtectFromVpn" - Introduced in v9.5.0.80. On Android systems, will bypass
	//     any VPN that may be installed or active.
	//     "AllowInsecureBasicAuth" - Introduced in v9.5.0.80. Allows HTTP Basic
	//     authentication over non-TLS connections. (HTTP Basic authentication puts the
	//     login:password in the Authorization header field in base64 encoding. If
	//     transmitted over an insecure connection, it is potentially visible to anything
	//     sniffing the traffic. By default, Chilkat disallows HTTP Basic authentication
	//     except for SSL/TLS connections, SSH tunneled connections, or connections to
	//     localhost.)
	const uint16_t *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string and should typically remain empty. Can be set to a
	// list of the following comma separated keywords:
	//     "ProtectFromVpn" - Introduced in v9.5.0.80. On Android systems, will bypass
	//     any VPN that may be installed or active.
	//     "AllowInsecureBasicAuth" - Introduced in v9.5.0.80. Allows HTTP Basic
	//     authentication over non-TLS connections. (HTTP Basic authentication puts the
	//     login:password in the Authorization header field in base64 encoding. If
	//     transmitted over an insecure connection, it is potentially visible to anything
	//     sniffing the traffic. By default, Chilkat disallows HTTP Basic authentication
	//     except for SSL/TLS connections, SSH tunneled connections, or connections to
	//     localhost.)
	void put_UncommonOptions(const uint16_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Adds an HTTP request header. If the header field already exists, then it is
	// replaced.
	bool AddHeader(const uint16_t *name, const uint16_t *value);

	// Computes the Amazon MWS signature using the mwsSecretKey and adds the "Signature"
	// parameter to the request. This method should be called for all Amazon
	// Marketplace Web Service (Amazon MWS) HTTP requests. It should be called after
	// all request parameters have been added.
	// 
	// Important: The Chilkat v9.5.0.75 release accidentally breaks Amazon MWS (not
	// AWS) authentication. If you need MWS with 9.5.0.75, send email to
	// support@chilkatsoft.com for a hotfix, or revert back to v9.5.0.73, or update to
	// a version after 9.5.0.75.
	// 
	// The domain should be the domain of the request, such as one of the following:
	//     mws.amazonservices.com
	//     mws-eu.amazonservices.com
	//     mws.amazonservices.in
	//     mws.amazonservices.com.cn
	//     mws.amazonservices.jp
	// 
	// The httpVerb should be the HTTP verb, such as "GET", "POST", etc. The uriPath is the
	// URI path, such as "/Feeds/2009-01-01". In general, the httpVerb and uriPath should be
	// identical to the 1st two args passed to methods such as
	// FullRequestFormUrlEncoded.
	// 
	// Note: This method also automatically adds or replaces the existing Timestamp
	// parameter to the current system date/time.
	// 
	bool AddMwsSignature(const uint16_t *httpVerb, const uint16_t *uriPath, const uint16_t *domain, const uint16_t *mwsSecretKey);

	// Adds or replaces a path parameter. A path parameter is a string that will be
	// replaced in any uriPath string passed to a method. For example, if name is
	// "fileId" and value is "1R_70heIyzIAu1_u0prXbYcaIiJRVkgBl", then a uriPath
	// argument of "/drive/v3/files/fileId" will be transformed to
	// "/drive/v3/files/1R_70heIyzIAu1_u0prXbYcaIiJRVkgBl" in a method call.
	bool AddPathParam(const uint16_t *name, const uint16_t *value);

	// Adds a query parameter. If the query parameter already exists, then it is
	// replaced.
	bool AddQueryParam(const uint16_t *name, const uint16_t *value);

	// Adds the query parameters from the queryString. The queryString is a query string of the
	// format field1=value1&field2=value2&field3=value3... where each value is URL
	// encoded.
	bool AddQueryParams(const uint16_t *queryString);

	// Adds a query parameter. If the query parameter already exists, then it is
	// replaced. The parameter value is passed in a StringBuilder object.
	bool AddQueryParamSb(const uint16_t *name, CkStringBuilderU &value);

	// Removes all HTTP request headers.
	bool ClearAllHeaders(void);

	// Removes all sub-parts from a request. This is useful when preparing the REST
	// object to send a new request after a multipart request has just been sent.
	bool ClearAllParts(void);

	// Clears all path parameters.
	bool ClearAllPathParams(void);

	// Clears all query parameters.
	bool ClearAllQueryParams(void);

	// Clears all authentication settings.
	bool ClearAuth(void);

	// Clears the response body stream.
	void ClearResponseBodyStream(void);

	// Establishes an initial connection to a REST server. The hostname can be a domain
	// name or an IP address. Both IPv4 and IPv6 addresses are supported. The port is
	// the port, which is typically 80 or 443. If SSL/TLS is required, then tls should
	// be set to true. The autoReconnect indicates whether connection should automatically be
	// established as needed for subsequent REST requests.
	// 
	// Note: This method is for simple connections that do not require any proxies
	// (HTTP or SOCKS), or SSH tunneling. If a proxy, SSH tunnel, or any other advanced
	// socket feature is required, the Chilkat Socket API can be used to establish the
	// connection. The UseConnection method can then be called to use the
	// pre-established socket connection.
	// 
	bool Connect(const uint16_t *hostname, int port, bool tls, bool autoReconnect);

	// Creates an asynchronous task to call the Connect method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *ConnectAsync(const uint16_t *hostname, int port, bool tls, bool autoReconnect);

	// Closes the connection with the HTTP server if one is open. This method can be
	// called to ensure the connection is closed. The maxWaitMs is the maximum time in
	// milliseconds to wait for a clean close. If the connection is through an SSH
	// tunnel, this closes the logical channel within the SSH tunnel, and not the
	// connection with the SSH server itself.
	bool Disconnect(int maxWaitMs);

	// Creates an asynchronous task to call the Disconnect method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *DisconnectAsync(int maxWaitMs);

	// Sends a complete REST request (header + binary body) and receives the full
	// response. The binary body of the request is passed in binData. The response body is
	// returned in responseBody (replacing whatever contents responseBody may have previously held).
	bool FullRequestBd(const uint16_t *httpVerb, const uint16_t *uriPath, CkBinDataU &binData, CkStringBuilderU &responseBody);

	// Creates an asynchronous task to call the FullRequestBd method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestBdAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkBinDataU &binData, CkStringBuilderU &responseBody);

	// Sends a complete REST request (header + body) and receives the full response. It
	// is assumed that the request body is binary, and the response body is a string
	// (such as JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqBinaryBody, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestBinary(const uint16_t *httpVerb, const uint16_t *uriPath, CkByteData &bodyBytes, CkString &outStr);
	// Sends a complete REST request (header + body) and receives the full response. It
	// is assumed that the request body is binary, and the response body is a string
	// (such as JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqBinaryBody, ReadResponseHeader, ReadRespBodyString.
	// 
	const uint16_t *fullRequestBinary(const uint16_t *httpVerb, const uint16_t *uriPath, CkByteData &bodyBytes);

	// Creates an asynchronous task to call the FullRequestBinary method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestBinaryAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkByteData &bodyBytes);

	// Sends a complete application/x-www-form-urlencoded HTTP request and receives the
	// full response. The request body is composed of the URL encoded query params. It
	// is assumed that the response body is a string (such as JSON or XML). The
	// response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqFormUrlEncoded, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestFormUrlEncoded(const uint16_t *httpVerb, const uint16_t *uriPath, CkString &outStr);
	// Sends a complete application/x-www-form-urlencoded HTTP request and receives the
	// full response. The request body is composed of the URL encoded query params. It
	// is assumed that the response body is a string (such as JSON or XML). The
	// response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqFormUrlEncoded, ReadResponseHeader, ReadRespBodyString.
	// 
	const uint16_t *fullRequestFormUrlEncoded(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Creates an asynchronous task to call the FullRequestFormUrlEncoded method with
	// the arguments provided. (Async methods are available starting in Chilkat
	// v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestFormUrlEncodedAsync(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Sends a complete multipart REST request (header + multipart body) and receives
	// the full response. It is assumed that the response body is a string (such as
	// JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqMultipart, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestMultipart(const uint16_t *httpVerb, const uint16_t *uriPath, CkString &outStr);
	// Sends a complete multipart REST request (header + multipart body) and receives
	// the full response. It is assumed that the response body is a string (such as
	// JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqMultipart, ReadResponseHeader, ReadRespBodyString.
	// 
	const uint16_t *fullRequestMultipart(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Creates an asynchronous task to call the FullRequestMultipart method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestMultipartAsync(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Sends a complete REST request and receives the full response. It is assumed that
	// the response body is a string (such as JSON or XML). The response body is
	// returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqNoBody, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestNoBody(const uint16_t *httpVerb, const uint16_t *uriPath, CkString &outStr);
	// Sends a complete REST request and receives the full response. It is assumed that
	// the response body is a string (such as JSON or XML). The response body is
	// returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqNoBody, ReadResponseHeader, ReadRespBodyString.
	// 
	const uint16_t *fullRequestNoBody(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Creates an asynchronous task to call the FullRequestNoBody method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestNoBodyAsync(const uint16_t *httpVerb, const uint16_t *uriPath);

	// The same as FullRequestNoBody, except returns the response body in the binData.
	// This method is useful for downloading binary files.
	bool FullRequestNoBodyBd(const uint16_t *httpVerb, const uint16_t *uriPath, CkBinDataU &binData);

	// Creates an asynchronous task to call the FullRequestNoBodyBd method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestNoBodyBdAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkBinDataU &binData);

	// The same as FullRequestNoBody, except returns the response body in the sb.
	bool FullRequestNoBodySb(const uint16_t *httpVerb, const uint16_t *uriPath, CkStringBuilderU &sb);

	// Creates an asynchronous task to call the FullRequestNoBodySb method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestNoBodySbAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkStringBuilderU &sb);

	// Sends a complete REST request (header + body string) and receives the full
	// response. The body of the request is passed in requestBody. The response body is
	// returned in responseBody (replacing whatever contents responseBody may have previously held).
	bool FullRequestSb(const uint16_t *httpVerb, const uint16_t *uriPath, CkStringBuilderU &requestBody, CkStringBuilderU &responseBody);

	// Creates an asynchronous task to call the FullRequestSb method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestSbAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkStringBuilderU &requestBody, CkStringBuilderU &responseBody);

	// Sends a complete REST request and receives the full response. It is assumed that
	// the response body is a string (such as JSON or XML). The response body is
	// returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqStream, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestStream(const uint16_t *httpVerb, const uint16_t *uriPath, CkStreamU &stream, CkString &outStr);
	// Sends a complete REST request and receives the full response. It is assumed that
	// the response body is a string (such as JSON or XML). The response body is
	// returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqStream, ReadResponseHeader, ReadRespBodyString.
	// 
	const uint16_t *fullRequestStream(const uint16_t *httpVerb, const uint16_t *uriPath, CkStreamU &stream);

	// Creates an asynchronous task to call the FullRequestStream method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestStreamAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkStreamU &stream);

	// Sends a complete REST request (header + body string) and receives the full
	// response. It is assumed that both the request and response bodies are strings
	// (such as JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqStringBody, ReadResponseHeader, ReadRespBodyString.
	// 
	bool FullRequestString(const uint16_t *httpVerb, const uint16_t *uriPath, const uint16_t *bodyText, CkString &outStr);
	// Sends a complete REST request (header + body string) and receives the full
	// response. It is assumed that both the request and response bodies are strings
	// (such as JSON or XML). The response body is returned.
	// 
	// This method is the equivalent of making the following calls in sequence:
	// SendReqStringBody, ReadResponseHeader, ReadRespBodyString.
	// 
	const uint16_t *fullRequestString(const uint16_t *httpVerb, const uint16_t *uriPath, const uint16_t *bodyText);

	// Creates an asynchronous task to call the FullRequestString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *FullRequestStringAsync(const uint16_t *httpVerb, const uint16_t *uriPath, const uint16_t *bodyText);

	// Returns the fully composed HTTP request that would've been sent had the
	// DebugMode been turned off. The request is returned in bd.
	bool GetLastDebugRequest(CkBinDataU &bd);

	// Provides information about what transpired in the last method called on this
	// object instance. For many methods, there is no information. However, for some
	// methods, details about what occurred can be obtained by getting the LastJsonData
	// right after the method call returns.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObjectU *LastJsonData(void);

	// Reads the response body. Should only be called after ReadResponseHeader has been
	// called, and should only be called when it is already known that the response
	// body is binary, such as for JPG images or other non-text binary file types. The
	// response body is received into responseBody (replacing whatever contents responseBody may have
	// previously held).
	bool ReadRespBd(CkBinDataU &responseBody);

	// Creates an asynchronous task to call the ReadRespBd method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *ReadRespBdAsync(CkBinDataU &responseBody);

	// Reads the response body. Should only be called after ReadResponseHeader has been
	// called, and should only be called when it is already known that the response
	// body is binary, such as for JPG images or other non-text binary file types.
	bool ReadRespBodyBinary(CkByteData &outBytes);

	// Creates an asynchronous task to call the ReadRespBodyBinary method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *ReadRespBodyBinaryAsync(void);

	// Reads the response body to the stream. If autoSetStreamCharset is true, then the stream's
	// StringCharset property will automatically get set based on the charset, if any,
	// indicated in the response header. If the response is binary, then autoSetStreamCharset is
	// ignored.
	bool ReadRespBodyStream(CkStreamU &stream, bool autoSetStreamCharset);

	// Creates an asynchronous task to call the ReadRespBodyStream method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *ReadRespBodyStreamAsync(CkStreamU &stream, bool autoSetStreamCharset);

	// Reads the response body. Should only be called after ReadResponseHeader has been
	// called, and should only be called when it is already known that the response
	// body will be a string (such as XML, JSON, etc.)
	bool ReadRespBodyString(CkString &outStr);
	// Reads the response body. Should only be called after ReadResponseHeader has been
	// called, and should only be called when it is already known that the response
	// body will be a string (such as XML, JSON, etc.)
	const uint16_t *readRespBodyString(void);

	// Creates an asynchronous task to call the ReadRespBodyString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *ReadRespBodyStringAsync(void);

	// Reads the HTTP response header. If the HTTP response includes a body, then the
	// application must call the desired method to read the response body. Otherwise,
	// the HTTP request / response is finished after reading the response header (such
	// as for a GET request). The contents of the response header are available in
	// various properties and methods.
	// 
	// The HTTP response status code is returned (such as 200 for a typical success
	// response). If an error occurred such that no response was received, then a value
	// of -1 is returned.
	// 
	int ReadResponseHeader(void);

	// Creates an asynchronous task to call the ReadResponseHeader method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *ReadResponseHeaderAsync(void);

	// Reads the response body. Should only be called after ReadResponseHeader has been
	// called, and should only be called when it is already known that the response
	// body will be a string (such as XML, JSON, etc.) The response body is stored in
	// responseBody. (replacing whatever contents responseBody may have previously held).
	bool ReadRespSb(CkStringBuilderU &responseBody);

	// Creates an asynchronous task to call the ReadRespSb method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *ReadRespSbAsync(CkStringBuilderU &responseBody);

	// If the response was a redirect and contains a Location header field, this method
	// returns the redirect URL.
	// The caller is responsible for deleting the object returned by this method.
	CkUrlU *RedirectUrl(void);

	// Removes all headers having the given name.
	bool RemoveHeader(const uint16_t *name);

	// Removes all query params having the given name.
	bool RemoveQueryParam(const uint16_t *name);

	// Returns the value of the response header indicated by name.
	bool ResponseHdrByName(const uint16_t *name, CkString &outStr);
	// Returns the value of the response header indicated by name.
	const uint16_t *responseHdrByName(const uint16_t *name);

	// Returns the name of the Nth response header field. (Chilkat always uses 0-based
	// indexing. The first header field is at index 0.)
	bool ResponseHdrName(int index, CkString &outStr);
	// Returns the name of the Nth response header field. (Chilkat always uses 0-based
	// indexing. The first header field is at index 0.)
	const uint16_t *responseHdrName(int index);

	// Returns the value of the Nth response header field. (Chilkat always uses 0-based
	// indexing. The first header field is at index 0.)
	bool ResponseHdrValue(int index, CkString &outStr);
	// Returns the value of the Nth response header field. (Chilkat always uses 0-based
	// indexing. The first header field is at index 0.)
	const uint16_t *responseHdrValue(int index);

	// Sends a REST request that cotnains a binary body. The httpVerb is the HTTP verb
	// (also known as the HTTP method), such as "PUT". The uriPath is the path of the
	// resource URI. The body contains the bytes of the HTTP request body.
	bool SendReqBd(const uint16_t *httpVerb, const uint16_t *uriPath, CkBinDataU &body);

	// Creates an asynchronous task to call the SendReqBd method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *SendReqBdAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkBinDataU &body);

	// Sends a REST request that cotnains a binary body. The httpVerb is the HTTP verb
	// (also known as the HTTP method), such as "PUT". The uriPath is the path of the
	// resource URI. The body contains the bytes of the HTTP request body.
	bool SendReqBinaryBody(const uint16_t *httpVerb, const uint16_t *uriPath, CkByteData &body);

	// Creates an asynchronous task to call the SendReqBinaryBody method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *SendReqBinaryBodyAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkByteData &body);

	// Sends an application/x-www-form-urlencoded HTTP request where the body is
	// composed of the URL encoded query params. The httpVerb is the HTTP verb (also known
	// as the HTTP method), such as "POST". The uriPath is the path of the resource URI.
	// If the Content-Type header was set, it is ignored and instead the Content-Type
	// of the request will be "application/x-www-form-urlencoded".
	bool SendReqFormUrlEncoded(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Creates an asynchronous task to call the SendReqFormUrlEncoded method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *SendReqFormUrlEncodedAsync(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Sends a multipart REST request. The httpVerb is the HTTP verb (also known as the
	// HTTP method), such as "GET". The uriPath is the path of the resource URI.
	bool SendReqMultipart(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Creates an asynchronous task to call the SendReqMultipart method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *SendReqMultipartAsync(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Sends a REST request that cotnains no body. The httpVerb is the HTTP verb (also
	// known as the HTTP method), such as "GET". The uriPath is the path of the resource
	// URI.
	bool SendReqNoBody(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Creates an asynchronous task to call the SendReqNoBody method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *SendReqNoBodyAsync(const uint16_t *httpVerb, const uint16_t *uriPath);

	// Sends a REST request that cotnains a text body, such as XML or JSON. The httpVerb is
	// the HTTP verb (also known as the HTTP method), such as "PUT". The uriPath is the
	// path of the resource URI. The bodySb contains the text of the HTTP request body.
	bool SendReqSb(const uint16_t *httpVerb, const uint16_t *uriPath, CkStringBuilderU &bodySb);

	// Creates an asynchronous task to call the SendReqSb method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *SendReqSbAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkStringBuilderU &bodySb);

	// Sends a REST request that cotnains a binary or text body that is obtained by
	// reading from the stream. The httpVerb is the HTTP verb (also known as the HTTP
	// method), such as "PUT". The uriPath is the path of the resource URI.
	bool SendReqStreamBody(const uint16_t *httpVerb, const uint16_t *uriPath, CkStreamU &stream);

	// Creates an asynchronous task to call the SendReqStreamBody method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *SendReqStreamBodyAsync(const uint16_t *httpVerb, const uint16_t *uriPath, CkStreamU &stream);

	// Sends a REST request that cotnains a text body, such as XML or JSON. The httpVerb is
	// the HTTP verb (also known as the HTTP method), such as "PUT". The uriPath is the
	// path of the resource URI. The bodyText contains the text of the HTTP request body.
	bool SendReqStringBody(const uint16_t *httpVerb, const uint16_t *uriPath, const uint16_t *bodyText);

	// Creates an asynchronous task to call the SendReqStringBody method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *SendReqStringBodyAsync(const uint16_t *httpVerb, const uint16_t *uriPath, const uint16_t *bodyText);

	// Sets the authorization service provider for Amazon AWS REST requests. An
	// application that sets an AWS authentication provider need not explicitly set the
	// Authorization property. Each REST request is automatically signed and
	// authenticated using the authProvider.
	bool SetAuthAws(CkAuthAwsU &authProvider);

	// Sets the Azure AD (Active Directory) authorization service provider.
	bool SetAuthAzureAD(CkAuthAzureADU &authProvider);

	// Provides the information for Azure SAS (Shared Access Signature) authorization.
	// Calling this method will cause the "Authorization: SharedAccessSignature ..."
	// header to be automatically added to all requests.
	bool SetAuthAzureSas(CkAuthAzureSASU &authProvider);

	// Sets the authorization service provider for Azure Storage Service requests.
	bool SetAuthAzureStorage(CkAuthAzureStorageU &authProvider);

	// Sets the username and password to be used for Basic authentication. This method should
	// be called when Basic authentication is required. It should only be used with
	// secure SSL/TLS connections. Calling this method will cause the "Authorization:
	// Basic ..." header to be automatically added to all requests. In many cases, a
	// REST API will support Basic authentication where the username is a client ID or
	// account ID, and the password is a client secret or token.
	bool SetAuthBasic(const uint16_t *username, const uint16_t *password);

	// The same as SetAuthBasic, but provides a more secure means for passing the
	// arguments as secure string objects.
	bool SetAuthBasicSecure(CkSecureStringU &username, CkSecureStringU &password);

	// Sets the authorization service provider for Google API requests.
	bool SetAuthGoogle(CkAuthGoogleU &authProvider);

	// Sets the authentication provider for REST API requests needing OAuth 1.0 (and
	// OAuth 1.0a) authentication. If useQueryParams is true, then the OAuth1 authentication
	// information and signature is passed in query parameters. Otherwise it is passed
	// in an Authorization header.
	bool SetAuthOAuth1(CkOAuth1U &authProvider, bool useQueryParams);

	// Sets the authentication provider for REST API requests needing standards-based
	// OAuth 2.0 authentication. This is for the case where a desktop/native/mobile
	// application will be popping up a web browser, or embedding a web browser, to get
	// authorization interactively from end-user of the application.
	bool SetAuthOAuth2(CkOAuth2U &authProvider);

	// Only used for multipart requests. Sets the binary content of the multipart body
	// indicated by the PartSelector.
	bool SetMultipartBodyBd(CkBinDataU &bodyData);

	// Only used for multipart requests. Sets the binary content of the multipart body
	// indicated by the PartSelector.
	bool SetMultipartBodyBinary(CkByteData &bodyData);

	// Only used for multipart requests. Sets the text content of the multipart body
	// indicated by the PartSelector.
	bool SetMultipartBodySb(CkStringBuilderU &bodySb);

	// Only used for multipart requests. Sets the stream source of the multipart body
	// indicated by the PartSelector.
	bool SetMultipartBodyStream(CkStreamU &stream);

	// Only used for multipart requests. Sets the text content of the multipart body
	// indicated by the PartSelector.
	bool SetMultipartBodyString(const uint16_t *bodyText);

	// Only applies to the Full* methods, such as FullRequestNoBody, FullRequestBinary,
	// FullRequestStream, etc. When set, the response body is streamed directly to
	// responseStream, if (and only if) the HTTP response status code equals expectedStatus.
	// 
	// If the response body was streamed to responseStream, then the string return value of the
	// Full* method instead becomes "OK" for success. If an attempt was made to stream
	// the response body but it failed, then "FAIL" is returned. If the response body
	// was not streamed because the response status code was not equal to expectedStatus, then
	// the returned string contains the server's error response.
	// 
	// If autoSetStreamCharset is true, then the expectedStatus's StringCharset property will automatically get
	// set based on the charset, if any, indicated in the response header. If the
	// response is binary, then autoSetStreamCharset is ignored.
	// 
	// Starting in v9.5.0.75, the expectedStatus may be passed as a negative number to specify a
	// range of expected (success) status codes. For example:
	//     -200: Allow status codes 200 - 299
	//     -210: Allow status codes 210 - 219
	//     -220: Allow status codes 220 - 229
	//     etc.
	// 
	bool SetResponseBodyStream(int expectedStatus, bool autoSetStreamCharset, CkStreamU &responseStream);

	// Sets the connection to be used for sending the REST request. The connection should be
	// an already-connected socket. It may be a TLS connection, an unencrypted
	// connection, through an HTTP proxy, a SOCKS proxy, or even through SSH tunnels.
	// All of the connection related functionality is handled by the Chilkat Socket
	// API.
	// 
	// The autoReconnect indicates whether connection should automatically be established as
	// needed for subsequent REST requests.
	// 
	// Important: The UseConnection method is provided as a means for handling more
	// complicated connections -- such as connections through proxies, tunnels, etc. If
	// your application is connecting directly to the HTTP server, then simply call
	// this class's Connect method.
	// 
	bool UseConnection(CkSocketU &connection, bool autoReconnect);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
