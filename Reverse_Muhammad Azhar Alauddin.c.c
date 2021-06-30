/*Program : Reverse.c
* Deskripsi : membalik array karakter yang dimasukkan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 14 Januari 2021
*/

#include<stdio.h>

int main(){
    char kata[255],hasil[255];
    int i,n,len,jumlah_string;
    
	scanf("%[^\n]s",&kata);
    	
    //Mencari panjang kata
    for(len=0;kata[len];len++);
    
    jumlah_string=len-1;
    
    //Menukar antar array character, karena kalau hanya satu array
    //Tidak bisa. Harus ada 1 Array yang input (n (dari depan)) dan 
	//1 Array yang output(jumlah_string (dari belakang))
    for(n=0;n<len;n++){
	    hasil[n]=kata[jumlah_string];
	    jumlah_string-=1;
	    printf("%c",hasil[n]);
	}
    return 0;
}
