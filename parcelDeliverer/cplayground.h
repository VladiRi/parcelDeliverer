#ifndef __CPLAYGROUND_H__
#define __CPLAYGROUND_H__

class CPlayground
{
public:
	CPlayground();
	CPlayground(int x, int y);
	~CPlayground();

	void		inputData(int x, int y);
	void		returnData(int& x, int& y);

	int		calculateSize(int x, int y);
	bool		createPlayground(int x, int y);

private:
	int		_iCoordX;
	int		_iCoordY;
};

#endif /* CPLAYGROUND_H */