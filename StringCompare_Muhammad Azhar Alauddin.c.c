/*Program : String Compare.c
* Deskripsi : membandingkan dua buah kata pada array karakter dengan maksimal
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 14 Januari 2021
*/

// Input : 2 buah array yang akan dibandingkan
// Output pertama : selisih kode ASCII dari karakter pertama yang berbeda
// 0 jika K1 = K2
//-N jika K1 < K2
//+N jika K1 > K2
// Output kedua	 : posisi dari karakter pertama yang berbeda

#include<stdio.h>

int main(){
    char kata1[255],kata2[255];
    int len1,len2,i,selisih=0,counter=0;
    
    // menginput array1 dan array2 berupa kata atau kalimat
    scanf("%[^\n]\n",kata1);
    scanf("%[^\n]",kata2);
    
    // menghitung jumlah huruf yang ada pada masing2 array
    for(len1=0;kata1[len1];len1++);
    for(len2=0;kata2[len2];len2++);
    
    // menghitung jumlah counter sebagai penghitung posisi dari karakter pertama yang berbeda
    // menghitung jumlah selisih sebagai selisih kode ASCII dari karakter pertama yang berbeda
    for(i=0;i<len1 || i<len2 ;i++){
    	counter++;
    	if(kata1[i]!=kata2[i]){
    		selisih=(int)kata1[i]-(int)kata2[i];  
    		break; 
			// berhenti karena diambil dari karakter pertama yang berbeda
		}
		else if(kata1[i] == kata2[i]){
			selisih=0;
		}
	}
	if(selisih==0){
		counter=0;
	}
    if(selisih>0){
    	printf("+%d\n",selisih);
	}
	else{
		printf("%d\n",selisih);
	}
    printf("%d",counter);
    return 0;
}

// Catatan :
// tipe data karakter yang diberikan operasi matematika, maka akan menggunakan kode ASCII dari karakter tsb
