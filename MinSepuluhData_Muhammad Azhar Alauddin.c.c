/*Program : MinSepuluhData.c
* Deskripsi : menentukan nilai terkecil dari dua buah array yang masing masing berisi 10 buah bilangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int minValueNumbers(int numbers[255], int N){
	int min = 1000;
	int i;
	
	for(i=0;i<N;i++) {
		if(numbers[i]<min){
			min=numbers[i];
		}
	}
	
	return min;
}

void inputValue(int numbers[255],int N){
	int i;
	
	for(i=0;i<N;i++){
		scanf("%d",&numbers[i]);
	}
	
}

int main(){
	int i,j;
	const int  MAX_DATA=10;
	int numbers1[255],numbers2[255];
	
	inputValue(numbers1,MAX_DATA);
	inputValue(numbers2,MAX_DATA);
	
	printf("%d %d", minValueNumbers(numbers1,MAX_DATA),minValueNumbers(numbers2,MAX_DATA));
	
	return 0;
}
