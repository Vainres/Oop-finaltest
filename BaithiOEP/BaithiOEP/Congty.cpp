#include "Congty.h"
void Congty::Nhap()
{
	cout << "Nhap so luong goi san pham : ";
	cin >> this->sl;
	this->DSGOI = new Goi*[sl];
	for (int i = 0;i < sl;i++)
	{
		string maoi;
		cout << "Nhap thong so goi san pham thu " << i + 1 << " : "<<endl;
		cout << "Ma goi :";
		cin >> maoi;
		cout << "Chon loai goi san pham (1-goi chuan,2-goi dac biet) : ";
		int l;
		cin >> l;
		if (l == 1) this->DSGOI[i] = new Goichuan;
		else this->DSGOI[i] = new Goidacbiet;
		this->DSGOI[i]->Nhap(maoi);
	};
}

ostream& operator<<(ostream& out, Congty& congti)
{
	for (int i = 0;i < congti.sl;i++)
	{
		out << "Goi san pham:" << *congti.DSGOI[i];
	}
	return out;
}