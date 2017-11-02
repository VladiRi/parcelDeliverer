#include "cplayground.h"

CPlayground::CPlayground() {
	_iCoordX = 0;
	_iCoordY = 0;
}

CPlayground::CPlayground(int x, int y) {
	_iCoordX = x;
	_iCoordY = y;
}

CPlayground::~CPlayground() {
	_iCoordX = 0;
	_iCoordY = 0;
}

void	 CPlayground::inputData(int x, int y) {
	_iCoordX = x;
	_iCoordY = y;
}

void CPlayground::returnData(int& x, int& y) {
	x = _iCoordX;
	y = _iCoordY;
}

int CPlayground::calculateSize(int x, int y) {
	return x * y;
}