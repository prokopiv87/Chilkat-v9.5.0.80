// CkGzipU.h: interface for the CkGzipU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkGzipU_H
#define _CkGzipU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkClassWithCallbacksU.h"

class CkByteData;
class CkBinDataU;
class CkTaskU;
class CkDateTimeU;
class CkBaseProgressU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkGzipU
class CK_VISIBLE_PUBLIC CkGzipU  : public CkClassWithCallbacksU
{
	public:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkGzipU(const CkGzipU &);
	CkGzipU &operator=(const CkGzipU &);

    public:
	CkGzipU(void);
	virtual ~CkGzipU(void);

	

	static CkGzipU *createNew(void);
	

	CkGzipU(bool bCallbackOwned);
	static CkGzipU *createNew(bool bCallbackOwned);

	
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
	// When set to true, causes the currently running method to abort. Methods that
	// always finish quickly (i.e.have no length file operations or network
	// communications) are not affected. If no method is running, then this property is
	// automatically reset to false when the next method is called. When the abort
	// occurs, this property is reset to false. Both synchronous and asynchronous
	// method calls can be aborted. (A synchronous method call could be aborted by
	// setting this property from a separate thread.)
	bool get_AbortCurrent(void);
	// When set to true, causes the currently running method to abort. Methods that
	// always finish quickly (i.e.have no length file operations or network
	// communications) are not affected. If no method is running, then this property is
	// automatically reset to false when the next method is called. When the abort
	// occurs, this property is reset to false. Both synchronous and asynchronous
	// method calls can be aborted. (A synchronous method call could be aborted by
	// setting this property from a separate thread.)
	void put_AbortCurrent(bool newVal);

	// Specifies an optional comment string that can be embedded within the .gz when
	// any Compress* method is called.
	void get_Comment(CkString &str);
	// Specifies an optional comment string that can be embedded within the .gz when
	// any Compress* method is called.
	const uint16_t *comment(void);
	// Specifies an optional comment string that can be embedded within the .gz when
	// any Compress* method is called.
	void put_Comment(const uint16_t *newVal);

	// The compression level to be used when compressing. The default is 6, which is
	// the typical value used for zip utility programs when compressing data. The
	// compression level may range from 0 (no compression) to 9 (the most compression).
	// The benefits of trying to increase compression may not be worth the added
	// expense in compression time. In many cases (which is data dependent), the
	// improvement in compression is minimal while the increase in computation time is
	// significant.
	int get_CompressionLevel(void);
	// The compression level to be used when compressing. The default is 6, which is
	// the typical value used for zip utility programs when compressing data. The
	// compression level may range from 0 (no compression) to 9 (the most compression).
	// The benefits of trying to increase compression may not be worth the added
	// expense in compression time. In many cases (which is data dependent), the
	// improvement in compression is minimal while the increase in computation time is
	// significant.
	void put_CompressionLevel(int newVal);

	// Optional extra-data that can be included within a .gz when a Compress* method is
	// called.
	void get_ExtraData(CkByteData &outBytes);
	// Optional extra-data that can be included within a .gz when a Compress* method is
	// called.
	void put_ExtraData(const CkByteData &inBytes);

	// The filename that is embedded within the .gz during any Compress* method call.
	// When extracting from a .gz using applications such as WinZip, this will be the
	// filename that is created.
	void get_Filename(CkString &str);
	// The filename that is embedded within the .gz during any Compress* method call.
	// When extracting from a .gz using applications such as WinZip, this will be the
	// filename that is created.
	const uint16_t *filename(void);
	// The filename that is embedded within the .gz during any Compress* method call.
	// When extracting from a .gz using applications such as WinZip, this will be the
	// filename that is created.
	void put_Filename(const uint16_t *newVal);

	// The number of milliseconds between each AbortCheck event callback. The
	// AbortCheck callback allows an application to abort any method call prior to
	// completion. If HeartbeatMs is 0 (the default), no AbortCheck event callbacks
	// will fire.
	int get_HeartbeatMs(void);
	// The number of milliseconds between each AbortCheck event callback. The
	// AbortCheck callback allows an application to abort any method call prior to
	// completion. If HeartbeatMs is 0 (the default), no AbortCheck event callbacks
	// will fire.
	void put_HeartbeatMs(int newVal);

	// The last-modification date/time to be embedded within the .gz when a Compress*
	// method is called. By default, the current system date/time is used.
	void get_LastMod(SYSTEMTIME &outSysTime);
	// The last-modification date/time to be embedded within the .gz when a Compress*
	// method is called. By default, the current system date/time is used.
	void put_LastMod(const SYSTEMTIME &sysTime);

	// The same as the LastMod property, but allows the date/time to be get/set in
	// RFC822 string format.
	void get_LastModStr(CkString &str);
	// The same as the LastMod property, but allows the date/time to be get/set in
	// RFC822 string format.
	const uint16_t *lastModStr(void);
	// The same as the LastMod property, but allows the date/time to be get/set in
	// RFC822 string format.
	void put_LastModStr(const uint16_t *newVal);

	// If set to true, the file produced by an Uncompress* method will use the
	// current date/time for the last-modification date instead of the date/time found
	// within the Gzip format.
	bool get_UseCurrentDate(void);
	// If set to true, the file produced by an Uncompress* method will use the
	// current date/time for the last-modification date instead of the date/time found
	// within the Gzip format.
	void put_UseCurrentDate(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// In-place gzip the contents of binDat.
	bool CompressBd(CkBinDataU &binDat);

	// Creates an asynchronous task to call the CompressBd method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressBdAsync(CkBinDataU &binDat);

	// Compresses a file to create a GZip compressed file (.gz).
	bool CompressFile(const uint16_t *inFilename, const uint16_t *destPath);

	// Creates an asynchronous task to call the CompressFile method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressFileAsync(const uint16_t *inFilename, const uint16_t *destPath);

	// Compresses a file to create a GZip compressed file (.gz). inFilename is the actual
	// filename on disk. embeddedFilename is the filename to be embedded in the .gz such that when
	// it is un-gzipped, this is the name of the file that will be created.
	bool CompressFile2(const uint16_t *inFilename, const uint16_t *embeddedFilename, const uint16_t *destPath);

	// Creates an asynchronous task to call the CompressFile2 method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressFile2Async(const uint16_t *inFilename, const uint16_t *embeddedFilename, const uint16_t *destPath);

	// Gzip compresses a file to an in-memory image of a .gz file.
	// 
	// Note: There is a 4GB size limitation. The compressed size of the file cannot be
	// more than 4GB. Chilkat will be working to alleviate this limitation in the
	// future.
	// 
	bool CompressFileToMem(const uint16_t *inFilename, CkByteData &outData);

	// Creates an asynchronous task to call the CompressFileToMem method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressFileToMemAsync(const uint16_t *inFilename);

	// Compresses in-memory data to an in-memory image of a .gz file.
	// 
	// Note: There is a 4GB uncompressed size limitation. The uncompressed size of the
	// file cannot be more than 4GB. Chilkat will be working to alleviate this
	// limitation in the future.
	// 
	bool CompressMemory(CkByteData &inData, CkByteData &outData);

	// Creates an asynchronous task to call the CompressMemory method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressMemoryAsync(CkByteData &inData);

	// Gzip compresses and creates a .gz file from in-memory data.
	bool CompressMemToFile(CkByteData &inData, const uint16_t *destPath);

	// Creates an asynchronous task to call the CompressMemToFile method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressMemToFileAsync(CkByteData &inData, const uint16_t *destPath);

	// Gzip compresses a string and writes the output to a byte array. The string is
	// first converted to the charset specified by destCharset. Typical charsets are "utf-8",
	// "iso-8859-1", "shift_JIS", etc.
	bool CompressString(const uint16_t *inStr, const uint16_t *destCharset, CkByteData &outBytes);

	// Creates an asynchronous task to call the CompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressStringAsync(const uint16_t *inStr, const uint16_t *destCharset);

	// The same as CompressString, except the binary output is returned in encoded
	// string form according to the encoding. The encoding can be any of the following:
	// "Base64", "modBase64", "Base32", "UU", "QP" (for quoted-printable), "URL" (for
	// url-encoding), "Hex", "Q", "B", "url_oath", "url_rfc1738", "url_rfc2396", and
	// "url_rfc3986".
	bool CompressStringENC(const uint16_t *inStr, const uint16_t *charset, const uint16_t *encoding, CkString &outStr);
	// The same as CompressString, except the binary output is returned in encoded
	// string form according to the encoding. The encoding can be any of the following:
	// "Base64", "modBase64", "Base32", "UU", "QP" (for quoted-printable), "URL" (for
	// url-encoding), "Hex", "Q", "B", "url_oath", "url_rfc1738", "url_rfc2396", and
	// "url_rfc3986".
	const uint16_t *compressStringENC(const uint16_t *inStr, const uint16_t *charset, const uint16_t *encoding);

	// Gzip compresses a string and writes the output to a .gz compressed file. The
	// string is first converted to the charset specified by destCharset. Typical charsets are
	// "utf-8", "iso-8859-1", "shift_JIS", etc.
	bool CompressStringToFile(const uint16_t *inStr, const uint16_t *destCharset, const uint16_t *destPath);

	// Creates an asynchronous task to call the CompressStringToFile method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressStringToFileAsync(const uint16_t *inStr, const uint16_t *destCharset, const uint16_t *destPath);

	// Decodes an encoded string and returns the original data. The encoding mode is
	// determined by encoding. It may be "base64", "hex", "quoted-printable", or "url".
	bool Decode(const uint16_t *encodedStr, const uint16_t *encoding, CkByteData &outBytes);

	// Provides the ability to use the zip/gzip's deflate algorithm directly to
	// compress a string. Internal to this method, inString is first converted to the
	// charset specified by charsetName. The data is then compressed using the deflate
	// compression algorithm. The binary output is then encoded according to outputEncoding.
	// Possible values for outputEncoding are "hex", "base64", "url", and "quoted-printable".
	// 
	// Note: The output of this method is compressed data with no Gzip file format. Use
	// the Compress* methods to produce Gzip file format output.
	// 
	bool DeflateStringENC(const uint16_t *inString, const uint16_t *charsetName, const uint16_t *outputEncoding, CkString &outStr);
	// Provides the ability to use the zip/gzip's deflate algorithm directly to
	// compress a string. Internal to this method, inString is first converted to the
	// charset specified by charsetName. The data is then compressed using the deflate
	// compression algorithm. The binary output is then encoded according to outputEncoding.
	// Possible values for outputEncoding are "hex", "base64", "url", and "quoted-printable".
	// 
	// Note: The output of this method is compressed data with no Gzip file format. Use
	// the Compress* methods to produce Gzip file format output.
	// 
	const uint16_t *deflateStringENC(const uint16_t *inString, const uint16_t *charsetName, const uint16_t *outputEncoding);

	// Encodes binary data to a printable string. The encoding mode is determined by
	// encoding. It may be "base64", "hex", "quoted-printable", or "url".
	bool Encode(CkByteData &byteData, const uint16_t *encoding, CkString &outStr);
	// Encodes binary data to a printable string. The encoding mode is determined by
	// encoding. It may be "base64", "hex", "quoted-printable", or "url".
	const uint16_t *encode(CkByteData &byteData, const uint16_t *encoding);

	// Determines if the inGzFilename is a Gzip formatted file. Returns true if it is a Gzip
	// formatted file, otherwise returns false.
	bool ExamineFile(const uint16_t *inGzFilename);

	// Determines if the in-memory bytes (inGzData) contain a Gzip formatted file. Returns
	// true if it is Gzip format, otherwise returns false.
	bool ExamineMemory(CkByteData &inGzData);

	// Gets the last-modification date/time to be embedded within the .gz.
	// The caller is responsible for deleting the object returned by this method.
	CkDateTimeU *GetDt(void);

	// This the reverse of DeflateStringENC.
	// 
	// The input string is first decoded according to inputEncoding. (Possible values for inputEncoding
	// are "hex", "base64", "url", and "quoted-printable".) The compressed data is then
	// inflated, and the result is then converted from convertFromCharset (if necessary) to return a
	// string.
	// 
	bool InflateStringENC(const uint16_t *inString, const uint16_t *convertFromCharset, const uint16_t *inputEncoding, CkString &outStr);
	// This the reverse of DeflateStringENC.
	// 
	// The input string is first decoded according to inputEncoding. (Possible values for inputEncoding
	// are "hex", "base64", "url", and "quoted-printable".) The compressed data is then
	// inflated, and the result is then converted from convertFromCharset (if necessary) to return a
	// string.
	// 
	const uint16_t *inflateStringENC(const uint16_t *inString, const uint16_t *convertFromCharset, const uint16_t *inputEncoding);

	// Returns true if the component has been unlocked.
	bool IsUnlocked(void);

	// Reads a binary file into memory and returns the byte array. Note: This method
	// does not parse a Gzip, it is only a convenience method for reading a binary file
	// into memory.
	bool ReadFile(const uint16_t *path, CkByteData &outBytes);

	// Sets the last-modification date/time to be embedded within the .gz when a
	// Compress* method is called. If not explicitly set, the current system date/time
	// is used.
	bool SetDt(CkDateTimeU &dt);

	// In-place ungzip the contents of binDat.
	bool UncompressBd(CkBinDataU &binDat);

	// Creates an asynchronous task to call the UncompressBd method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressBdAsync(CkBinDataU &binDat);

	// Un-Gzips a .gz file. The output filename is specified by the 2nd argument and
	// not by the filename embedded within the .gz.
	bool UncompressFile(const uint16_t *srcPath, const uint16_t *destPath);

	// Creates an asynchronous task to call the UncompressFile method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressFileAsync(const uint16_t *srcPath, const uint16_t *destPath);

	// Un-Gzips a .gz file directly to memory.
	// 
	// Note: There is a 4GB uncompressed size limitation. The uncompressed size of the
	// file cannot be more than 4GB. Chilkat will be working to alleviate this
	// limitation in the future.
	// 
	bool UncompressFileToMem(const uint16_t *inFilename, CkByteData &outData);

	// Creates an asynchronous task to call the UncompressFileToMem method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressFileToMemAsync(const uint16_t *inFilename);

	// Uncompresses a .gz file that contains a text file. The contents of the text file
	// are returned as a string. The character encoding of the text file is specified
	// by charset. Typical charsets are "iso-8859-1", "utf-8", "windows-1252",
	// "shift_JIS", "big5", etc.
	bool UncompressFileToString(const uint16_t *gzFilename, const uint16_t *charset, CkString &outStr);
	// Uncompresses a .gz file that contains a text file. The contents of the text file
	// are returned as a string. The character encoding of the text file is specified
	// by charset. Typical charsets are "iso-8859-1", "utf-8", "windows-1252",
	// "shift_JIS", "big5", etc.
	const uint16_t *uncompressFileToString(const uint16_t *gzFilename, const uint16_t *charset);

	// Creates an asynchronous task to call the UncompressFileToString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressFileToStringAsync(const uint16_t *gzFilename, const uint16_t *charset);

	// Un-Gzips from an in-memory image of a .gz file directly into memory.
	// 
	// Note: There is a 4GB uncompressed size limitation. The uncompressed size of the
	// file cannot be more than 4GB. Chilkat will be working to alleviate this
	// limitation in the future.
	// 
	bool UncompressMemory(CkByteData &inData, CkByteData &outData);

	// Creates an asynchronous task to call the UncompressMemory method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressMemoryAsync(CkByteData &inData);

	// Un-Gzips from an in-memory image of a .gz file to a file.
	bool UncompressMemToFile(CkByteData &inData, const uint16_t *destPath);

	// Creates an asynchronous task to call the UncompressMemToFile method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressMemToFileAsync(CkByteData &inData, const uint16_t *destPath);

	// The reverse of CompressString.
	// 
	// The bytes in inData are uncompressed, then converted from inCharset (if necessary) to
	// return a string.
	// 
	bool UncompressString(CkByteData &inData, const uint16_t *inCharset, CkString &outStr);
	// The reverse of CompressString.
	// 
	// The bytes in inData are uncompressed, then converted from inCharset (if necessary) to
	// return a string.
	// 
	const uint16_t *uncompressString(CkByteData &inData, const uint16_t *inCharset);

	// Creates an asynchronous task to call the UncompressString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressStringAsync(CkByteData &inData, const uint16_t *inCharset);

	// The same as UncompressString, except the compressed data is provided in encoded
	// string form based on the value of encoding. The encoding can be "Base64", "modBase64",
	// "Base32", "UU", "QP" (for quoted-printable), "URL" (for url-encoding), "Hex",
	// "Q", "B", "url_oath", "url_rfc1738", "url_rfc2396", and "url_rfc3986".
	bool UncompressStringENC(const uint16_t *inStr, const uint16_t *charset, const uint16_t *encoding, CkString &outStr);
	// The same as UncompressString, except the compressed data is provided in encoded
	// string form based on the value of encoding. The encoding can be "Base64", "modBase64",
	// "Base32", "UU", "QP" (for quoted-printable), "URL" (for url-encoding), "Hex",
	// "Q", "B", "url_oath", "url_rfc1738", "url_rfc2396", and "url_rfc3986".
	const uint16_t *uncompressStringENC(const uint16_t *inStr, const uint16_t *charset, const uint16_t *encoding);

	// Unlocks the component allowing for the full functionality to be used.
	bool UnlockComponent(const uint16_t *unlockCode);

	// Unpacks a .tar.gz file. The ungzip and untar occur in streaming mode. There are
	// no temporary files and the memory footprint is constant (and small) while
	// untarring. bNoAbsolute may be true or false. A value of true protects from
	// untarring to absolute paths. (For example, imagine the trouble if the tar
	// contains files with absolute paths beginning with /Windows/system32)
	bool UnTarGz(const uint16_t *tgzFilename, const uint16_t *destDir, bool bNoAbsolute);

	// Creates an asynchronous task to call the UnTarGz method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UnTarGzAsync(const uint16_t *tgzFilename, const uint16_t *destDir, bool bNoAbsolute);

	// A convenience method for writing a binary byte array to a file.
	bool WriteFile(const uint16_t *path, CkByteData &binaryData);

	// Converts base64-gzip .xfdl data to a decompressed XML string. The xfldData contains
	// the base64 data. This method returns the decoded/decompressed XML string.
	bool XfdlToXml(const uint16_t *xfldData, CkString &outStr);
	// Converts base64-gzip .xfdl data to a decompressed XML string. The xfldData contains
	// the base64 data. This method returns the decoded/decompressed XML string.
	const uint16_t *xfdlToXml(const uint16_t *xfldData);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
