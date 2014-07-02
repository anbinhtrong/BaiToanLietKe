#pragma once
class ChinhHopKhongLap
{
private:
	int* _dataList;  //tap hop huu han n phan tu
	int _n;
public:
	ChinhHopKhongLap(int n);
	void Print(int* &b, int n);
	void Try(int* &b, bool* &isUsedElementList, int k, int i);
	void Process(int k);
	~ChinhHopKhongLap();
};

