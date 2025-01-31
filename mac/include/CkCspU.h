// CkCspU.h: interface for the CkCspU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkCspU_H
#define _CkCspU_H
	
#include "chilkatDefs.h"
#if defined(CK_WINDOWS)
#include "CkString.h"
#include "CkUtf16Base.h"

class CkStringArrayU;
class CkStringTableU;
class CkCertU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkCspU
class CK_VISIBLE_PUBLIC CkCspU  : public CkUtf16Base
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkCspU(const CkCspU &);
	CkCspU &operator=(const CkCspU &);

    public:
	CkCspU(void);
	virtual ~CkCspU(void);

	

	static CkCspU *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// Returns the name of the currently selected encryption algorithm in the currently
	// selected CSP.
	void get_EncryptAlgorithm(CkString &str);
	// Returns the name of the currently selected encryption algorithm in the currently
	// selected CSP.
	const uint16_t *encryptAlgorithm(void);

	// Returns the ID of the currently selected encryption algorithm in the currently
	// selected CSP.
	int get_EncryptAlgorithmID(void);

	// Returns the key-length of the currently selected encryption algorithm in the
	// currently selected CSP.
	int get_EncryptNumBits(void);

	// Returns the name of the currently selected hash algorithm in the currently
	// selected CSP.
	void get_HashAlgorithm(CkString &str);
	// Returns the name of the currently selected hash algorithm in the currently
	// selected CSP.
	const uint16_t *hashAlgorithm(void);

	// Returns the ID of the currently selected hash algorithm in the currently
	// selected CSP.
	int get_HashAlgorithmID(void);

	// Returns the bit length of the currently selected hash algorithm in the currently
	// selected CSP.
	int get_HashNumBits(void);

	// The name of the currently selected key container within the currently selected
	// CSP. The default is typically the name of the current logged-in user.
	void get_KeyContainerName(CkString &str);
	// The name of the currently selected key container within the currently selected
	// CSP. The default is typically the name of the current logged-in user.
	const uint16_t *keyContainerName(void);
	// The name of the currently selected key container within the currently selected
	// CSP. The default is typically the name of the current logged-in user.
	void put_KeyContainerName(const uint16_t *newVal);

	// To be documented soon.
	bool get_MachineKeyset(void);
	// To be documented soon.
	void put_MachineKeyset(bool newVal);

	// The number of encryption algorithms provided by the currently selected CSP.
	int get_NumEncryptAlgorithms(void);

	// The number of hash algorithms provided by the currently selected CSP.
	int get_NumHashAlgorithms(void);

	// The number of key containers provided by the currently selected CSP.
	int get_NumKeyContainers(void);

	// The number of key exchange algorithms provided by the currently selected CSP.
	int get_NumKeyExchangeAlgorithms(void);

	// The number of signature algorithms provided by the currently selected CSP.
	int get_NumSignatureAlgorithms(void);

	// The currently selected CSP. To select another CSP, simply set this property to
	// the name of the CSP, such as "Microsoft Enhanced Cryptographic Provider v1.0".
	// If the CSP is not available on your machine, the property value will not change.
	// The initial and default value for this property is "Microsoft Base Cryptographic
	// Provider v1.0".
	void get_ProviderName(CkString &str);
	// The currently selected CSP. To select another CSP, simply set this property to
	// the name of the CSP, such as "Microsoft Enhanced Cryptographic Provider v1.0".
	// If the CSP is not available on your machine, the property value will not change.
	// The initial and default value for this property is "Microsoft Base Cryptographic
	// Provider v1.0".
	const uint16_t *providerName(void);
	// The currently selected CSP. To select another CSP, simply set this property to
	// the name of the CSP, such as "Microsoft Enhanced Cryptographic Provider v1.0".
	// If the CSP is not available on your machine, the property value will not change.
	// The initial and default value for this property is "Microsoft Base Cryptographic
	// Provider v1.0".
	void put_ProviderName(const uint16_t *newVal);

	// This is an integer representing the type of CSP. (Chilkat uses it for internal
	// use.)
	int get_ProviderType(void);



	// ----------------------
	// Methods
	// ----------------------

	// The caller is responsible for deleting the object returned by this method.
	CkStringArrayU *GetKeyContainerNames(void);

	// Returns the names of the CSP's (Cryptographic Service Providers) that are
	// registered on the Windows system.
	bool GetProviders(CkStringTableU &providerNames);

	// Returns true if the currently selected CSP contains an encryption algorithm
	// matching the name and key length. Otherwise returns false.
	bool HasEncryptAlgorithm(const uint16_t *name, int numBits);

	// Returns true if the currently selected CSP contains a hash algorithm matching
	// the name and bit length. Otherwise returns false.
	bool HasHashAlgorithm(const uint16_t *name, int numBits);

	// Intializes the Csp with the selected ProviderName.
	bool Initialize(void);

	// Loads the cert with the certificate currently in the smartcard reader, or the
	// USB token that is currently inserted.
	bool LoadSmartcardCert(CkCertU &cert);

	// Returns the name of the Nth encryption algorithm provided by the currently
	// selected CSP. Indexing begins at 0.
	bool NthEncryptionAlgorithm(int index, CkString &outName);
	// Returns the name of the Nth encryption algorithm provided by the currently
	// selected CSP. Indexing begins at 0.
	const uint16_t *nthEncryptionAlgorithm(int index);

	// Returns the key-length of the currently selected encryption algorithm in the
	// currently selected CSP.
	int NthEncryptionNumBits(int index);


	bool NthHashAlgorithmName(int index, CkString &outName);

	const uint16_t *nthHashAlgorithmName(int index);

	// Returns the bit length of the Nth hash algorithm provided by the currently
	// selected CSP. Indexing begins at 0.
	int NthHashNumBits(int index);

	// Returns the Nth key container name in the currently selected CSP. Indexing
	// begins at 0.
	bool NthKeyContainerName(int index, CkString &outName);
	// Returns the Nth key container name in the currently selected CSP. Indexing
	// begins at 0.
	const uint16_t *nthKeyContainerName(int index);

	// Returns the Nth key exchange algorithm provided by the currently selected CSP.
	// Indexing begins at 0.
	bool NthKeyExchangeAlgorithm(int index, CkString &outName);
	// Returns the Nth key exchange algorithm provided by the currently selected CSP.
	// Indexing begins at 0.
	const uint16_t *nthKeyExchangeAlgorithm(int index);

	// Returns the bit length of the Nth key exchange algorithm provided by the
	// currently selected CSP. Indexing begins at 0.
	int NthKeyExchangeNumBits(int index);

	// Returns the name of the Nth signature algorithm provided by the currently
	// selected CSP. Indexing begins at 0.
	bool NthSignatureAlgorithm(int index, CkString &outName);
	// Returns the name of the Nth signature algorithm provided by the currently
	// selected CSP. Indexing begins at 0.
	const uint16_t *nthSignatureAlgorithm(int index);

	// Returns the bit length of the Nth signature algorithm provided by the currently
	// selected CSP. Indexing begins at 0.
	int NthSignatureNumBits(int index);

	// Selects an encryption algorithm. The return value is the key-length of the
	// algorithm. If the algorithm is not available, the return value is 0. (There
	// usually is not a need to explicitly select the key length, because the key
	// length can be part of the name, such as "AES 128", or it is determined by the
	// CSP. For example, the Microsoft Enhanced CSP will return a 128-bit key length
	// for RC2, whereas the Base CSP will return a 40-bit key length.)
	int SetEncryptAlgorithm(const uint16_t *name);

	// Selects a hash algorithm. The return value is the bit-length of the algorithm.
	// If the algorithm is not available, the return value is 0.
	int SetHashAlgorithm(const uint16_t *name);

	// Sets the CSP to the Base Microsoft Cryptographic Provider, which is the default.
	bool SetProviderMicrosoftBase(void);

	// Sets the CSP to the Enhanced Microsoft Cryptographic Provider.
	bool SetProviderMicrosoftEnhanced(void);

	// Sets the CSP to the Microsoft Cryptographic RSA/AES Prototype Provider.
	bool SetProviderMicrosoftRsaAes(void);

	// Sets the CSP to the Strong Microsoft Cryptographic Provider.
	bool SetProviderMicrosoftStrong(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif

#endif
	
#endif
