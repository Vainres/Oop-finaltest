#include "Goi.h"
ostream& operator<<(ostream& out, Goi& goi)
{
	out << "<" << goi.Magoi << ">" 
		<< "<" << goi.Giatien() <<">"
		<<"<"<<goi.slthucpham<<">"
		<<"<"<<goi.sldouong<<">"<<endl;
	for (int i = 0;i < goi.sldouong;i++) out <<"Do uong "<<i+1<< ":"<<*goi.douong[i]<<endl;
	for (int i = 0;i < goi.slthucpham;i++) out <<"Thuc pham "<<i+1<< ":"<<*goi.thucpham[i]<<endl;
		return out;
}