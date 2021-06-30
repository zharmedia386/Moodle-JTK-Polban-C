/*Program : JumlahPecahan.c
* Deskripsi : menghitung penjumlahan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int a,b,c,d,i,x,y,temp;
	int penyebut=1,pembilang;
	
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	
	x = b;
    y = d;
    
	//Menentukan Penyebut
	for(i = 2; i <= x || i <= y; i++){
    	if(x % i == 0 || y % i == 0){
            if(x % i == 0){
                x/=i;
            }
            if(y % i == 0){
                y/=i;
            }
            penyebut*=i;
            i--;
        }
    }
		
	//Menentukan Pembilang
	pembilang = ((penyebut/b)*a) + ((penyebut/d)*c);
		
	for(i =  1; i <= penyebut && i <= pembilang; i++){
	    if(penyebut % i == 0 && pembilang % i == 0){
	        temp = i;
	    }
	}
		    
	//Hasil penjumlahan pecahan
	printf("%d %d",pembilang/temp,penyebut/temp);
	
	return 0;
}
