#include "Douong.h"
ostream& operator<<(ostream& out, Douong& douong)
{
	out << "<" << douong.Ma << ">" 
		<< "<" << douong.Loai << ">" 
		<< "<" << douong.Ten << ">" 
		<< "<" << douong.Noicungcap << ">" 
		<< "<" << douong.Dungtich << ">" 
		<< "<" << douong.Gianhap << ">" 
		<< "<" << douong.Giaban << ">";
	return out;
}