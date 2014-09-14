// Son.h: interface for the Son class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SON_H__8975E5D8_A905_4104_A161_85D2C3203FB2__INCLUDED_)
#define AFX_SON_H__8975E5D8_A905_4104_A161_85D2C3203FB2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <iostream.h>
#include "Father.h"

class Son :public Father
{
public:
	Son();
	virtual ~Son();
	virtual void printTest();

};

#endif // !defined(AFX_SON_H__8975E5D8_A905_4104_A161_85D2C3203FB2__INCLUDED_)
