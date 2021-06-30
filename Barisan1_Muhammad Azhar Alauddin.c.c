/*Program : Barisan1.c
* Deskripsi : Membuat suatu barisan bilangan
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

#include <stdio.h>

int main ()
{
	int i,a,n=15,temp;
	
	scanf("%d",&a);
	temp=a;
	
	for(i=0;i<5;i++){
		if(i==0){
			printf("%d ",temp);
			temp+=3;
			printf("%d ",temp);
			temp+=4;
			printf("%d ",temp);
			temp+=5;
			printf("%d ",temp);	
		}
		else if(i==4){
			temp+=3;
			printf("%d ",temp);
			temp+=4;
			printf("%d",temp);
		}
		else if(i!=4){
			temp+=3;
			printf("%d ",temp);
			temp+=4;
			printf("%d ",temp);
			temp+=5;
			printf("%d ",temp);		
		}
	}
	return 0;
}
