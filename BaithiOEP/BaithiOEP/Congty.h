#pragma once
#include "Goichuan.h"
#include "Goidacbiet.h"
class Congty
{
private:
	int sl;
	Goi** DSGOI;
	
public:
	void Nhap();
	float dd() {
		float S = 0;
		for (int i = 0;i < sl;i++) S += DSGOI[i]->Giatien();
		return S;
	}
	friend ostream& operator<<(ostream&,Congty&);
};

