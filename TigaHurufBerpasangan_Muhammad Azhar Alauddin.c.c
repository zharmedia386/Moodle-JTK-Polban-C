/*Program : Tiga Huruf Berpasangan.c
* Deskripsi : menghitung jumlah kemunculan tiga buah huruf berpasangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 14 Januari 2021
*/

#include<stdio.h>
int main(){
    char kalimat[255];
    char huruf1,huruf2,huruf3;
    int i,counter=0,jumlah_3couples=0,len;
    
    scanf("%[^\n]\n",kalimat);
    scanf("%c %c %c",&huruf1,&huruf2,&huruf3);
    
    //Mencari panjang Array kalimat[255]
    for(len=0;kalimat[len];len++);
    
    //Mengecilkan input kalimat
    for(i=0;i<len;i++){
    	if((kalimat[i]>=0x41) && (kalimat[i]<=0x5A)){
    		kalimat[i]+=0x20;
		}
	}
	
    //Mengecilkan input huruf1,huruf2,huruf3
    if((huruf1>=0x41) && (huruf1<=0x5A)){
    	huruf1+=0x20;
	}
    if((huruf2>=0x41) && (huruf2<=0x5A)){
    	huruf2+=0x20;
	}
	if((huruf3>=0x41) && (huruf3<=0x5A)){
    	huruf3+=0x20;
	}

    //Mengecek 3Couples
    for(i=0;i<len;i++){
    	if((kalimat[i]==huruf1) && (kalimat[i+1]==huruf2) && (kalimat[i+2]==huruf3)){
    		counter++;
		}
	}
	
	//Menampilkan jumlah 3couples
	jumlah_3couples=counter;
	printf("%d",jumlah_3couples);
    return 0;
}

// Catatan :
// Jangan lupa menginisialisasi counternya
