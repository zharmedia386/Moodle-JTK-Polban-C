/*Program : Huruf Berpasangan.c
* Deskripsi : memeriksa apakah huruf yang berpasangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 14 Januari 2021
*/

#include<stdio.h>
#include<ctype.h>
int main(){
    char kata[255]="JTKPolban";
    char huruf1,huruf2;
    int len,i,n,counter=0;
    
    scanf("%c %c",&huruf1, &huruf2);
    
    //Mencari panjang dari kata
    for(len=0;kata[len];len++);
    
    //Mengecilkan Array kata
    for(i=0;i<len;i++){
    	if((kata[i] >= 0x41) && (kata[i] <= 0x5A)){
    		kata[i] += 0x20;
		}
	}
	
	//Mengecilkan dulu huruf inputnya
	if((huruf1 >= 0x41) && (huruf1 <= 0x5A)){
		huruf1+=0x20;
	}
	else if((huruf2 >= 0x41) && (huruf2 <= 0x5A)){
		huruf2+=0x20;
	}
	
	//Mencari huruf berpasangan setelah charnya dikecilkan semua
	for(i=0;i<len;i++){
		if((huruf1==kata[i+1]) && (huruf2==kata[i])){
				printf("ada");
				counter++;
		}
	}
	if(counter==0){
		printf("tidak ada");
	}
    return 0;
}
