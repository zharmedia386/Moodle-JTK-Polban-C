/*Program : Terbilang.c
* Deskripsi : mengeja angka dalam bentuk terbilangnya
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Februari 2021
*/

#include <stdio.h>
#include <string.h>

void ratusan(char arr[],int N){
	if (N/100!=0){
		if(N/100==1){
			strcat(arr,"se");
		}
		else {
			satuan(arr,N/100);
		}
		strcat(arr,"ratus ");
	}
}

void puluhan(char arr[],int O){
	if (O/10!=0){
		if (O/10==1){
			strcat(arr,"se");
		}
		else {
			satuan(arr,O/10);
		}
		strcat(arr,"puluh ");
	}
}

void satuan(char arr[],int P){
	switch(P){
		case 1:
			strcat(arr,"satu ");
			break;
		case 2:
			strcat(arr,"dua ");
			break;
		case 3:
			strcat(arr,"tiga ");
			break;
		case 4:
			strcat(arr,"empat ");
			break;
		case 5:
			strcat(arr,"lima ");
			break;
		case 6:
			strcat(arr,"enam ");
			break;
		case 7:
			strcat(arr,"tujuh ");
			break;
		case 8:
			strcat(arr,"delapan ");
			break;
		case 9:
			strcat(arr,"sembilan ");
			break;
	}
}

void belasan(char arr[],int Q){
	switch(Q){
		case 10:
			strcat(arr,"sepuluh ");
			break;
		case 11:
			strcat(arr,"sebelas ");
			break;
		case 12:
			strcat(arr,"dua belas ");
			break;
		case 13:
			strcat(arr,"tiga belas ");
			break;
		case 14:
			strcat(arr,"empat belas ");
			break;
		case 15:
			strcat(arr,"lima belas ");
			break;
		case 16:
			strcat(arr,"enam belas ");
			break;
		case 17:
			strcat(arr,"tujuh belas ");
			break;
		case 18:
			strcat(arr,"delapan belas ");
			break;
		case 19:
			strcat(arr,"sembilan belas ");
			break;
	}
}

int main(){
	int i;
	int number;
	int jutaan;
	int ribuan;
	int last3digits;
	char hasil[1000]={};
	scanf ("%d",&number);
	if (number/1000000!=0){
		jutaan=number/1000000;
		ratusan(hasil,jutaan);
		jutaan%=100;
		if(jutaan/10==1){
			belasan(hasil,jutaan);
		}
		else{
			puluhan(hasil,jutaan);
			jutaan%=10;
			satuan(hasil,jutaan);
		}
		strcat(hasil,"juta ");
	}
	if (number/1000!=0){
		ribuan=(number/1000)%1000;
		ratusan(hasil,ribuan);
		ribuan%=100;
		if(ribuan/10==1){
			belasan(hasil,ribuan);
		}
		else{
			puluhan(hasil,ribuan);
			ribuan%=10;
			satuan(hasil,ribuan);
		}
		strcat(hasil,"ribu ");
	}
	if (number/1!=0){
		last3digits=number%1000;
		ratusan(hasil,last3digits);
		last3digits%=100;
		if(last3digits/10==1){
			belasan(hasil,last3digits);
		}
		else {
			puluhan(hasil,last3digits);
			last3digits%=10;
			satuan(hasil,last3digits);
		}
	}
	for (i=0;i<strlen(hasil)-1;i++){
		printf("%c",hasil[i]);
	}
	return 0;
}
