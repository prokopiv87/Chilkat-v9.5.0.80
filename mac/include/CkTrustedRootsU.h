// CkTrustedRootsU.h: interface for the CkTrustedRootsU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkTrustedRootsU_H
#define _CkTrustedRootsU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkClassWithCallbacksU.h"

class CkCertU;
class CkJavaKeyStoreU;
class CkTaskU;
class CkBaseProgressU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkTrustedRootsU
class CK_VISIBLE_PUBLIC CkTrustedRootsU  : public CkClassWithCallbacksU
{
	public:
	bool m_cbOwned;

	private:
	
	// Don't allow assignment or copying these objects.
	CkTrustedRootsU(const CkTrustedRootsU &);
	CkTrustedRootsU &operator=(const CkTrustedRootsU &);

    public:
	CkTrustedRootsU(void);
	virtual ~CkTrustedRootsU(void);

	

	static CkTrustedRootsU *createNew(void);
	

	CkTrustedRootsU(bool bCallbackOwned);
	static CkTrustedRootsU *createNew(bool bCallbackOwned);

	
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
	// The number of certificates contained within this object.
	// 
	// This is the number of certificates explicitly added by the methods AddCert,
	// AddJavaKeyStore, and LoadCaCertsPem.
	// 
	int get_NumCerts(void);

	// Indicates whether all self-signed certificates are to be rejected in SSL/TLS
	// connections. The default value of this property is false.
	// 
	// Note: This is for the case where the server certificate chain of authentication
	// is 1 certificate long (i.e. the TLS server certificate itself is self-signed).
	// 
	bool get_RejectSelfSignedCerts(void);
	// Indicates whether all self-signed certificates are to be rejected in SSL/TLS
	// connections. The default value of this property is false.
	// 
	// Note: This is for the case where the server certificate chain of authentication
	// is 1 certificate long (i.e. the TLS server certificate itself is self-signed).
	// 
	void put_RejectSelfSignedCerts(bool newVal);

	// Indicates whether the operating system's CA root certificates are automatically
	// trusted.
	// 
	// On a Windows operating system, this would be the registry-based CA certificate
	// stores. On a Linux system, this could be /etc/ssl/certs/ca-certificates.crt, if
	// it exists. The default value is true. Set this property equal to false to
	// prevent Chilkat from automatically trusting system-provided root CA
	// certificates.
	// 
	bool get_TrustSystemCaRoots(void);
	// Indicates whether the operating system's CA root certificates are automatically
	// trusted.
	// 
	// On a Windows operating system, this would be the registry-based CA certificate
	// stores. On a Linux system, this could be /etc/ssl/certs/ca-certificates.crt, if
	// it exists. The default value is true. Set this property equal to false to
	// prevent Chilkat from automatically trusting system-provided root CA
	// certificates.
	// 
	void put_TrustSystemCaRoots(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Activates this collection of trusted roots as the set of CA and self-signed root
	// certificates that are to be trusted Chilkat-wide for PKCS7 signature validation
	// and SSL/TLS server certificate validation.
	bool Activate(void);

	// Adds a certificate to the collection of trusted roots.
	bool AddCert(CkCertU &cert);

	// Adds the trusted certificates from a Java key store to the collection of trusted
	// roots.
	bool AddJavaKeyStore(CkJavaKeyStoreU &keystore);

	// Creates an asynchronous task to call the AddJavaKeyStore method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *AddJavaKeyStoreAsync(CkJavaKeyStoreU &keystore);

	// Deactivates a previously set of activated trusted roots so that all roots /
	// self-signed certificates are implicitly trusted.
	bool Deactivate(void);

	// Returns the Nth cert contained within this object. The 1st certificate is at
	// index 0.
	// The caller is responsible for deleting the object returned by this method.
	CkCertU *GetCert(int index);

	// Loads a CA bundle in PEM format. This is a file containing CA root certificates
	// that are to be trusted. An example of one such file is the CA certs from
	// mozilla.org exported to a cacert.pem file by the mk-ca-bundle tool located here:
	// http://curl.haxx.se/docs/caextract.html.
	// 
	// Note: This can also be called to load the /etc/ssl/certs/ca-certificates.crt
	// file on Linux systems.
	// 
	bool LoadCaCertsPem(const uint16_t *path);

	// Creates an asynchronous task to call the LoadCaCertsPem method with the
	// arguments provided. (Async methods are available starting in Chilkat v9.5.0.52.)
	// The caller is responsible for deleting the object returned by this method.
	CkTaskU *LoadCaCertsPemAsync(const uint16_t *path);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
