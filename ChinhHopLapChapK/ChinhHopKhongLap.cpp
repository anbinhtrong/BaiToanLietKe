#include "stdafx.h"
#include "ChinhHopKhongLap.h"
#include <iostream>

ChinhHopKhongLap::ChinhHopKhongLap(int n)
{
	_dataList = new int[n];
	_n = n;
}

void ChinhHopKhongLap::Print(int* &b, int n)
{
	for (int i = 0; i < n; i++)
	{
		int tmp = b[i];
		std::cout << _dataList[tmp];
	}
	std::cout << " ";
}

void ChinhHopKhongLap::Try(int* &b, bool* &isUsedElementList,int k, int i)
{
	for (int j = 0; j < _n; j++)
	{
		if (isUsedElementList[j] == false)
		{
			b[i] = _dataList[j];
			isUsedElementList[j] = true;
			if (i == k - 1)
			{
				Print(b, k);
			}
			else
				Try(b, isUsedElementList, k, i + 1);
			isUsedElementList[j] = false;
		}
		
	}
}

void ChinhHopKhongLap::Process(int k)
{
	int* b = new int[k];
	bool* isUsedElementList = new bool[_n];
	for (int i = 0; i < _n; i++)
	{
		_dataList[i] = i;
		isUsedElementList[i] = false;
	}
	Try(b, isUsedElementList, k, 0);
}

ChinhHopKhongLap::~ChinhHopKhongLap()
{
}
