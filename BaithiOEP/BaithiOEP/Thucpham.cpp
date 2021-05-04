#include "Thucpham.h"
void Thucpham::Nhap()
{

}
ostream& operator<<(ostream& out, Thucpham& thucpham)
{
	out << "<" << thucpham.Ma << ">" 
		<< "<" << thucpham.Loaithucpham << ">" 
		<< "<" << thucpham.Ten << ">" 
		<< "<" << thucpham.Noicungcap << ">" 
		<< "<" << thucpham.Khoiluongtinh << ">" 
		<< "<" << thucpham.Gianhap << ">" 
		<< "<" << thucpham.Giaban << ">";
	return out;
}