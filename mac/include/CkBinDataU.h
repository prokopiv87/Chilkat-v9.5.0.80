// CkBinDataU.h: interface for the CkBinDataU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkBinDataU_H
#define _CkBinDataU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkUtf16Base.h"

class CkByteData;
class CkStringBuilderU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkBinDataU
class CK_VISIBLE_PUBLIC CkBinDataU  : public CkUtf16Base
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkBinDataU(const CkBinDataU &);
	CkBinDataU &operator=(const CkBinDataU &);

    public:
	CkBinDataU(void);
	virtual ~CkBinDataU(void);

	

	static CkBinDataU *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of bytes contained within the object.
	int get_NumBytes(void);



	// ----------------------
	// Methods
	// ----------------------
	// Appends the contents of another BinData to this object.
	bool AppendBd(CkBinDataU &binData);

	// Appends binary data to the current contents, if any.
	bool AppendBinary(CkByteData &data);

	// Appends the appropriate BOM (byte order mark), also known as a "preamble", for
	// the given charset. If the charset has no defined BOM, then nothing is appended. An
	// application would typically call this to append the utf-8, utf-16, or utf-32
	// BOM.
	bool AppendBom(const uint16_t *charset);

	// Appends a single byte. The byteValue should be a value from 0 to 255.
	bool AppendByte(int byteValue);

	// Appends encoded binary data to the current data. The encoding may be "Base64",
	// "modBase64", "base64Url", "Base32", "Base58", "QP" (for quoted-printable), "URL"
	// (for url-encoding), "Hex", or any of the encodings found at Chilkat Binary
	// Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	bool AppendEncoded(const uint16_t *encData, const uint16_t *encoding);

	// Decodes the contents of sb and appends the decoded bytes to this object. The
	// encoding may be "Base64", "modBase64", "base64Url", "Base32", "Base58", "QP" (for
	// quoted-printable), "URL" (for url-encoding), "Hex", or any of the encodings
	// found at Chilkat Binary Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	bool AppendEncodedSb(CkStringBuilderU &sb, const uint16_t *encoding);

	// Appends a 16-bit integer (2 bytes). If littleEndian is true, then the integer bytes
	// are appended in little-endian byte order, otherwise big-endian byte order is
	// used.
	bool AppendInt2(int value, bool littleEndian);

	// Appends a 32-bit integer (4 bytes). If littleEndian is true, then the integer bytes
	// are appended in little-endian byte order, otherwise big-endian byte order is
	// used.
	bool AppendInt4(int value, bool littleEndian);

	// Appends a string to this object, padded to the fieldLen with NULL or SPACE chars. If
	// padWithSpace is true, then SPACE chars are used and the string is not null-terminated.
	// If fieldLen is false, then null bytes are used. The charset controls the byte
	// representation to use, such as "utf-8".
	// 
	// Note: This call will always append a total number of bytes equal to fieldLen. If the
	// str is longer than fieldLen, the method returns false to indicate failure and
	// nothing is appended.
	// 
	bool AppendPadded(const uint16_t *str, const uint16_t *charset, bool padWithSpace, int fieldLen);

	// Appends the contents of a StringBuilder to this object.
	bool AppendSb(CkStringBuilderU &sb, const uint16_t *charset);

	// Appends a string to this object. (This does not append the BOM. If a BOM is
	// required, the AppendBom method can be called to append the appropriate BOM.)
	bool AppendString(const uint16_t *str, const uint16_t *charset);

	// Clears the contents.
	bool Clear(void);

	// Return true if the contents of this object equals the contents of binData.
	bool ContentsEqual(CkBinDataU &binData);

	// Retrieves the binary data contained within the object.
	bool GetBinary(CkByteData &outBytes);

	// Retrieves a chunk of the binary data contained within the object.
	bool GetBinaryChunk(int offset, int numBytes, CkByteData &outBytes);

	// Returns a pointer to the internal buffer. Be careful with this method because if
	// additional data is appended, the data within the object may be relocated and the
	// pointer may cease to be valid.
	const void *GetBytesPtr(void);

	// Retrieves the binary data as an encoded string. The encoding may be "Base64",
	// "modBase64", "base64Url", "Base32", "Base58", "QP" (for quoted-printable), "URL"
	// (for url-encoding), "Hex", or any of the encodings found at Chilkat Binary
	// Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	bool GetEncoded(const uint16_t *encoding, CkString &outStr);
	// Retrieves the binary data as an encoded string. The encoding may be "Base64",
	// "modBase64", "base64Url", "Base32", "Base58", "QP" (for quoted-printable), "URL"
	// (for url-encoding), "Hex", or any of the encodings found at Chilkat Binary
	// Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	const uint16_t *getEncoded(const uint16_t *encoding);
	// Retrieves the binary data as an encoded string. The encoding may be "Base64",
	// "modBase64", "base64Url", "Base32", "Base58", "QP" (for quoted-printable), "URL"
	// (for url-encoding), "Hex", or any of the encodings found at Chilkat Binary
	// Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	const uint16_t *encoded(const uint16_t *encoding);

	// Retrieves a chunk of the binary data and returns it in encoded form. The encoding
	// may be "Base64", "modBase64", "base64Url", "Base32", "Base58", "QP" (for
	// quoted-printable), "URL" (for url-encoding), "Hex", or any of the encodings
	// found at Chilkat Binary Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	bool GetEncodedChunk(int offset, int numBytes, const uint16_t *encoding, CkString &outStr);
	// Retrieves a chunk of the binary data and returns it in encoded form. The encoding
	// may be "Base64", "modBase64", "base64Url", "Base32", "Base58", "QP" (for
	// quoted-printable), "URL" (for url-encoding), "Hex", or any of the encodings
	// found at Chilkat Binary Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	const uint16_t *getEncodedChunk(int offset, int numBytes, const uint16_t *encoding);
	// Retrieves a chunk of the binary data and returns it in encoded form. The encoding
	// may be "Base64", "modBase64", "base64Url", "Base32", "Base58", "QP" (for
	// quoted-printable), "URL" (for url-encoding), "Hex", or any of the encodings
	// found at Chilkat Binary Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	const uint16_t *encodedChunk(int offset, int numBytes, const uint16_t *encoding);

	// Writes the encoded data to a StringBuilder. The encoding may be "Base64",
	// "modBase64", "base64Url", "Base32", "Base58", "QP" (for quoted-printable), "URL"
	// (for url-encoding), "Hex", or any of the encodings found at Chilkat Binary
	// Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	bool GetEncodedSb(const uint16_t *encoding, CkStringBuilderU &sb);

	// Interprets the bytes according to charset and returns the string. The charset can be
	// "utf-8", "utf-16", "ansi", "iso-8859-*", "windows-125*", or any of the supported
	// character encodings listed in the link below.
	bool GetString(const uint16_t *charset, CkString &outStr);
	// Interprets the bytes according to charset and returns the string. The charset can be
	// "utf-8", "utf-16", "ansi", "iso-8859-*", "windows-125*", or any of the supported
	// character encodings listed in the link below.
	const uint16_t *getString(const uint16_t *charset);
	// Interprets the bytes according to charset and returns the string. The charset can be
	// "utf-8", "utf-16", "ansi", "iso-8859-*", "windows-125*", or any of the supported
	// character encodings listed in the link below.
	const uint16_t *string(const uint16_t *charset);

	// Loads binary data and replaces the current contents, if any.
	bool LoadBinary(CkByteData &data);

	// Loads binary data from an encoded string, replacing the current contents, if
	// any. The encoding may be "Base64", "modBase64", "base64Url", "Base32", "Base58",
	// "QP" (for quoted-printable), "URL" (for url-encoding), "Hex", or any of the
	// encodings found at Chilkat Binary Encodings List
	// <http://cknotes.com/chilkat-binary-encoding-list/> .
	bool LoadEncoded(const uint16_t *encData, const uint16_t *encoding);

	// Loads data from a file.
	bool LoadFile(const uint16_t *path);

	// Removes a chunk of bytes from the binary data.
	bool RemoveChunk(int offset, int numBytes);

	// Securely clears the contents by writing 0 bytes to the memory prior to
	// deallocating the internal memory.
	bool SecureClear(void);

	// Writes the contents to a file.
	bool WriteFile(const uint16_t *path);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
