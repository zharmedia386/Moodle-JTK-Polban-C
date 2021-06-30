/*Program : SangJuara.c
* Deskripsi : Menentukan Siapa yang juara
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 30 Januari 2020
*/

#include<stdio.h>
#include<string.h>

int main(){
	int jumlahJuaraCatur,jumlahJuaraBadminton,i,j,counter=0;
	char juaraCatur[255][255],juaraBadminton[255][255],sangJuara[255][255],temp[255];
	
	scanf("%d\n",&jumlahJuaraCatur);
	for(i=0;i<jumlahJuaraCatur;i++){
		scanf("%[^\n]%*c",juaraCatur[i]);
	}
	
	scanf("%d\n",&jumlahJuaraBadminton);
	for(i=0;i<jumlahJuaraBadminton;i++){
		scanf("%[^\n]%*c",juaraBadminton[i]);
	}
	
	for(i=0;i<jumlahJuaraCatur;i++){
		for(j=0;j<jumlahJuaraBadminton;j++){
			if(strcmp(juaraCatur[i],juaraBadminton[j])==0){
				strcpy(sangJuara[counter],juaraCatur[i]);
				counter++;
			}
		}
	}
	
	for(i=0;i<jumlahJuaraCatur;i++){
		for(j=i+1;j<jumlahJuaraCatur;j++){
			if(strcmp(sangJuara[i],sangJuara[j])>0){
				strcpy(temp,sangJuara[i]);
				strcpy(sangJuara[i],sangJuara[j]);
				strcpy(sangJuara[j],temp);
			}
		}
	}
	
	if(counter==0){
		printf("tidak ada sang juara");
	}
	for(i=j-1;i>=0;i--){
		printf("%s\n",sangJuara[i]);
	}
    return 0;
}
