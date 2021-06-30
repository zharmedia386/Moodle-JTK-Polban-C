/*Program : SelisihMaxMin.c
* Deskripsi : Selisih Nilai Terbesar dan Terkecil
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 12 Januari 2020
*/

#include<stdio.h>

int main(){
    
    int i,angka[255],max=0,min=10000,selisih;
    for(i=0;i<10;i++){
    	scanf("%d",&angka[i]);
    	if(max<angka[i]){
    		max=angka[i]; 
		}
		if(min>angka[i]){
			min=angka[i];
		}
	}
    selisih=max-min;
    printf("%d",selisih);
    return 0;
}
