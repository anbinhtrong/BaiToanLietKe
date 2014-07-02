#pragma once
class ToHop
{
private:
	int* _dataList;  //tap hop huu han n phan tu
	int _n;
public:
	ToHop(int n);
	void Print(int* &b, int n);
	void Try(int* &b, int k, int i);
	void Process(int k);
	~ToHop();
};

