/*Program : No4.c
* Deskripsi : Romawi ke Desimal
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 24 Januari 2020
*/

#include<stdio.h>
int romawi(char var){
	int temp=0;
	if(var=='I'){
		temp=1;
	}
	if(var=='V'){
		temp=5;
	}
	if(var=='X'){
		temp=10;
	}
	if(var=='L'){
		temp=50;
	}
	if(var=='C'){
		temp=100;
	}
	if(var=='D'){
		temp=500;
	}
	if(var=='M'){
		temp=1000;
	}
	return temp;
}

int main(){
    int len,i,hasil=0,now,next;
    char array[255];
    
    scanf("%s",array);
    for(len=0;array[len];len++);
    for(i=0;i<len;i++){
    	now=romawi(array[i]);
    	if(array[i+1]){
    		next=romawi(array[i+1]);
    		if(now<next){
    			now=next-now;
    			i++;
			}
		}
		hasil += now;
	}
	printf("%d",hasil);
    return 0;
}
