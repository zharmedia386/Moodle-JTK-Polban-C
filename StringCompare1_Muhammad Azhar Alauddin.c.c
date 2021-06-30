/*Program : String Compare.c
* Deskripsi : membandingkan dua buah kata pada array karakter dengan maksimal
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 14 Januari 2021
*/

#include<stdio.h>

int main(){
    char kata1[255],kata2[255];
    int len1,len2,i,selisih,counter=0;
    
    scanf("%[^\n]\n",kata1);
    scanf("%[^\n]",kata2);
    
    for(len1=0;kata1[len1];len1++);
    for(len2=0;kata2[len2];len2++);
    
    for(i=0;i<len1 || i<len2 ;i++){
    	if(kata1[i]!=kata2[i]){
    		selisih=(int)kata1[i]-(int)kata2[i];
    		break;
		}
	}
    if(selisih>0){
    	printf("+%d\n",selisih);
	}
	else{
		printf("%d\n",selisih);
	}
    
    for(i=0;i<len1 || i<len2;i++){
    	if(kata1[i]!=kata2[i]){
    		printf("%d",i+1);
    		break;
		}
		else if(kata1[i]==kata2[i]){
			counter+=1;
		}
	}
	if((counter==len1) && (counter==len2)){
		printf("0");
	}
    return 0;
}
