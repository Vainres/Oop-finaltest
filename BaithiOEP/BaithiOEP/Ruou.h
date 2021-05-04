#pragma once
#include "Douong.h"
class Ruou:public Douong
{
private:
	int Loai,Nongdocon;

public:
	Ruou() { this->Noicungcap = "BLACK"; }
	void Nhap(int);
};

