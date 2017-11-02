#ifndef __CPARCEL_H__
#define __CPARCEL_H__

class CParcel
{
public:
	CParcel();
	~CParcel();

	void		inputData(int x, int y, int z, int w);
	void		returnData(int& x, int& y, int& z, int& w);

	int		returnVolume(int x, int y, int z);
	double	returnWeight(double d);

private:
	int		_iWidth;
	int		_iHeight;
	int		_iDepth;

	double	_dWeight;
};

#endif /* CPARCEL_H */