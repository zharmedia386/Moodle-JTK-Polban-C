/*Program : BinarySearch.c
* Deskripsi : menentukan apakah sebuah data terdapat pada sebuah kumpulan data yang tak terurut
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Februari 2021
*/

#include <stdio.h>

void sortNumber(int number[], int nNumber);

int main ()
{
	int N, S;
	int i;
	int result = 0;
	int iteration = 0;
	
	scanf("%d %d", &N, &S);
	
	int low = 0, high = N - 1;
	int number[N];
	
	for(i = 0 ; i < N ; i++){
		scanf("%d", &number[i]);
	}
	
	// Data diurutkan terlebih dahulu
	sortNumber (number, N);
	
	while (low <= high){
		iteration ++;
		int mid = (low + high) / 2;
		
		if(S == number[mid]){
			result = 1;
			break;
		}
		else if(S > number[mid]){
			low = mid + 1;
		}
		else if(S < number[mid]){
			high = mid - 1;
		}
	}
	(result == 0) ? printf("%d\nnot found",iteration) 
				  : printf("%d\nfound",iteration);
	
	return 0;
}

void sortNumber(int number[], int nNumber){
	int i;
	int j;
	int temp;
	
	for(i = 0 ; i < nNumber - 1 ; i++){
		for(j = i + 1 ; j < nNumber ; j++){
			if(number[i] > number[j]){
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}
}
