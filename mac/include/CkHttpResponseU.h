// CkHttpResponseU.h: interface for the CkHttpResponseU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkHttpResponseU_H
#define _CkHttpResponseU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkUtf16Base.h"

class CkByteData;
class CkBinDataU;
class CkStringBuilderU;
class CkTaskU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkHttpResponseU
class CK_VISIBLE_PUBLIC CkHttpResponseU  : public CkUtf16Base
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkHttpResponseU(const CkHttpResponseU &);
	CkHttpResponseU &operator=(const CkHttpResponseU &);

    public:
	CkHttpResponseU(void);
	virtual ~CkHttpResponseU(void);

	

	static CkHttpResponseU *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The response body returned as a byte array.
	void get_Body(CkByteData &outBytes);

	// The same as the Body property, but returned as a quoted-printable encoded
	// string.
	void get_BodyQP(CkString &str);
	// The same as the Body property, but returned as a quoted-printable encoded
	// string.
	const uint16_t *bodyQP(void);

	// The response body returned as a string.
	void get_BodyStr(CkString &str);
	// The response body returned as a string.
	const uint16_t *bodyStr(void);

	// The response charset, such as "iso-8859-1", if applicable. Obviously, responses
	// for GIF and JPG files will not have a charset.
	void get_Charset(CkString &str);
	// The response charset, such as "iso-8859-1", if applicable. Obviously, responses
	// for GIF and JPG files will not have a charset.
	const uint16_t *charset(void);

	// The content length of the response, in bytes.
	unsigned long get_ContentLength(void);

	// The content length of the response, in number of bytes, returned as a 64-bit
	// integer.
	__int64 get_ContentLength64(void);

	// The Date response header field, returned in a date/time data type.
	void get_Date(SYSTEMTIME &outSysTime);

	// Returns the content of the Date response header field in RFC822 date/time string
	// format.
	void get_DateStr(CkString &str);
	// Returns the content of the Date response header field in RFC822 date/time string
	// format.
	const uint16_t *dateStr(void);

	// The domain of the HTTP server that created this response.
	void get_Domain(CkString &str);
	// The domain of the HTTP server that created this response.
	const uint16_t *domain(void);

	// Returns the redirect URL for 301/302 responses.
	void get_FinalRedirectUrl(CkString &str);
	// Returns the redirect URL for 301/302 responses.
	const uint16_t *finalRedirectUrl(void);

	// Returns the full MIME (header + body) of the HTTP response.
	void get_FullMime(CkString &str);
	// Returns the full MIME (header + body) of the HTTP response.
	const uint16_t *fullMime(void);

	// The full text of the response header.
	void get_Header(CkString &str);
	// The full text of the response header.
	const uint16_t *header(void);

	// The number of cookies included in the response.
	int get_NumCookies(void);

	// The number of response header fields.
	int get_NumHeaderFields(void);

	// The status code (as an integer) from the first line of an HTTP response. If the
	// StatusLine = "HTTP/1.0 200 OK", the response status code returned is 200.
	int get_StatusCode(void);

	// The first line of an HTTP response, such as "HTTP/1.0 200 OK".
	void get_StatusLine(CkString &str);
	// The first line of an HTTP response, such as "HTTP/1.0 200 OK".
	const uint16_t *statusLine(void);

	// The text that follows the status code in the 1st line of the HTTP response. For
	// example, i the first line of an HTTP response is "HTTP/1.0 200 OK", then this
	// property contains "OK".
	void get_StatusText(CkString &str);
	// The text that follows the status code in the 1st line of the HTTP response. For
	// example, i the first line of an HTTP response is "HTTP/1.0 200 OK", then this
	// property contains "OK".
	const uint16_t *statusText(void);



	// ----------------------
	// Methods
	// ----------------------
	// Copies the response body to a BinData object.
	bool GetBodyBd(CkBinDataU &binData);

	// Copies the response body to a Chilkat StringBuilder object.
	bool GetBodySb(CkStringBuilderU &sb);

	// Returns the domain of the Nth cookie in the response. Indexing begins at 0. The
	// number of response cookies is specified in the NumCookies property.
	bool GetCookieDomain(int index, CkString &outStr);
	// Returns the domain of the Nth cookie in the response. Indexing begins at 0. The
	// number of response cookies is specified in the NumCookies property.
	const uint16_t *getCookieDomain(int index);
	// Returns the domain of the Nth cookie in the response. Indexing begins at 0. The
	// number of response cookies is specified in the NumCookies property.
	const uint16_t *cookieDomain(int index);

	// Returns the expiration date/time of the Nth cookie in the response. Indexing
	// begins at 0. The number of response cookies is specified in the NumCookies
	// property.
	bool GetCookieExpires(int index, SYSTEMTIME &outSysTime);

	// Returns the expiration date/time of the Nth cookie in the response. Indexing
	// begins at 0. The number of response cookies is specified in the NumCookies
	// property.
	bool GetCookieExpiresStr(int index, CkString &outStr);
	// Returns the expiration date/time of the Nth cookie in the response. Indexing
	// begins at 0. The number of response cookies is specified in the NumCookies
	// property.
	const uint16_t *getCookieExpiresStr(int index);
	// Returns the expiration date/time of the Nth cookie in the response. Indexing
	// begins at 0. The number of response cookies is specified in the NumCookies
	// property.
	const uint16_t *cookieExpiresStr(int index);

	// Returns the name of the Nth cookie returned in the response. Indexing begins at
	// 0. The number of response cookies is specified in the NumCookies property.
	bool GetCookieName(int index, CkString &outStr);
	// Returns the name of the Nth cookie returned in the response. Indexing begins at
	// 0. The number of response cookies is specified in the NumCookies property.
	const uint16_t *getCookieName(int index);
	// Returns the name of the Nth cookie returned in the response. Indexing begins at
	// 0. The number of response cookies is specified in the NumCookies property.
	const uint16_t *cookieName(int index);

	// Returns the path of the Nth cookie returned in the response. Indexing begins at
	// 0. The number of response cookies is specified in the NumCookies property.
	bool GetCookiePath(int index, CkString &outStr);
	// Returns the path of the Nth cookie returned in the response. Indexing begins at
	// 0. The number of response cookies is specified in the NumCookies property.
	const uint16_t *getCookiePath(int index);
	// Returns the path of the Nth cookie returned in the response. Indexing begins at
	// 0. The number of response cookies is specified in the NumCookies property.
	const uint16_t *cookiePath(int index);

	// Returns the value of the Nth cookie returned in the response. Indexing begins at
	// 0. The number of response cookies is specified in the NumCookies property.
	bool GetCookieValue(int index, CkString &outStr);
	// Returns the value of the Nth cookie returned in the response. Indexing begins at
	// 0. The number of response cookies is specified in the NumCookies property.
	const uint16_t *getCookieValue(int index);
	// Returns the value of the Nth cookie returned in the response. Indexing begins at
	// 0. The number of response cookies is specified in the NumCookies property.
	const uint16_t *cookieValue(int index);

	// Returns the value of a response header field accessed by field name.
	bool GetHeaderField(const uint16_t *fieldName, CkString &outStr);
	// Returns the value of a response header field accessed by field name.
	const uint16_t *getHeaderField(const uint16_t *fieldName);
	// Returns the value of a response header field accessed by field name.
	const uint16_t *headerField(const uint16_t *fieldName);

	// Returns a response header field attribute. As an example, the response charset
	// is simply the GetHeaderFieldAttr("content-type","charset")
	bool GetHeaderFieldAttr(const uint16_t *fieldName, const uint16_t *attrName, CkString &outStr);
	// Returns a response header field attribute. As an example, the response charset
	// is simply the GetHeaderFieldAttr("content-type","charset")
	const uint16_t *getHeaderFieldAttr(const uint16_t *fieldName, const uint16_t *attrName);
	// Returns a response header field attribute. As an example, the response charset
	// is simply the GetHeaderFieldAttr("content-type","charset")
	const uint16_t *headerFieldAttr(const uint16_t *fieldName, const uint16_t *attrName);

	// Gets the name of the Nth response header field. Indexing begins at 0. The number
	// of response headers is specified by the NumHeaderFields property.
	bool GetHeaderName(int index, CkString &outStr);
	// Gets the name of the Nth response header field. Indexing begins at 0. The number
	// of response headers is specified by the NumHeaderFields property.
	const uint16_t *getHeaderName(int index);
	// Gets the name of the Nth response header field. Indexing begins at 0. The number
	// of response headers is specified by the NumHeaderFields property.
	const uint16_t *headerName(int index);

	// Gets the value of the Nth response header field. Indexing begins at 0. The
	// number of response headers is specified by the NumHeaderFields property.
	bool GetHeaderValue(int index, CkString &outStr);
	// Gets the value of the Nth response header field. Indexing begins at 0. The
	// number of response headers is specified by the NumHeaderFields property.
	const uint16_t *getHeaderValue(int index);
	// Gets the value of the Nth response header field. Indexing begins at 0. The
	// number of response headers is specified by the NumHeaderFields property.
	const uint16_t *headerValue(int index);

	// Loads the HTTP response from a completed asynchronous task. A failed return
	// value indicates that no HTTP response was received in the HTTP asynchronous
	// method call (i.e. the asynchronous HTTP request failed in such a way that no
	// response was received).
	bool LoadTaskResult(CkTaskU &task);

	// Saves the body of the HTTP response to a file.
	bool SaveBodyBinary(const uint16_t *path);

	// Saves the HTTP response body to a file. This method provides control over CRLF
	// vs bare-LF line-endings. If bCrlf is true, then line endings are automatically
	// converted to CRLF if necessary. If bCrlf is false, then line-endings are
	// automatically converted to bare-LF's (Unix style) if necessary.
	// 
	// To save the HTTP response body exactly as-is (with no line-ending manipulation),
	// then call SaveBodyBinary.
	// 
	bool SaveBodyText(bool bCrlf, const uint16_t *path);

	// Convenience method for parsing a param's value out of a URL-encoded param
	// string. For example, if a caller passes the following string in
	// encodedParamString:oauth_token=ABC&oauth_token_secret=123&oauth_callback_confirmed=true and
	// "oauth_token_secret" in paramName, then the return value would be "123".
	bool UrlEncParamValue(const uint16_t *encodedParamString, const uint16_t *paramName, CkString &outStr);
	// Convenience method for parsing a param's value out of a URL-encoded param
	// string. For example, if a caller passes the following string in
	// encodedParamString:oauth_token=ABC&oauth_token_secret=123&oauth_callback_confirmed=true and
	// "oauth_token_secret" in paramName, then the return value would be "123".
	const uint16_t *urlEncParamValue(const uint16_t *encodedParamString, const uint16_t *paramName);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
