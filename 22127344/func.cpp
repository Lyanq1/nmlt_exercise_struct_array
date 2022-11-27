#include <iostream>
#include <algorithm>
using namespace std;
struct phanso {
	int tuso;
	int mauso;

};

phanso a[100];
int n;

//Ham nhap vao n phan so
void chuanhoa(phanso& x) {
	if (x.mauso < 0)
	{
		x.tuso = -x.tuso;
		x.mauso = -x.mauso;
	}
}

void nhapPS(phanso& x) {
	cout << "Nhap tu so: ";
	cin >> x.tuso;
	cout << "Nhap phan so: ";
	cin >> x.mauso;
	chuanhoa(x);
}

void nhapPhanSoTrongMang(phanso a[], int& n) {
	cin >> n;
	for (int i = 0;i < n;i++) {
		cout << "Xin moi nhap vao phan so thu " << i + 1 << ": \n";
		nhapPS(a[i]);
	}
}

void xuatPhanSo(phanso x) {
	cout << x.tuso << "/" << x.mauso << endl;
}

void xuatPhanSotrongmang(phanso a[], int n) {
	for (int i = 0;i < n;i++) {
		cout << "Phan so thu " << i + 1 << " la: ";
		xuatPhanSo(a[i]);
	}
}

int ucln(int x, int y) {
	x = abs(x);
	y = abs(y);
	if (x * y == 0)
		return x + y;
	while (x != y)
		if (x > y)
			x = x - y;
		else
			y = y - x;
	return x;
}

void rutGon(phanso& x) {
	int uocchung = ucln(x.tuso, x.mauso);
	x.tuso = x.tuso / uocchung;
	x.mauso = x.mauso / uocchung;
}

phanso tinhTong(phanso a, phanso b) {
	phanso tong;
	tong.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
	tong.mauso = a.mauso * b.mauso;
	rutGon(tong);
	return tong;

}

phanso tinhTongMang(phanso a[], int n) {
	phanso t = a[0];
	for (int i = 1; i < n; i++)
		t = tinhTong(t, a[i]);
	return t;

}

int soSanh(phanso a, phanso b) {
	chuanhoa(a);
	chuanhoa(b);
	if ((a.tuso * b.mauso) > (b.tuso * a.mauso))
		return 1;
	else if ((a.tuso * b.mauso) < (b.tuso * a.mauso))
		return -1;
	else
		return 0;
}

void sapxep(phanso a[], int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (soSanh(a[i], a[j]) > 0) {
				phanso temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}


