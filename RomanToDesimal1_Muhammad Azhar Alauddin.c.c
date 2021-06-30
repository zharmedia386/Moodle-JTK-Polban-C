/*Program : No4.c
* Deskripsi : Romawi ke Desimal
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 24 Januari 2020
*/

#include<stdio.h>
int Konversi(char);

int main(){
	int i,next,now,len,hasil=0;
	char romawi[255];
	
	scanf("%s",romawi);
	for(len=0;romawi[len];len++);
	for(i=0;romawi[i];i++){
		now=Konversi(romawi[i]);
		if(romawi[i+1]){
			next=Konversi(romawi[i+1]);
			if(next>now){
				now=next-now;
				i++;
			}
		}
		hasil+=now;
	}
	printf("%d",hasil);
	return 0;
}

int Konversi(char var){
	int temp=0;
	if(var=='I')
	temp=1;
	if(var=='V')
	temp=5;
	if(var=='X')
	temp=10;
	if(var=='L')
	temp=50;
	if(var=='C')
	temp=100;
	if(var=='D')
	temp=500;
	if(var=='M')
	temp=1000;
	return temp;
}
