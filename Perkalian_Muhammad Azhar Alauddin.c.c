/*Program : Perkalian.c
* Deskripsi : menentukan jumlah perkalian dua angka
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 31 Januari 2020
*/

int hitungPerkalian(int value1, int value2){
	int temp;
	
	temp=value1*value2;
	return temp;
}

int main ()
{
	int number1,number2;
	int jumlah;
	
	scanf("%d %d",&number1, &number2);
	
	jumlah=hitungPerkalian(number1,number2);
	printf("%d",jumlah);
	
	return 0;
}
