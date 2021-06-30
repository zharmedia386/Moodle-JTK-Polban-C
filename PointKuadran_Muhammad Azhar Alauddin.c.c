/*Program : PointKuadran.c
* Deskripsi : menghitung jumlah kemunculan titik yang berada di kuadran N dari M buah titik yang dimasukkan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 15 Januari 2021
*/

#include<stdio.h>
	typedef struct{
    		int x;
    		int y;
		}Point;
int main(){  
	int i,jumlah_titik,kuadran,counter=0;
	
	scanf("%d\n",&jumlah_titik);
	Point A[jumlah_titik];
	
	for(i=0;i<jumlah_titik;i++){
		scanf("%d %d",&A[i].x,&A[i].y);
	}
	scanf("%d",&kuadran);
	
	switch (kuadran){
		case (1):
			for(i=0;i<jumlah_titik;i++){
				if((A[i].x>0) && (A[i].y>0)){
					counter++;
				}
			}
			break;
		case (2):
			for(i=0;i<jumlah_titik;i++){
				if((A[i].x<0) && (A[i].y>0)){
					counter++;
				}
			}
			break;
		case (3):
			for(i=0;i<jumlah_titik;i++){
				if((A[i].x<0) && (A[i].y<0)){
					counter++;
				}
			}
			break;
		case (4):
			for(i=0;i<jumlah_titik;i++){
				if((A[i].x>0) && (A[i].y<0)){
					counter++;
				}
			}
			break;
	}
	printf("%d",counter);
    return 0;
}
