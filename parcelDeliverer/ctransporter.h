#ifndef __TRANSPORTER_H__
#define __TRANSPORTER_H__

class CTransporter
{
public:
	CTransporter();
	CTransporter(double dVolume); // TODO: change the parameter-list of the extended constructor!
	~CTransporter();

	double returnCurrentVolume();

private:
	int		_iWidth;
	int		_iHeight;
	int		_iDepth;
	double	_dVolume = 100;	// variable will represent the theoretical volume of the container
						// Notice: DOESN'T mean, that a parcel fits, even if the volume is still enough!!!
};

#endif /* TRANSPORTER_H */