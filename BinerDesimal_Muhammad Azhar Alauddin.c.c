/*Program : BinerDesimal.c
* Deskripsi : Mengonversi Bilangan Biner ke Desimal
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 20 Januari 2020
*/

#include<stdio.h>
#include<math.h>
int main(){
    int i,n,hasil=0,len,temp=0,multiplier=1;
    char angka[255];
    
    scanf("%s",&angka);
    for(len=0;angka[len];len++);
    for(i=len-1;i>=0;i--){
    	if(angka[i]=='1'){
    		n=1;
    		temp=n*multiplier;
    		hasil+=temp;
    		multiplier=multiplier*2;
		}
		else if(angka[i]='0'){
			n=0;
			temp=n*multiplier;
    		hasil+=temp;
    		multiplier=multiplier*2;
		}
	}
    printf("%d",hasil);
    return 0;
}
