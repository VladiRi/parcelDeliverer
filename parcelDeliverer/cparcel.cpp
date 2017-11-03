#include "cparcel.h"

CParcel::CParcel()
{
	_iWidth		= 0;
	_iHeight		= 0;
	_iDepth		= 0;
	_dWeight		= 0.0;
}

CParcel::CParcel(int x, int y, int z, int w)
{
	_iWidth = x;
	_iHeight = y;
	_iDepth = z;
	_dWeight = w;
}

CParcel::~CParcel()
{}

void CParcel::inputData(int x, int y, int z, int w)
{
	_iWidth		= x;
	_iHeight		= y;
	_iDepth		= z;
	_dWeight		= w;
}

void CParcel::returnData(int& x, int& y, int& z, int& w)
{
	x = _iWidth;
	y = _iHeight;
	z = _iDepth;
	w = _dWeight;
}

int CParcel::returnVolume(int x, int y, int z)
{
	return x * y * z;
}

double CParcel::returnWeight(double d)
{
	d = _dWeight;
	return _dWeight;
}