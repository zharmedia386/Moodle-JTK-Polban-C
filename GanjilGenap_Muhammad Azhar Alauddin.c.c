/*Program : GanjilGenap.c
* Deskripsi : Menentukan apakah suatu bilangan termasuk bilangan ganjil atau genap
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Desember 2020
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    int angka;
    
    
    /* Algoritma */
    scanf("%d", &angka);
    if (angka==0)
    {
    	printf("nol",angka);
	}
    else if(angka %2!=0){
        printf("ganjil");    
    }else 
	{
        printf("genap");
    }
    return 0;
}


