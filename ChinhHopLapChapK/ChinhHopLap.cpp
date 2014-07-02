#include "stdafx.h"
#include "ChinhHopLap.h"
#include <iostream>


ChinhHopLap::ChinhHopLap(int n)
{
	_dataList = new int[n];
	_n = n;
}

void ChinhHopLap::Print(int* &b, int n)
{
	for (int i = 0; i < n; i++)
	{
		int tmp = b[i];
		std::cout << _dataList[tmp];
	}
	std::cout << " ";
}

void ChinhHopLap::Try(int* &b, int k, int i)
{
	for (int j = 0; j < _n; j++)
	{
		b[i] = _dataList[j];
		if (i == k - 1)
		{
			Print(b, k);
		}
		else
			Try(b, k, i + 1);
	}
}

void ChinhHopLap::Process(int k)
{
	int* b = new int[k];
	for (int i = 0; i < _n; i++)
	{
		_dataList[i] = i;
	}
	Try(b, k, 0);
}


ChinhHopLap::~ChinhHopLap()
{
}
