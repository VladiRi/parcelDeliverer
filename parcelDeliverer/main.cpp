/*
	-- Aufgabe Code-Competititon --
	Entwickle ein spannendes Spiel, bei dem der Spieler
	als Paketbote unterwegs ist.
	Der Transporter soll voll geladen sein und optimal mit m�glichst vielen Paketen
	unterscheidlicher Gr��en und Formen beladen werden (Tipp: Tetris)

	1. Schritt - allgemeine Klassen (Playground, Parcel, Player, Transporter)
	2. Schritt - Beladung des Transporters mit 1 Paket (Gr��e: 1x1)
	3. Schritt - Beladung des Transporters mit Paketen GLEICHER Gr��e
	4. Schritt - Beladung des Transporters mit Paketen UNTERSCHIEDLICHER Gr��e
*/

#include <conio.h>
#include <iostream>

#include "cplayground.h"
#include "cparcel.h"
#include "cplayer.h"
#include "ctransporter.h"

using std::cin;
using std::cout;

int main()
{
	/*--test variables--*/
	int				x = 10,
					y = 20;

	CPlayground		NewPlayground;
	CPlayer			NewPlayer;
	CParcel			NewParcel;
	CTransporter		NewTransporter;

	/*--test area--*/
	NewPlayground.createPlayground(x, y);

	cout << NewTransporter.returnCurrentVolume();

	/*NewParcel.inputData(x, y);
	NewParcel.returnData(x, y);

	cout << "Feldgroesse: " << NewParcel.calculateSize(x, y);
	*/

	_getch();
	return 0;
}