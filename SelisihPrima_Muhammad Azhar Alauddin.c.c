/*Program : Selisih Prima.c
* Deskripsi : Menentukan selisih Prima
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 10 Januari 2020
*/

#include<stdio.h>

int main(){
    int x,y,count,countPrime = 0, min, max;
    int i,j;
    scanf("%d %d", &x, &y);

    min = y;
    max = x;

    for(i = x; i <= y; i++){
        count = 0;
        for(j=1; j<=i; j++){
            if(i % j == 0) {
                count++;
                if(count > 2)
                    break;
            }
        }
        if(count == 2) {
            countPrime++;
            if(min > i){
                min = i;
            }
            else {
                if(max < i){
                    max = i;
                }
            }
        }
    }

    if(countPrime > 1){
        printf("%d", max-min);
    }
    return 0;
}
