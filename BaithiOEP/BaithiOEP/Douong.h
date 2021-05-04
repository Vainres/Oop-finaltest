#pragma once
#include <iostream>
using namespace std;
class Douong
{
protected:
	string Ma, Loai, Ten, Noicungcap;
	float Gianhap, Dungtich;
	float  Giaban;
public:
	virtual void Nhap(int) {}
	float Gia() { return this->Giaban; }
	friend ostream& operator<<(ostream&, Douong&);
};

