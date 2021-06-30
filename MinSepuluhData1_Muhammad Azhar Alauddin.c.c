/*Program : MinSepuluhData.c
* Deskripsi : menentukan nilai terkecil dari dua buah array yang masing masing berisi 10 buah bilangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int minValueNumbers(int numbers[], int N){
	int i;
	int min=1000;
	int result;
	
	for(i=0;i<N;i++){
		if(numbers[i]<min){
			min=numbers[i];
		}
	}
	
	return min;
}

void inputValue (int numbers[], int N){
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&numbers[i]);
	}
}

int main ()
{
	const int MAX_DATA = 10;
	int numbers1[MAX_DATA], numbers2[MAX_DATA];
	
	inputValue(numbers1, MAX_DATA);
	inputValue(numbers2, MAX_DATA);
	
	printf("%d %d",minValueNumbers(numbers1, MAX_DATA),minValueNumbers(numbers2, MAX_DATA));
	
	return 0;
}
