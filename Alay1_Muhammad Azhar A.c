/*Program : Kelipatan Tiga dan Empat
* Deskripsi : Menentukan apakah suatu bilangan merupakan kelipatan 3 dan 4 atau tidak.
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Desember 2020
*/

#include <stdio.h>
int main()
{
	int i;
	char kalimat[100];
	gets (kalimat);
	
for (i=0;i<strlen(kalimat);i++) {	
	switch(kalimat[100]){
  		case 'A':
  		case 'a':
    		kalimat[100] = '4';
    	break;
  		case 'I':
  		case 'i':
    		kalimat[100] = '1';
    	break;
		case 'Z':
  		case 'z':
    		kalimat[100] = '2';
    	break;
    	case 'E':
  		case 'e':
    		kalimat[100] = '3';
    	break;
    	case 'G':
  		case 'g':
    		kalimat[100] = '6';
    	break;
    	case 'J':
  		case 'j':
    		kalimat[100] = '7';
    	break;
    	case 'B':
  		case 'b':
    		kalimat[100] = '8';
    	break;
	}
}
	printf("%s",kalimat);
	return 0;
}
