#include "stdafx.h"
#include "ToHop.h"
#include <iostream>


ToHop::ToHop(int n)
{
	_dataList = new int[n];
	_n = n;
}

void ToHop::Print(int* &b, int n)
{
	for (int i = 0; i < n; i++)
	{
		int tmp = b[i];
		std::cout << _dataList[tmp];
	}
	std::cout << " ";
}

void ToHop::Try(int* &b, int k, int i)
{
	for (int j = i; j < _n; j++)
	{
		if (i > 0){
			if (b[i - 1] < j)
			{
				b[i] = _dataList[j];
				if (i == k - 1)
				{
					Print(b, k);
				}
			}
		}
		else{
			b[i] = _dataList[j];
		}		
		if (i < k - 1)
		{
			Try(b, k, i + 1);
		}
	}
}

void ToHop::Process(int k)
{
	int* b = new int[k];
	for (int i = 0; i < _n; i++)
	{
		_dataList[i] = i;
	}
	Try(b, k, 0);
}


ToHop::~ToHop()
{
}
