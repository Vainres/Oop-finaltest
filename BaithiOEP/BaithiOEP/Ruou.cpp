#include "Ruou.h"
void Ruou::Nhap(int a)
{
	int ffff;
	do {
		cout << "Loai ruou (1-ruou loai I,2-ruou loai II) : ";
		cin >> ffff;
	} while (ffff != a);
	this->Loai=ffff;
	cout << "Ma ruou : ";
	cin >> this->Ma;
	cout << "Ten : ";
	cin >> this->Ten;
	cout << "Nong do con (do) : ";
	cin >> this->Nongdocon;
	cout << "Dung tich : ";
	cin >> this->Dungtich;
	cout << "Gia nhap : ";
	cin >> this->Gianhap;
	if (ffff == 1) this->Giaban = this->Gianhap * 2;
	else this->Giaban = this->Gianhap * 1.5;
}