#include "Banh.h"
void Banh::Nhap()
{
	cout << "Ma thuc pham : ";
	cin >> this->Ma;
	cout << "Ten : ";
	cin >> this->Ten;
	cout << "Khoi luong cua 1 tui (gram) : ";
	cin >> this->Khoiluongtinh;
	cout << "Gia nhap : ";
	cin >> this->Gianhap;
	this->Giaban = this->Gianhap * 1.2;
}