/*Program : DesimalOctal.c
* Deskripsi : Mengonversi Bilangan Desimal ke Oktal Desimal
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 21 Januari 2020
*/

#include<stdio.h>
#include<math.h>
int main(){
    int i,counter=0,value[255],angka,temp;
    
    scanf("%d",&angka);
	for(i=0;angka>=1;i++){
    	value[i]=angka%8;
    	angka=angka/8;
    	counter++;
	}
	for(i=counter-1;i>=0;i--){
		printf("%d",value[i]);
	}
    return 0;
}
