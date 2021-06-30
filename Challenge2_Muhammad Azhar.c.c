/*
Program		: Challenge2
Deskripsi	: Menghitung Jumlah Pergerakan
Nama		: Muhammad Azhar Alauddin
Tanggal		: 12 Januari 2020
Compiler	: DevC++
------------------------------------------*/

#include <stdio.h>

int main(){
	int x,y;
	int i,j;
	int n;
	int nGerak=0;
	
	scanf("%d %d",&x, &y);
	scanf("%d %d",&i, &j);
	
	for(n=x;n<i;n++){
		nGerak++;
	}
	
	for(n=y;n<j;n++){
		nGerak++;
	}
	
	printf("%d",nGerak);
	return 0;
}
