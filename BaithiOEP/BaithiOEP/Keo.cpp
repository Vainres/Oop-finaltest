#include "Keo.h"
void Keo::Nhap()
{
	cout << "Loai keo -tinh mem (1-keo cung,2-keo mem) : ";
	int a;
	cin >> a;
	if (a == 1) this->Dactinh = "Cung";
	else this->Dactinh = "Mem";
	cout << "Ma thuc pham : ";
	cin >> this->Ma;
	cout << "Ten : ";
	cin >> this->Ten;
	cout << "Khoi luong cua 1 tui (gram) : ";
	cin >> this->Khoiluongtinh;
	cout << "Gia nhap : ";
	cin >> this->Gianhap;
	if (a == 1) this->Giaban = this->Gianhap * 1.3;
	else this->Giaban = this->Gianhap * 1.1;
}