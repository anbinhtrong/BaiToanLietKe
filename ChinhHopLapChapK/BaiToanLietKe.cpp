// ChinhHopLapChapK.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ChinhHopLap.h"
#include "ChinhHopKhongLap.h"
#include "ToHop.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Chinh hop lap" << endl;;
	ChinhHopLap chinhhoplapChapK(5);
	chinhhoplapChapK.Process(3);
	//-------------	
	cout << endl;
	cout << "Chinh hop khong lap"<<endl;
	ChinhHopKhongLap chinhHopKhongLap(5);
	chinhHopKhongLap.Process(3);
	cout << endl;
	cout << "To hop" << endl;
	ToHop tohop(5);
	tohop.Process(3);
	cout << endl;
	return 0;
}

