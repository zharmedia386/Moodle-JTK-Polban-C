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
  scanf("%[^\n]s",huruf);
  for(jumlah=0;huruf[jumlah];jumlah++);
  
  jumlahstring = jumlah - 1;
  for (i = 0; i < jumlah; i++){
    hasil[i] = huruf[jumlahstring];
    jumlahstring--;
  }
  printf("%s", hasil);
  return 0;
}
