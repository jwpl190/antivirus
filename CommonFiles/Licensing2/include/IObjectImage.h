/* Generated by Together */

#ifndef IOBJECTIMAGE_H
#define IOBJECTIMAGE_H

namespace KasperskyLicensing {

/** Class represents stored object abstraction.
 * @interface */
class IObjectImage
{
	friend class AutoPointer<IObjectImage>;

public:

	/**
	 * returns stored object name
	 */
	virtual const char_t* GetObjectName() const = 0;

	/**
	 * returns size of stored object image
	 */
	virtual unsigned int GetObjectSize() const = 0;

	/**
	 * returns stored object image
	 */
	virtual const void* GetObjectImage() const = 0;

protected:

	/**
	 * Destructor is protected in order to prevent direct use of delete operator. 
	 */
	virtual ~IObjectImage() {}
};

} // namespace KasperskyLicensing

#endif // ISTOREDOBJECT_H