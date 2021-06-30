/*Program : PointCircle.c
* Deskripsi : memeriksa posisi suatu titik terhadap lingkaran
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 15 Januari 2021
*/

#include<stdio.h>
	int main(){
		int jari_jari;
		typedef struct{
		int x;
		int y;
	}Point;
		Point pusat;
		Point uji;
		
		scanf("%d %d",&pusat.x,&pusat.y);
		scanf("%d",&jari_jari);
		scanf("%d %d",&uji.x,&uji.y);
		
		if(((uji.x-pusat.x)*(uji.x-pusat.x) + (uji.y-pusat.y)*(uji.y-pusat.y)) < jari_jari*jari_jari){
			printf("di dalam lingkaran");
			return 0;
		}
		else if(((uji.x-pusat.x)*(uji.x-pusat.x) + (uji.y-pusat.y)*(uji.y-pusat.y)) > jari_jari*jari_jari){
			printf("di luar lingkaran");
			return 0;
		}
		else if(((uji.x-pusat.x)*(uji.x-pusat.x) + (uji.y-pusat.y)*(uji.y-pusat.y))== jari_jari*jari_jari){
			printf("tepat pada lingkaran");
			return 0;
		}
		else if((uji.x==pusat.x) && (uji.y==pusat.y)){
			printf("tepat pada titik pusat");
			return 0;
		}
    return 0;
}
