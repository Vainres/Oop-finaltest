#include "Goidacbiet.h"
void Goidacbiet::Nhap(string ma)
{
	this->Magoi = ma;
	cout << "So luong don vi thuc pham trong goi : ";
	cin >> this->slthucpham;
	this->thucpham = new Thucpham * [slthucpham];
	for (int i = 0;i < slthucpham;i++)
	{
		int tts;
		cout << "Loai thuc pham (1-banh,2-keo) : ";
		cin >> tts;
		if (tts == 1) this->thucpham[i] = new Banh;
		else {
			this->thucpham[i] = new Keo;
		}
		this->thucpham[i]->Nhap();
	}

	cout << "So luong don vi do uong trong goi : ";
	cin >> this->sldouong;
	this->douong = new Douong * [sldouong];
	for (int i = 0;i < sldouong;i++)
	{
		int tts;
		cout << "Loai thuc uong (1-ruou,2-nuoc giai khat) : ";
		cin >> tts;
		if (tts == 1) this->douong[i] = new Ruou;
		else this->douong[i] = new Nuocgiaikhat;
		this->douong[i]->Nhap(1);
	}
}

float Goidacbiet::Giatien()
{
	this->Giaban = 0;
	for (int i = 0;i < sldouong;i++)
	{
		this->Giaban += this->douong[i]->Gia();
	}
	for (int i = 0;i < slthucpham;i++)
	{
		this->Giaban += this->thucpham[i]->Gia();
	}
	this->Giaban *= 1.3;
	return this->Giaban;
}