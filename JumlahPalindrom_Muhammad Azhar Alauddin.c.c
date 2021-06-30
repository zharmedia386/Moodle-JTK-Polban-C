/*Program : JumlahPalindrom.c
* Deskripsi : menyatakan jumlah kata yang merupakan palindrom pada kalimat
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Februari 2021
*/

#include <stdio.h>
#include <string.h>

int checkPalindrom(char array[]);

int main(){
	char kalimat[10000] ={};
	int i,j;
	int arraySize;
	int counter = 0;
	
	gets(kalimat);
	arraySize = strlen(kalimat);
	
	i = 0;
	while (i<arraySize) {
		j = 0;
		char word[255] = {};
		while (kalimat[i] != ' ') {
			word[j] = kalimat [i];
			j++; i++;
			}
			counter = counter + checkPalindrom(word);
		
		i++;
	}
	
	printf("%d",counter);
	return 0;
}

int checkPalindrom (char array[]){
	int check=0;
	char temp[255] = {};
	
	strcpy(temp,array);
	strrev(temp);
	
	check = (strcmp(array,temp) == 0) ? check + 1 : check;
	
	return check;
}
