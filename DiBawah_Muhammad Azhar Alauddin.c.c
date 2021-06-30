/*Program : DiBawah.c
* Deskripsi : Menentukan jumlah siswa yang nilainya berada di bawah rata-rata kelas.
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 30 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int n,nilaiSiswa[11000];
	int i,temp=0;
	float average=0;
	int counter=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&nilaiSiswa[i]);
		temp+=nilaiSiswa[i];
	}
	
	average=(float)temp/n;
	
	for(i=0;i<n;i++){
		if(nilaiSiswa[i]<average){
			counter++;
		}
	}
	
	printf("%d",counter);
	return 0;
}
