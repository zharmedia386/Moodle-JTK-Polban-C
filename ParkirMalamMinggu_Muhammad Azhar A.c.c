/*Program : ParkirMalamMinggu
* Deskripsi : Menentukan biaya parkir malam minggu
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Desember 2020
*/

#include<stdio.h>
int main(){
	int JenisKendaraan;
	int waktu;
	int TotalBiaya;
	
	scanf("%d %d", &JenisKendaraan, &waktu);
	if(waktu>0 && waktu<=24){
		switch(JenisKendaraan){
			case 1: 
				if(waktu<=5){
				TotalBiaya=1500*waktu;
				printf("%d\n", TotalBiaya);
				}else if(waktu<=8){
					TotalBiaya=1500*waktu + (waktu-5)*500;
					printf("%d\n", TotalBiaya);}
					else{printf("disegel");
					}
				break;
			case 2:
				if(waktu<=5){
				TotalBiaya=1000*waktu;
				printf("%d\n", TotalBiaya);
				}else if(waktu<=8){
					TotalBiaya=1000*waktu + (waktu-5)*500;
					printf("%d\n", TotalBiaya);}
					else{printf("disegel");
					}
				break;
		}
	}
	return 0;
} 
