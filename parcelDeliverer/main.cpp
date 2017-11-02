#include <conio.h>
#include <iostream>

#include "cplayground.h"

using std::cin;
using std::cout;

int main()
{
	int				x = 10,
					y = 20;
	CPlayground		NewParcel;

	NewParcel.inputData(x, y);
	NewParcel.returnData(x, y);

	cout << "Feldgroesse: " << NewParcel.calculateSize(x, y);

	_getch();
	return 0;
}