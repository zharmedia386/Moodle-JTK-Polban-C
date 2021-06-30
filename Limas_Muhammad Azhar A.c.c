/*
Program		: Volume Limas
Deskripsi	: Menghitung volume limas dengan alas segi empat
Nama		: Muhammad Azhar Alauddin
Tanggal		: 4 Desember 2020
Compiler	: DevC++
------------------------------------------*/

#include <stdio.h>
int main(){
	/*DEKLARASI & INISIALISASI */
	float volume;
	float panjang, lebar, tinggi;

	/*Proses*/
	scanf("%f", &panjang);
	scanf("%f", &lebar);
	scanf("%f", &tinggi);
	
	volume = panjang*lebar*tinggi*1/3;
	
	printf("%f", volume);
	printf("\n");
	return 0;
}
