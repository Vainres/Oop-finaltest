#pragma once
#include "Banh.h"
#include "Keo.h"
#include "Ruou.h"
#include "Nuocgiaikhat.h"
class Goi
{
protected:
	Douong** douong;
	Thucpham** thucpham ;
	int slthucpham;
	int sldouong;
	float Giaban;
	string Magoi;
public:
	virtual void Nhap(string) {}
	virtual float Giatien() { return Giaban; }
	friend ostream& operator<< (ostream&, Goi&);
};

