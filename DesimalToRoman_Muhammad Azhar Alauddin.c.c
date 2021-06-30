/*Program : DesimalToRoman.c
* Deskripsi : Desimal ke Romawi
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 24 Januari 2020
*/

#include<stdio.h>
int romawi(int angka){
	while (angka>=1000){
		printf("M");
		angka-=1000;
	}
	if(angka>=900){
		printf("CM");
		angka-=900;
	}
	else if(angka>=500){
		printf("D");
		angka-=500;
	}
	if(angka>=400){
		printf("CD");
		angka-=400;
	}
	while(angka>=100){
		printf("C");
		angka-=100;
	}
	if(angka>=90){
		printf("XC");
		angka-=90;
	}
	else if(angka>=50){
		printf("L");
		angka-=50;
	}
	if(angka>=40){
		printf("XL");
		angka-=40;
	}
	while(angka>=10){
		printf("X");
		angka-=10;
	}
	if(angka==9){
		printf("IX");
		angka-=9;
	}
	else if(angka>=5){
		printf("V");
		angka-=5;
	}
	if(angka==4){
		printf("IV");
		angka-=4;
	}
	while(angka>=1){
		printf("I");
		angka-=1;
	}
}

int main(){
	int angka;
	scanf("%d",&angka);
    romawi(angka);
    return 0;
}
