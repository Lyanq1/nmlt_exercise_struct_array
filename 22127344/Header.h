#pragma once
struct phanso {
	int tuso;
	int mauso;

};


void chuanhoa(phanso& x);


void nhapPS(phanso& x);

void nhapPhanSoTrongMang(phanso a[], int& n);


void xuatPhanSo(phanso x);

void xuatPhanSotrongmang(phanso a[], int n);

int ucln(int x, int y);

void rutGon(phanso& x);

phanso tinhTong(phanso a, phanso b);

phanso tinhTongMang(phanso a[], int n);

int soSanh(phanso a, phanso b);

void sapxep(phanso a[], int n);
