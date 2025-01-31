// CkDtObjU.h: interface for the CkDtObjU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkDtObjU_H
#define _CkDtObjU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkUtf16Base.h"




#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkDtObjU
class CK_VISIBLE_PUBLIC CkDtObjU  : public CkUtf16Base
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkDtObjU(const CkDtObjU &);
	CkDtObjU &operator=(const CkDtObjU &);

    public:
	CkDtObjU(void);
	virtual ~CkDtObjU(void);

	

	static CkDtObjU *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The day of the month. The valid values for this member are 1 through 31.
	int get_Day(void);
	// The day of the month. The valid values for this member are 1 through 31.
	void put_Day(int newVal);

	// The hour. The valid values for this member are 0 through 23.
	int get_Hour(void);
	// The hour. The valid values for this member are 0 through 23.
	void put_Hour(int newVal);

	// The minute. The valid values for this member are 0 through 59.
	int get_Minute(void);
	// The minute. The valid values for this member are 0 through 59.
	void put_Minute(int newVal);

	// The month. The valid values for this member are 1 through 12 where 1 = January
	// and 12 = December.
	int get_Month(void);
	// The month. The valid values for this member are 1 through 12 where 1 = January
	// and 12 = December.
	void put_Month(int newVal);

	// The second. The valid values for this member are 0 through 59.
	int get_Second(void);
	// The second. The valid values for this member are 0 through 59.
	void put_Second(int newVal);

	// The month. The valid values for this member are 0 through 11 where 0 = January
	// and 11 = December.
	int get_StructTmMonth(void);
	// The month. The valid values for this member are 0 through 11 where 0 = January
	// and 11 = December.
	void put_StructTmMonth(int newVal);

	// The year represented as the number of years since 1900.
	int get_StructTmYear(void);
	// The year represented as the number of years since 1900.
	void put_StructTmYear(int newVal);

	// true if this is a UTC time, otherwise false if this is a local time.
	bool get_Utc(void);
	// true if this is a UTC time, otherwise false if this is a local time.
	void put_Utc(bool newVal);

	// The year, such as 2012.
	int get_Year(void);
	// The year, such as 2012.
	void put_Year(int newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Loads the date/time with a string having the format as produced by the Serialize
	// method, which is a string of SPACE separated integers containing (in this order)
	// year, month, day, hour, minutes, seconds, and a UTC flag having the value of
	// 1/0.
	void DeSerialize(const uint16_t *serializedDtObj);

	// Serializes the date/time to a us-ascii string that can be imported at a later
	// time via the DeSerialize method. The format of the string returned by this
	// method is not intended to match any published standard. It is formatted to a
	// string with SPACE separated integers containing (in this order) year, month,
	// day, hour, minutes, seconds, and a UTC flag having the value of 1/0.
	bool Serialize(CkString &outStr);
	// Serializes the date/time to a us-ascii string that can be imported at a later
	// time via the DeSerialize method. The format of the string returned by this
	// method is not intended to match any published standard. It is formatted to a
	// string with SPACE separated integers containing (in this order) year, month,
	// day, hour, minutes, seconds, and a UTC flag having the value of 1/0.
	const uint16_t *serialize(void);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
