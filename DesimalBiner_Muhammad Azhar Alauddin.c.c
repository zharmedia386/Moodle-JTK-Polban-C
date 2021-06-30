/*Program : DesimalBiner.c
* Deskripsi : Mengonversi Bilangan Desimal ke Biner
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 20 Januari 2020
*/

#include<stdio.h>
#include<math.h>
int main(){
    int i,j,value[255],angka,counter=0;
    
    scanf("%d",&angka);
    for(i=0;angka>=1;i++){
    	value[i]=angka%2;
    	angka=angka/2;
    	counter++;
	}
	for(i=counter-1;i>=0;i--){
		printf("%d",value[i]);
	}
    return 0;
}
