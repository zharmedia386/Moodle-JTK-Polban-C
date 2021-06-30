/*Program : PointCircle.c
* Deskripsi : memeriksa posisi suatu titik terhadap lingkaran (Di dalam, Di luar, tepat di titik pusat, dan tepat pada lingkaran)
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 15 Januari 2021
*/

//Rumus Matematika untuk memeriksa posisi suatu titik terhadap lingkaran :
//	===> (x-a)^2+(x-b)^2=r^2
	
#include<stdio.h>
#include<math.h>
	typedef struct{
		int x;
		int y;
	}Point;
	int main(){
		int i,n,jari_jari;
		Point pusat; // nama ke-1 variabel dari tipe data poin
		Point uji; // nama ke-2 variabel dari tipe data poin
		
		scanf("%d %d",&pusat.x,&pusat.y);
		scanf("%d",&jari_jari);
		scanf("%d %d",&uji.x,&uji.y);
		
		if((pusat.x==0) && (pusat.y==0)){
			if(uji.x*uji.x + uji.y*uji.y < jari_jari*jari_jari){
				printf("di dalam lingkaran");
			}
			else if(uji.x*uji.x + uji.y*uji.y > jari_jari*jari_jari){
				printf("di luar lingkaran");
			}
			else if(uji.x*uji.x + uji.y*uji.y == jari_jari*jari_jari){
				printf("tepat pada lingkaran");
			}
			else if((uji.x==pusat.x) && (uji.y==pusat.y)){
				printf("tepat pada titik pusat");
			}
		}
		else if((pusat.x!=0) && (pusat.y!=0)){
			if(pow(uji.x-pusat.x,2) + pow(uji.y-pusat.y,2) < jari_jari*jari_jari){
				printf("di dalam lingkaran");
			}
			else if(pow(uji.x-pusat.x,2) + pow(uji.y-pusat.y,2) > jari_jari*jari_jari){
				printf("di luar lingkaran");
			}
			else if(pow(uji.x-pusat.x,2) + pow(uji.y-pusat.y,2) == jari_jari*jari_jari){
				printf("tepat pada lingkaran");
			}
			else if((uji.x==pusat.x) && (uji.y==pusat.y)){
				printf("tepat pada titik pusat");
			}
		}
    return 0;
}
