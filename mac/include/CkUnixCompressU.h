// CkUnixCompressU.h: interface for the CkUnixCompressU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkUnixCompressU_H
#define _CkUnixCompressU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkClassWithCallbacksU.h"

class CkTaskU;
class CkByteData;
class CkBaseProgressU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkUnixCompressU
class CK_VISIBLE_PUBLIC CkUnixCompressU  : public CkClassWithCallbacksU
{
	public:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkUnixCompressU(const CkUnixCompressU &);
	CkUnixCompressU &operator=(const CkUnixCompressU &);

    public:
	CkUnixCompressU(void);
	virtual ~CkUnixCompressU(void);

	

	static CkUnixCompressU *createNew(void);
	

	CkUnixCompressU(bool bCallbackOwned);
	static CkUnixCompressU *createNew(bool bCallbackOwned);

	
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



	// ----------------------
	// Methods
	// ----------------------
	// Compresses a file to create a UNIX compressed file (.Z). This compression uses
	// the LZW (Lempel-Ziv-Welch) compression algorithm.
	bool CompressFile(const uint16_t *inFilename, const uint16_t *destPath);

	// Creates an asynchronous task to call the CompressFile method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressFileAsync(const uint16_t *inFilename, const uint16_t *destPath);

	// Unix compresses a file to an in-memory image of a .Z file. (This compression
	// uses the LZW (Lempel-Ziv-Welch) compression algorithm.)
	bool CompressFileToMem(const uint16_t *inFilename, CkByteData &outData);

	// Creates an asynchronous task to call the CompressFileToMem method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *CompressFileToMemAsync(const uint16_t *inFilename);

	// Compresses in-memory data to an in-memory image of a .Z file. (This compression
	// uses the LZW (Lempel-Ziv-Welch) compression algorithm.)
	bool CompressMemory(CkByteData &inData, CkByteData &outData);

	// Unix compresses and creates a .Z file from in-memory data. (This compression
	// uses the LZW (Lempel-Ziv-Welch) compression algorithm.)
	bool CompressMemToFile(CkByteData &inData, const uint16_t *destPath);

	// Compresses a string to an in-memory image of a .Z file. Prior to compression,
	// the string is converted to the character encoding specified by charset. The charset
	// can be any one of a large number of character encodings, such as "utf-8",
	// "iso-8859-1", "Windows-1252", "ucs-2", etc.
	bool CompressString(const uint16_t *inStr, const uint16_t *charset, CkByteData &outBytes);

	// Unix compresses and creates a .Z file from string data. The charset specifies the
	// character encoding used for the byte representation of the characters when
	// compressed. The charset can be any one of a large number of character encodings,
	// such as "utf-8", "iso-8859-1", "Windows-1252", "ucs-2", etc.
	bool CompressStringToFile(const uint16_t *inStr, const uint16_t *charset, const uint16_t *destPath);

	// Returns true if the component has been unlocked. (For ActiveX, returns 1 if
	// unlocked.)
	bool IsUnlocked(void);

	// Uncompresses a .Z file. (This compression uses the LZW (Lempel-Ziv-Welch)
	// compression algorithm.)
	bool UncompressFile(const uint16_t *inFilename, const uint16_t *destPath);

	// Creates an asynchronous task to call the UncompressFile method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressFileAsync(const uint16_t *inFilename, const uint16_t *destPath);

	// Uncompresses a .Z file directly to memory. (This compression uses the LZW
	// (Lempel-Ziv-Welch) compression algorithm.)
	bool UncompressFileToMem(const uint16_t *inFilename, CkByteData &outData);

	// Creates an asynchronous task to call the UncompressFileToMem method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressFileToMemAsync(const uint16_t *inFilename);

	// Uncompresses a .Z file that contains a text file. The contents of the text file
	// are returned as a string. The character encoding of the text file is specified
	// by charset. Typical charsets are "iso-8859-1", "utf-8", "windows-1252",
	// "shift_JIS", "big5", etc.
	bool UncompressFileToString(const uint16_t *zFilename, const uint16_t *charset, CkString &outStr);
	// Uncompresses a .Z file that contains a text file. The contents of the text file
	// are returned as a string. The character encoding of the text file is specified
	// by charset. Typical charsets are "iso-8859-1", "utf-8", "windows-1252",
	// "shift_JIS", "big5", etc.
	const uint16_t *uncompressFileToString(const uint16_t *zFilename, const uint16_t *charset);

	// Creates an asynchronous task to call the UncompressFileToString method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UncompressFileToStringAsync(const uint16_t *zFilename, const uint16_t *charset);

	// Uncompresses from an in-memory image of a .Z file directly into memory. (This
	// compression uses the LZW (Lempel-Ziv-Welch) compression algorithm.)
	bool UncompressMemory(CkByteData &inData, CkByteData &outData);

	// Uncompresses from an in-memory image of a .Z file to a file. (This compression
	// uses the LZW (Lempel-Ziv-Welch) compression algorithm.)
	bool UncompressMemToFile(CkByteData &inData, const uint16_t *destPath);

	// Uncompresses from an in-memory image of a .Z file directly to a string. The charset
	// specifies the character encoding used to interpret the bytes resulting from the
	// decompression. The charset can be any one of a large number of character encodings,
	// such as "utf-8", "iso-8859-1", "Windows-1252", "ucs-2", etc.
	bool UncompressString(CkByteData &inCompressedData, const uint16_t *charset, CkString &outStr);
	// Uncompresses from an in-memory image of a .Z file directly to a string. The charset
	// specifies the character encoding used to interpret the bytes resulting from the
	// decompression. The charset can be any one of a large number of character encodings,
	// such as "utf-8", "iso-8859-1", "Windows-1252", "ucs-2", etc.
	const uint16_t *uncompressString(CkByteData &inCompressedData, const uint16_t *charset);

	// Unlocks the component allowing for the full functionality to be used.
	bool UnlockComponent(const uint16_t *unlockCode);

	// Unpacks a .tar.Z file. The decompress and untar occur in streaming mode. There
	// are no temporary files and the memory footprint is constant (and small) while
	// untarring.
	bool UnTarZ(const uint16_t *zFilename, const uint16_t *destDir, bool bNoAbsolute);

	// Creates an asynchronous task to call the UnTarZ method with the arguments
	// provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *UnTarZAsync(const uint16_t *zFilename, const uint16_t *destDir, bool bNoAbsolute);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
