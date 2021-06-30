/*Program : Reverse.c
* Deskripsi : membalik array karakter yang dimasukkan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 12 Januari 2021
*/

#include<stdio.h>
#include<string.h>
int main(){
  char huruf[1000], hasil[1000];
  int i, jumlahstring, jumlah = 0;
  printf("Masukkan sebuah string: ");
  fgets(huruf, sizeof(huruf), stdin);
  while (huruf[jumlah] != '\0'){
    jumlah++;
  }
  jumlahstring = jumlah - 1;
  for (i = 0; i < jumlah; i++){
    hasil[i] = huruf[jumlahstring];
    jumlahstring--;
  }
  hasil[i] = '\0';
  printf("Hasil reverse string: %s \n", hasil);
  return 0;
}
