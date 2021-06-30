/*
Program		: Konversi Celcius ke Fahrenheit
Deskripsi	: Mengonversi suhu dalam satuan Celcius menjadi suhu dalam satuan Fahrenheit.
Nama		: Muhammad Azhar Alauddin
Tanggal		: 4 Desember 2020
Compiler	: DevC++
------------------------------------------*/

#include <stdio.h>
#include <math.h>

int main(){
	/*DEKLARASI & INISIALISASI */
	float Celcius;
	float Fahrenheit;

	/*Proses*/
	scanf ("%f", &Celcius);
	Fahrenheit = Celcius*1.8 + 32;
	printf("%.2f", Fahrenheit);
	printf("\n");
	return 0;
}
