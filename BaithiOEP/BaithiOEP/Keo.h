#pragma once
#include "Thucpham.h"
class Keo:public Thucpham
{
private:
	string Dactinh;
public:
	Keo() { this->Noicungcap = "RED"; }
	void Nhap();
};

