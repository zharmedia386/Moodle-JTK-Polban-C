/*Program : BiayaParkir.c
* Deskripsi : Menghitung total biaya parkir motor atau mobil
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Desember 2020
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    int jenisKendaraan;
    int waktu;
    int totalBiaya;
    
    /* Algoritma */
    scanf ("%d",&jenisKendaraan);// input jenis kendaraan
    scanf ("%d",&waktu);// input lama parkir (dalam jam)
    
    
    switch(jenisKendaraan){
        case 1 : 
          totalBiaya= 1000*waktu +1000;
          printf("%d\n",totalBiaya);
          break;
        case 2 : 
          totalBiaya= 500*waktu +500;
          printf("%d\n",totalBiaya);
          break;
    }
    
    return 0;
}
