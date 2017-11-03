#include <iostream>
#include "cplayground.h"

#define sizeX 10
#define sizeY 20

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

bool CPlayground::createPlayground(int x, int y) {
	bool bIsCreated = false;
	int	iSize;
	int iField[sizeX][sizeY] = {};

	iSize = calculateSize(x, y);

	for (int m = 0; m < y; m++) {
		for (int n = 0; n < x; n++) {
			std::cout << iField[n][m];
			std::cout << "\t";
		}
		std::cout << "\n";
	}

	bIsCreated = true;

	return bIsCreated;
}