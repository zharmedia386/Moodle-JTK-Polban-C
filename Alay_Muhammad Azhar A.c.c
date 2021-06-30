/*Program : Kelipatan Tiga dan Empat
* Deskripsi : Menentukan apakah suatu bilangan merupakan kelipatan 3 dan 4 atau tidak.
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 6 Desember 2020
*/

#include <stdio.h>
#include <string.h>
int main()
{
	char kalimat[100];
	int i;
	gets (kalimat);
	
	if ((strlen(kalimat) <=51) && (strlen(kalimat) > 0)){
		for (i=0;i<strlen(kalimat);i++) {
			if ((kalimat [i] == 'A') || (kalimat [i] =='a')) {
				kalimat [i] = '4';
			} else if ((kalimat [i] == 'I') || (kalimat [i] =='i')) {
				kalimat [i] = '1';
			} else if ((kalimat [i] == 'Z') || (kalimat [i] =='z')) {
				kalimat [i] = '2';
			} else if ((kalimat [i] == 'E') || (kalimat [i] =='e')) {
				kalimat [i] = '3';
			} else if ((kalimat [i] == 'G') || (kalimat [i] =='g')) {
				kalimat [i] = '6';
			} else if ((kalimat [i] == 'J') || (kalimat [i] =='j')) {
				kalimat [i] = '7';
			} else if ((kalimat [i] == 'B') || (kalimat [i] =='b')) {
				kalimat [i] = '8';
			}
			printf("%c", kalimat[i]);
		}
	}
	printf("\n");
	return 0;
}
