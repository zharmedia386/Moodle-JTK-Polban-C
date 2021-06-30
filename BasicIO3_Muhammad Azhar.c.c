/*
Program		: Basic I/O 3
Deskripsi	: Menampilkan  semua bilangan bulat dari X  hingga  Y dalam satu baris
Nama		: Muhammad Azhar Alauddin
Tanggal		: 4 Desember 2020
Compiler	: DevC++
------------------------------------------*/

#include <stdio.h>

int main(){
	
	int x,y,i;
	scanf("%d %d",&x,&y);
	printf("%d",x);
	printf("\n");
	for(i=x+1;i<=y;i++){
		printf("%d",i);
		printf("\n");
		}
	
	return 0;
}
