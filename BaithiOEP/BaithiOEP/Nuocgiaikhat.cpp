#include "Nuocgiaikhat.h"
void Nuocgiaikhat::Nhap(int a)
{
	cout << "Loai nuoc giai khat (1-co ga,2-khong co ga) : ";
	cin >> this->Ga;
	cout << "Ma nuoc : ";
	cin >> this->Ma;
	cout << "Ten : ";
	cin >> this->Ten;
	cout << "Dung tich : ";
	cin >> this->Dungtich;
	cout << "Gia nhap : ";
	cin >> this->Gianhap;
	if (this->Ga == 1) this->Giaban = this->Gianhap * 1.2;
	else this->Giaban = this->Gianhap * 1.1;
}