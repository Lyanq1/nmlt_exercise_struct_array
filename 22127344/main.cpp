#include <iostream>
#include <algorithm>
#include "Header.h"
using namespace std;

//khai bao struct 


int main() {
	phanso a[100];
	int n;
	cout << "Xin hay nhap so phan tu co trong day phan so: "; 
	nhapPhanSoTrongMang(a, n);
	xuatPhanSotrongmang(a, n);
	cout << "Tong phan so trong day vua nhap la: ";
	phanso t = tinhTongMang(a, n);
	xuatPhanSo(t);
	sapxep(a, n);
	cout << "Thu tu sap xep tang dan cua day phan so la: "<<endl;
	xuatPhanSotrongmang(a, n);
	 return 0;
}
