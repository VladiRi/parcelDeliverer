#ifndef __CPLAYER_H__
#define __CPLAYER_H__

#include "ctransporter.h"

/*
	- this class will be get public-access to the transporter-class
	(because it needs to get information how many parcel still fit in the transporter)
*/

class CPlayer : public CTransporter
{
public:
	CPlayer();
	~CPlayer();

	bool putParcelIntoTransporter(CTransporter Transporter); // TODO: rename variable Transporter to more specific
};

#endif /* CPLAYER_H */