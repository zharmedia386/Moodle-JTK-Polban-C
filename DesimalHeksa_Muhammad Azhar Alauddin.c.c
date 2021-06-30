/*Program : DesimalHeksa.c
* Deskripsi : Mengonversi Bilangan Desimal ke Heksa Desimal
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 21 Januari 2020
*/

#include<stdio.h>
#include<math.h>
int main(){
    int i,j=0,angka;
    char hexa[255];
    char dataHexa[255]="0123456789ABCDEF";
    
	scanf("%d",&angka);
	while(angka>0){
		hexa[j]=dataHexa[angka%16];
		j++;
		angka=angka/16;
	}
	for(i=1;i<=j;i++){
		printf("%c",hexa[j-i]);
	}
    return 0;
}
