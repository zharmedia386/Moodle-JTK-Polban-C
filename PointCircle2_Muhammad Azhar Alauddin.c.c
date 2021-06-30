/*Program : PointCircle.c
* Deskripsi : memeriksa posisi suatu titik terhadap lingkaran
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 15 Januari 2021
*/

#include<stdio.h>
int main(){
	int r;
	typedef struct {
        int x;
        int y;
	} Point;
	Point pos;
	Point cek;
	scanf("%d %d\n", &pos.x, &pos.y);
	scanf("%d\n", &r);
	scanf("%d %d", &cek.x, &cek.y);
	if(pos.x==cek.x && pos.y==cek.y){
		printf("tepat pada titik pusat\n");
		}else if(((pos.x-cek.x)*(pos.x-cek.x)+(pos.y-cek.y)*(pos.y-cek.y))>r*r){
			printf("di luar lingkaran\n");
			}else if(((pos.x-cek.x)*(pos.x-cek.x)+(pos.y-cek.y)*(pos.y-cek.y))<r*r){
				printf("di dalam lingkaran\n");
				}else{printf("tepat pada lingkaran\n");
				}
	return 0;
} 
