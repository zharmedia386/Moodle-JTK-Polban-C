/*Program : MaxSepuluhData.c
* Deskripsi : menentukan nilai terbesar dari dua buah array yang masing masing berisi 10 buah bilangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int maxValueNumbers(int numbers[], int N){
	int i;
	int maks=-100;
	int result;
	
	for(i=0;i<N;i++){
		if(numbers[i]>maks){
			maks=numbers[i];
		}
	}
	
	return maks;
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
