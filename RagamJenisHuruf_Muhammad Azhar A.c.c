/*Program : Ragam Jenis Huruf
* Deskripsi : Ragam Jenis Huruf
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 10 Januari 2020
*/

#include <stdio.h>

int main(){
	//kamus data
	char kalimat[255];
	int i,j,count=0,len;
	
	//algoritma
	scanf("%s",kalimat);
	
	for(i=0;kalimat[i];i++){
		//Dikecilkan terlebih dahulu kalimat yang diinputkan
		if(kalimat[i] >= 0x41 && kalimat[i] <= 0x5A) // 0x41 = 'A', 0x5A = 'Z'
			kalimat[i] += 0x20; // +32 atau 0x20 agar huruf pada array menjadi kecil. Contoh A menjadi a
		//Mengecek apakah ada jenis yang sama?	
		for(j=0;kalimat[j];j++){
			if(kalimat[i]==kalimat[j]){
				if (j<i)
					break;
				else if(j>i)
					count++;
			}
		}
	}
	//Mencari panjang Array kalimat
	for(len=0;kalimat[len];len++); 
	//Banyaknya jenis huruf dengan mengurangkan 
	//Panjang Array input dan bnyknya huruf yg sama
	printf("%d\n",len-count);
	return 0;
}
