// BaithiOEP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Congty.h"
#include <fstream>
using namespace std;
int main()
{
	Congty congty;
	congty.Nhap();
	cout << congty;
	ofstream file("danh_sach_goi_san_pham.txt", ios::out);
	file << congty;
	file.close();

}

/*
1
1
Goi001
1
2
2
1
TP001
keo mem lala
500
100
1
TP002
banh toto
500
150
1
1
2
R001
ruou vang zozo
4
1000
*/