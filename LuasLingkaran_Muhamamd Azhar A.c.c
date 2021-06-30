/*
Program		: Luas Lingkaran
Deskripsi	: Menghitung luas lingkaran
Nama		: Muhammad Azhar Alauddin
Tanggal		: 4 Desember 2020
Compiler	: DevC++
------------------------------------------*/

#include <stdio.h>
#include <math.h>
int main() {
	
	/* Kamus Data */
	float luas; // variabel luas lingkaran
	float r; // variabel jari-jari lingkaran
	float p = 3.14;
	
	/* Algoritma */
	scanf("%f",&r);
	if((r > 0) && (r <= 100)) {
		luas = p*(r*r);
	}
	
	printf("%.2f\n", luas);
	return 0;
}
