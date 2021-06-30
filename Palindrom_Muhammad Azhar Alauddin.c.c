/*Program : Palindrom.c
* Deskripsi : menentukan kata-kata mana saja pada kalimat tersebut yang merupakan palindrom.
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
	int wordcount = 0;
	
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
		if (checkPalindrom(word) == 1) {
			if (wordcount != 0)
				printf (" "); // syarat dibuatnya spasi antar kata yang akan di print
			printf ("%s", word);
			wordcount = 1;  // penanda bukan kata pertama
		}
		i++;
	}

	return 0;
}

int checkPalindrom (char array[]){
	int check=0;
	int i,j;
	int arraySize;
	char temp[255] = {};
	
	arraySize = strlen (array);
	
	for (i=arraySize-1,j=0; i>=0; i--, j++)
		temp[j] = array[i];
	
	check = (strcmp(array,temp) == 0) ? check + 1 : check;
	
	return check;
}
