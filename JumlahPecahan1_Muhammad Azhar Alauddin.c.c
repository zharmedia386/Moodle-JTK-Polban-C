/*Program : JumlahPecahan.c
* Deskripsi : menghitung penjumlahan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int a,b,c,d,i,temp;
	int penyebut,pembilang;
	
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	
	if((b==1) && (d==1)){
		printf("%d 1",a+c);
	}
	else{
		//Mencari KPK dari penyebut
		if(b>d){
			for(i=b ; i%d!=0 || i%b!=0 ; i++);
			penyebut=i;
		}
		else if(d>b){			
			for(i=d ; i%d!=0 || i%b!=0 ; i++);
			penyebut=i;
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
	}
	
	return 0;
}
