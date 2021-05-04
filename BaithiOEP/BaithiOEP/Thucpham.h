#pragma once
#include <iostream>
using namespace std;
class Thucpham
{
protected:
	string Ma, Loaithucpham, Ten, Noicungcap;
	float Gianhap, Khoiluongtinh;
	float  Giaban;
public:
	virtual void Nhap();
	float Gia() { return this->Giaban; }
	friend ostream& operator<<(ostream&, Thucpham&);
};

