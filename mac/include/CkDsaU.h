// CkDsaU.h: interface for the CkDsaU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkDsaU_H
#define _CkDsaU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkUtf16Base.h"

class CkByteData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkDsaU
class CK_VISIBLE_PUBLIC CkDsaU  : public CkUtf16Base
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkDsaU(const CkDsaU &);
	CkDsaU &operator=(const CkDsaU &);

    public:
	CkDsaU(void);
	virtual ~CkDsaU(void);

	

	static CkDsaU *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The group size (in bits) to be used in DSA key generation. The default value is
	// 160 and corresponds to the fact that SHA-1 is used in signature generation. This
	// property setting should not be changed. It exists for future expansion when
	// additional underlying hash algorithms are supported.
	int get_GroupSize(void);
	// The group size (in bits) to be used in DSA key generation. The default value is
	// 160 and corresponds to the fact that SHA-1 is used in signature generation. This
	// property setting should not be changed. It exists for future expansion when
	// additional underlying hash algorithms are supported.
	void put_GroupSize(int newVal);

	// The hash to be signed or verified via the SignHash and Verify methods. In both
	// cases, the Hash should be set prior to calling SignHash or Verify. This property
	// may also be set via the SetEncodedHash method.
	void get_Hash(CkByteData &outBytes);
	// The hash to be signed or verified via the SignHash and Verify methods. In both
	// cases, the Hash should be set prior to calling SignHash or Verify. This property
	// may also be set via the SetEncodedHash method.
	void put_Hash(const CkByteData &inBytes);

	// The "G" part of a public or private DSA key returned as a hex-encoded
	// SSH1-format bignum. The "G" is the generator. DSA key params consist of G, P,
	// and Q.
	void get_HexG(CkString &str);
	// The "G" part of a public or private DSA key returned as a hex-encoded
	// SSH1-format bignum. The "G" is the generator. DSA key params consist of G, P,
	// and Q.
	const uint16_t *hexG(void);

	// The "P" part of a public or private DSA key returned as a hex-encoded
	// SSH1-format bignum. The "P" is a large prime. DSA key params consist of G, P,
	// and Q.
	void get_HexP(CkString &str);
	// The "P" part of a public or private DSA key returned as a hex-encoded
	// SSH1-format bignum. The "P" is a large prime. DSA key params consist of G, P,
	// and Q.
	const uint16_t *hexP(void);

	// The "Q" part of a public or private DSA key returned as a hex-encoded
	// SSH1-format bignum. DSA key params consist of G, P, and Q.
	void get_HexQ(CkString &str);
	// The "Q" part of a public or private DSA key returned as a hex-encoded
	// SSH1-format bignum. DSA key params consist of G, P, and Q.
	const uint16_t *hexQ(void);

	// The "X" part of a DSA private key returned as a hex-encoded SSH1-format bignum.
	void get_HexX(CkString &str);
	// The "X" part of a DSA private key returned as a hex-encoded SSH1-format bignum.
	const uint16_t *hexX(void);

	// The "Y" part of a DSA public key returned as a hex-encoded SSH1-format bignum.
	// (The "Y" value is also accessible w/ a private key, but the "X" value is not
	// available in a DSA public key.)
	void get_HexY(CkString &str);
	// The "Y" part of a DSA public key returned as a hex-encoded SSH1-format bignum.
	// (The "Y" value is also accessible w/ a private key, but the "X" value is not
	// available in a DSA public key.)
	const uint16_t *hexY(void);

	// The signature created by calling SignHash. If verifying a signature, this may be
	// set prior to calling the Verify method.
	void get_Signature(CkByteData &outBytes);
	// The signature created by calling SignHash. If verifying a signature, this may be
	// set prior to calling the Verify method.
	void put_Signature(const CkByteData &inBytes);



	// ----------------------
	// Methods
	// ----------------------
	// Loads a DSA private key from in-memory DSA DER encoded bytes.
	bool FromDer(CkByteData &derData);

	// Loads a DSA private key from a DER-encoded file.
	bool FromDerFile(const uint16_t *path);

	// Loads a DSA private key from an in-memory encrypted PEM-formatted string. If the
	// PEM passed to this method is unencrypted, the password is ignored and the PEM is
	// simply loaded.
	bool FromEncryptedPem(const uint16_t *password, const uint16_t *pemData);

	// Loads a DSA private key from an in-memory unencrypted PEM-formatted string.
	bool FromPem(const uint16_t *pemData);

	// Loads a DSA public key from an in-memory DER-encoded byte array.
	bool FromPublicDer(CkByteData &derData);

	// Loads a DSA public key from a DER-encoded file.
	bool FromPublicDerFile(const uint16_t *path);

	// Loads a DSA public-key from an in-memory PEM string.
	bool FromPublicPem(const uint16_t *pemData);

	// Loads a DSA public or private key from an in-memory XML string.
	bool FromXml(const uint16_t *xmlKey);

	// Generates a new DSA key that is numBits bits in length. The numBits should be at least
	// 1024 bits and a multiple of 64. Typical values are 1024 and 2048. The newly
	// generated key may be exported by calling one of the To* methods.
	bool GenKey(int numBits);

	// Generates a new DSA key from in-memory DER parameters created by OpenSSL. The
	// newly generated key may be exported by calling one of the To* methods.
	bool GenKeyFromParamsDer(CkByteData &derBytes);

	// Generates a new DSA key from a DER-format parameters file created by OpenSSL. An
	// example of using OpenSSL to generate DSA parameters in DER format is:
	// openssl dsaparam -outform DER 1024 dsaparam.der
	// The newly generated key may be exported by calling one of the To* methods.
	bool GenKeyFromParamsDerFile(const uint16_t *path);

	// Generates a new DSA key from parameters (PEM formatted string) created by
	// OpenSSL. The newly generated key may be exported by calling one of the To*
	// methods.
	bool GenKeyFromParamsPem(const uint16_t *pem);

	// Generates a new DSA key from a PEM parameters file created by OpenSSL. The newly
	// generated key may be exported by calling one of the To* methods.
	// 
	// OpenSSL provides the ability to generate DSA key parameters. For example:
	// openssl dsaparam 1024 dsaparam.pem
	// 
	// Here is a sample DSA parameters PEM:
	// -----BEGIN DSA PARAMETERS-----
	// MIIBHgKBgQCXIAx4XzLVZ5ZqOFzdsYWVyH/6E/mVPw4TgMZS6Wxajnbdn1/CUBzE
	// RWTUp8SguTSDpjC1Q/nyno0G6Q96VoW+PUXv8qUph8vbSaEdsjYO/8jSfzkGfvsa
	// cucr1ythfNyk63aZAKzxeutOmsVe77l6pZI96ROjWF5iizuUB4WgmwIVANxM70wH
	// 8iPPYVzPZqtXCB66I2SnAoGAIbW2VYRjRdoA7trJgmnfWakghKwV1WyaYrotqeDE
	// 07/dipp0cNuY0IAJgSmqLHlAkNa2ZNI/c1mNxcwhYzZrnn8CXIqrYmtI33w0PYCx
	// KHPqj7puhddFwYS/rFiyWAN0jtCMHlfCVzFGbSzach5QQraPV9YApJXy+ORJ8VPU
	// /zo=
	// -----END DSA PARAMETERS-----
	// 
	bool GenKeyFromParamsPemFile(const uint16_t *path);

	// Returns the bytes of the Hash property as a hex or base64 encoded string. The
	// encoding should be set to either "hex" or "base64".
	bool GetEncodedHash(const uint16_t *encoding, CkString &outStr);
	// Returns the bytes of the Hash property as a hex or base64 encoded string. The
	// encoding should be set to either "hex" or "base64".
	const uint16_t *getEncodedHash(const uint16_t *encoding);
	// Returns the bytes of the Hash property as a hex or base64 encoded string. The
	// encoding should be set to either "hex" or "base64".
	const uint16_t *encodedHash(const uint16_t *encoding);

	// Returns the bytes of the Signature property as a hex or base64 encoded string.
	// The encoding should be set to either "hex" or "base64". The Signature property is
	// set when SignHash is called.
	bool GetEncodedSignature(const uint16_t *encoding, CkString &outStr);
	// Returns the bytes of the Signature property as a hex or base64 encoded string.
	// The encoding should be set to either "hex" or "base64". The Signature property is
	// set when SignHash is called.
	const uint16_t *getEncodedSignature(const uint16_t *encoding);
	// Returns the bytes of the Signature property as a hex or base64 encoded string.
	// The encoding should be set to either "hex" or "base64". The Signature property is
	// set when SignHash is called.
	const uint16_t *encodedSignature(const uint16_t *encoding);

	// Convenience method to load the entire contents of a text file into a string. It
	// is assumed that the text contains ANSI encoded character data.
	bool LoadText(const uint16_t *path, CkString &outStr);
	// Convenience method to load the entire contents of a text file into a string. It
	// is assumed that the text contains ANSI encoded character data.
	const uint16_t *loadText(const uint16_t *path);

	// Convenience method to save a string to a text file. The text is saved using the
	// ANSI character encoding.
	bool SaveText(const uint16_t *strToSave, const uint16_t *path);

	// Provides a way to set the Hash property by passing an encoded string. The encoding
	// can be "hex" or "base64". The encodedHash contains the encoded bytes of the hash that
	// will be signed or verified via the SignHash and Verify methods.
	bool SetEncodedHash(const uint16_t *encoding, const uint16_t *encodedHash);

	// Sets the bytes of the Signature property. (The signature must be specified prior
	// to calling the Verify method.) This method allows for the signature to be set
	// via a hex or base64 encoded string. The encoding should be set to either "hex" or
	// "base64".
	bool SetEncodedSignature(const uint16_t *encoding, const uint16_t *encodedSig);

	// Sets the bytes of the Signature property by providing the R and S values in
	// encoded form. (The signature must be specified prior to calling the Verify
	// method.) The R and S values may be set via a hex or base64 encoded string. The
	// encoding should be set to either "hex" or "base64".
	bool SetEncodedSignatureRS(const uint16_t *encoding, const uint16_t *encodedR, const uint16_t *encodedS);

	// Sets the DSA object's private key from explicitly provided pHex, qHex, gHex, and
	// xHex values. The groupSizeInBytes specifies the group size (in bytes). It is typically equal
	// to 20, which is the length of the underlying hash function (SHA-1) for signing.
	// The pHex, qHex, gHex, and xHex values are hex-encoded SSH1-format bignums.
	bool SetKeyExplicit(int groupSizeInBytes, const uint16_t *pHex, const uint16_t *qHex, const uint16_t *gHex, const uint16_t *xHex);

	// Sets the DSA object's private key from explicitly provided pHex, qHex, gHex, and
	// yHex values. The groupSizeInBytes specifies the group size (in bytes). It is typically equal
	// to 20, which is the length of the underlying hash function (SHA-1) for signing.
	// The pHex, qHex, gHex, and yHex values are hex-encoded SSH1-format bignums.
	bool SetPubKeyExplicit(int groupSizeInBytes, const uint16_t *pHex, const uint16_t *qHex, const uint16_t *gHex, const uint16_t *yHex);

	// Signs a hash using the digital signature algorithm. Before calling this method,
	// set the hash to be signed by either calling SetEncodedHash or by setting the
	// Hash property. If SignHash returns true, the signature may be retrieved by
	// either calling GetEncodedHash, or by accessing the Signature property.
	bool SignHash(void);

	// Writes the DSA private key to a DER-encoded byte array.
	bool ToDer(CkByteData &outBytes);

	// Writes the DSA private key to a DER-format file.
	bool ToDerFile(const uint16_t *path);

	// Writes the DSA private key to an in-memory encrypted PEM string.
	bool ToEncryptedPem(const uint16_t *password, CkString &outStr);
	// Writes the DSA private key to an in-memory encrypted PEM string.
	const uint16_t *toEncryptedPem(const uint16_t *password);

	// Writes the DSA private key to an in-memory PEM string.
	bool ToPem(CkString &outStr);
	// Writes the DSA private key to an in-memory PEM string.
	const uint16_t *toPem(void);

	// Writes the DSA public key to a DER-encoded byte array.
	bool ToPublicDer(CkByteData &outBytes);

	// Writes the DSA public key to a DER-format file.
	bool ToPublicDerFile(const uint16_t *path);

	// Writes the DSA public key to an in-memory PEM string.
	bool ToPublicPem(CkString &outStr);
	// Writes the DSA public key to an in-memory PEM string.
	const uint16_t *toPublicPem(void);

	// Writes the DSA private or public key to an in-memory XML string. The bPublicOnly
	// determines whether the public or private key is written.
	bool ToXml(bool bPublicOnly, CkString &outStr);
	// Writes the DSA private or public key to an in-memory XML string. The bPublicOnly
	// determines whether the public or private key is written.
	const uint16_t *toXml(bool bPublicOnly);

	// Unlocks the component. This must be called once prior to calling any other
	// method.
	bool UnlockComponent(const uint16_t *unlockCode);

	// Verifies a DSA signature. The Hash and Signature properties must be set prior to
	// calling this method. (These properties may also be set via the SetEncodedHash
	// and SetEncodedSignature methods.)
	bool Verify(void);

	// Verifies that the public or private key contained in the calling Dsa object is
	// valid. Returns true if valid, otherwise returns false.
	bool VerifyKey(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
