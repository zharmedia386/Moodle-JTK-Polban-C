/*Program : WujudBenda.c
* Deskripsi : Menentukan wujud suatu benda
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Desember 2020
*/

#include<stdio.h>

int main(){
    /* Kamus Data */
    float suhu;
    
    /* Algoritma */
    scanf("%f", &suhu);
    
    if((suhu>=0) && (suhu<=100)){
        printf("berwujud cair");
    }else{
        printf("berwujud non cair");
    }
    
    return 0;
}
