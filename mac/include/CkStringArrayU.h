// CkStringArrayU.h: interface for the CkStringArrayU class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 9.5.0.80

#ifndef _CkStringArrayU_H
#define _CkStringArrayU_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkUtf16Base.h"

class CkTaskU;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkStringArrayU
class CK_VISIBLE_PUBLIC CkStringArrayU  : public CkUtf16Base
{
	

	private:
	
	// Don't allow assignment or copying these objects.
	CkStringArrayU(const CkStringArrayU &);
	CkStringArrayU &operator=(const CkStringArrayU &);

    public:
	CkStringArrayU(void);
	virtual ~CkStringArrayU(void);

	

	static CkStringArrayU *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The number of strings contained within the object's internal array (i.e. ordered
	// collection).
	// 
	// Important: This is an object that contains a collection of strings. Although the
	// class/object name includes the word "Array", it should not be confused with an
	// array in the sense of the primitive array type used in a given programming
	// language.
	// 
	int get_Count(void);

	// If true, strings are always automatically converted to use CRLF line endings.
	// If false, strings are automatically converted to use bare LF line endings.
	bool get_Crlf(void);
	// If true, strings are always automatically converted to use CRLF line endings.
	// If false, strings are automatically converted to use bare LF line endings.
	void put_Crlf(bool newVal);

	// The number of strings contained within the internal collection. (Identical to
	// the Count property.)
	int get_Length(void);

	// If true, whitespace, including carriage-returns and linefeeds, are
	// automatically removed from the beginning and end of a string when added to the
	// collection.
	bool get_Trim(void);
	// If true, whitespace, including carriage-returns and linefeeds, are
	// automatically removed from the beginning and end of a string when added to the
	// collection.
	void put_Trim(bool newVal);

	// If true, then duplicates are not allowed. When an attempt is made to insert a
	// string that already exists, the duplicate insertion is silently suppressed and
	// no error is returned. The default value is false.
	bool get_Unique(void);
	// If true, then duplicates are not allowed. When an attempt is made to insert a
	// string that already exists, the duplicate insertion is silently suppressed and
	// no error is returned. The default value is false.
	void put_Unique(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Appends a string to the end of the internal ordered collection.
	bool Append(const uint16_t *str);

	// Appends multiple strings to the end of the internal ordered collection. The encodedStr
	// is what is returned from the Serialize method (see below).
	bool AppendSerialized(const uint16_t *encodedStr);

	// Remove all strings from the internal collection.
	void Clear(void);

	// Returns true if the string is present in the internal collection. The string
	// comparisons are case sensitive.
	bool Contains(const uint16_t *str);

	// Finds the index of the first string equal to findStr. The search begins at startIndex. If
	// the string is not found, -1 is returned. The first string in the array is at
	// index 0.
	int Find(const uint16_t *findStr, int startIndex);

	// Finds the first string that matches the matchPattern. The search begins at startIndex. If the
	// string is not found, -1 is returned. The first string in the array is at index
	// 0.
	// 
	// The matchPattern may contain zero or more asterisk chars, each of which matches 0 or
	// more of any character.
	// 
	int FindFirstMatch(const uint16_t *matchPattern, int startIndex);

	// Returns the string at an indexed location within the internal collection. The
	// first string is located at index 0.
	bool GetString(int index, CkString &outStr);
	// Returns the string at an indexed location within the internal collection. The
	// first string is located at index 0.
	const uint16_t *getString(int index);
	// Returns the string at an indexed location within the internal collection. The
	// first string is located at index 0.
	const uint16_t *string(int index);

	// Returns Nth string's length, in characters. The first string is located at index
	// 0.
	int GetStringLen(int index);

	// Inserts a string into the internal collection at a specified index. Using index
	// 0 will insert at the beginning.
	void InsertAt(int index, const uint16_t *str);

	// Returns the last string in the internal collection.
	bool LastString(CkString &outStr);
	// Returns the last string in the internal collection.
	const uint16_t *lastString(void);

	// Loads strings from a file (one per line) into the internal collection. It is
	// assumed the file contains ANSI strings. To load from a file containing non-ANSI
	// strings (such as utf-8), call LoadFromFile2 instead.
	// 
	// Note: This method appends the strings in path to the existing collection of
	// strings contained in this object.
	// 
	bool LoadFromFile(const uint16_t *path);

	// Loads strings from a file (one per line) into the internal collection. The charset
	// specifies the character encoding (such as utf-8) of the strings contained in the
	// file.
	// 
	// Note: This method appends the strings in path to the existing collection of
	// strings contained in this object.
	// 
	bool LoadFromFile2(const uint16_t *path, const uint16_t *charset);

	// Loads strings from an in-memory string (one per line) into the internal
	// collection.
	// 
	// Note: This method appends the strings in str to the existing collection of
	// strings contained in this object.
	// 
	void LoadFromText(const uint16_t *str);

	// Loads the string collection from a completed asynchronous task.
	bool LoadTaskResult(CkTaskU &task);

	// Returns the last string and removes it from the internal collection.
	bool Pop(CkString &outStr);
	// Returns the last string and removes it from the internal collection.
	const uint16_t *pop(void);

	// Adds a string to the beginning of the internal collection.
	void Prepend(const uint16_t *str);

	// Removes all strings equal to the string argument from the internal collection.
	void Remove(const uint16_t *str);

	// Removes the string at a particular index.
	bool RemoveAt(int index);

	// Replaces the string at a specified index.
	void ReplaceAt(int index, const uint16_t *str);

	// Saves the Nth string in the collection to a file.
	bool SaveNthToFile(int index, const uint16_t *saveToPath);

	// Saves the collection of strings to a file, one string per line. Strings are
	// saved using the ANSI charset. (Call SaveToFile2 to specify a charset, such as
	// "utf-8")
	bool SaveToFile(const uint16_t *path);

	// Saves the collection of strings to a file, one string per line. Strings are
	// saved using the specified charset.
	bool SaveToFile2(const uint16_t *saveToPath, const uint16_t *charset);

	// Writes the collection of strings to a single string, one per line (separated by
	// CRLF line endings).
	bool SaveToText(CkString &outStr);
	// Writes the collection of strings to a single string, one per line (separated by
	// CRLF line endings).
	const uint16_t *saveToText(void);

	// Returns an string which is an encoded representation of all the strings in the
	// collection. The string collection can be re-created by calling the
	// AppendSerialized method.
	bool Serialize(CkString &outStr);
	// Returns an string which is an encoded representation of all the strings in the
	// collection. The string collection can be re-created by calling the
	// AppendSerialized method.
	const uint16_t *serialize(void);

	// Sorts the strings in the collection in ascending or descending order. To sort in
	// ascending order, set ascending to true, otherwise set ascending equal to false.
	void Sort(bool ascending);

	// Splits a string at a character or substring boundary and adds each resulting
	// string to the internal collection.
	void SplitAndAppend(const uint16_t *str, const uint16_t *boundary);

	// Returns the string at a specific index.
	bool StrAt(int index, CkString &outStr);
	// Returns the string at a specific index.
	const uint16_t *strAt(int index);

	// Subtracts the strings contained within stringArrayObj from the caller's internal
	// collection.
	void Subtract(CkStringArrayU &stringArrayObj);

	// Performs the union set-operator. The result is that the caller will have a
	// string collection that is the union of itself and stringArrayObj.
	void Union(CkStringArrayU &stringArrayObj);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
