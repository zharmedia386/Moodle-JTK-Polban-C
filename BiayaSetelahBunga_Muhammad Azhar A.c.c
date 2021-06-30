/*
Program		: Biaya Setelah Bunga
Deskripsi	: Menghitung total biaya yang harus dibayar
Nama		: Muhammad Azhar Alauddin
Tanggal		: 4 Desember 2020
Compiler	: DevC++
------------------------------------------*/

#include<stdio.h>
int main(){
	float biayaAwal;
	float biayaBunga;
	float totalBiaya;
	
	scanf ("%f",&biayaAwal);
	scanf ("%f",&biayaBunga);
	
	totalBiaya= (float) biayaAwal + biayaAwal*biayaBunga/100;
	printf("%.2f", totalBiaya);
	printf("\n");
	return 0;
}
