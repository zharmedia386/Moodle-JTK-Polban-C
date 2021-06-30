/*Program : MaxSepuluhData.c
* Deskripsi : menentukan nilai terbesar dari dua buah array yang masing masing berisi 10 buah bilangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int max(int value1, int value2){
	
	if(value1 > value2){
		value2 = value1;
	}

	return value2;
}

int maxValueNumbers(int numbers[], int N){
	int i;
	int maks=0;
	int result;
	
	for(i=0;i<N;i++){
		result = max(numbers[i],maks);
	}
	
	return result;
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
	
	printf("%d %d",maxValueNumbers(numbers1, MAX_DATA),maxValueNumbers(numbers2, MAX_DATA));
	
	return 0;
}
