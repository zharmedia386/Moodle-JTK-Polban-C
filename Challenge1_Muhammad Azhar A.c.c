/*Program : Challenge1
* Deskripsi : Challenge1
* Nama : Muhammad Azhar Alauddin
* tanggal/ versi : 12 Januari 2020
*/

#include <stdio.h>

int main(){
	//kamus data
	char sandi[255];
	int i,batas;

	//algoritma
	scanf("%[^\n]s",sandi);
	for(batas=0;sandi[batas];batas++);
	for(i=0;i<batas;i++){
		if(sandi[i] == 'a' || sandi[i] == 'A'){
			if(sandi[i-1] == 'b' || sandi[i-1] == 'B' || sandi[i-1] == 'c' || sandi[i-1] == 'C'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("1");
			}
			else {
			printf("1 ");
			}
		}
		else if(sandi[i] == 'b' || sandi[i] == 'B'){
			if(sandi[i-1] == 'a' || sandi[i-1] == 'A' || sandi[i-1] == 'c' || sandi[i-1] == 'C'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("1 1");
			}
			else {
			printf("1 1 ");
			}
		}
		else if(sandi[i] == 'c' || sandi[i] == 'C'){
			if(sandi[i-1] == 'b' || sandi[i-1] == 'B' || sandi[i-1] == 'a' || sandi[i-1] == 'A'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("1 1 1");
			}
			else {
			printf("1 1 1 ");
			}
		}
		else if(sandi[i] == 'd' || sandi[i] == 'D'){
			if(sandi[i-1] == 'e' || sandi[i-1] == 'E' || sandi[i-1] == 'f' || sandi[i-1] == 'F'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("2");
			}
			else {
			printf("2 ");
			}
		}
		else if(sandi[i] == 'e' || sandi[i] == 'E'){
			if(sandi[i-1] == 'd' || sandi[i-1] == 'D' || sandi[i-1] == 'f' || sandi[i-1] == 'F'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("2 2");
			}
			else {
			printf("2 2 ");
			}
		}
		else if(sandi[i] == 'f' || sandi[i] == 'F'){
			if(sandi[i-1] == 'e' || sandi[i-1] == 'F' || sandi[i-1] == 'd' || sandi[i-1] == 'D'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("2 2 2");
			}
			else {
			printf("2 2 2 ");
			}
		}
		else if(sandi[i] == 'g' || sandi[i] == 'G'){
			if(sandi[i-1] == 'h' || sandi[i-1] == 'H' || sandi[i-1] == 'i' || sandi[i-1] == 'I'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("3");
			}
			else {
			printf("3 ");
			}
		}
		else if(sandi[i] == 'h' || sandi[i] == 'H'){
			if(sandi[i-1] == 'g' || sandi[i-1] == 'G' || sandi[i-1] == 'i' || sandi[i-1] == 'I'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("3 3");
			}
			else {
			printf("3 3 ");
			}
		}
		else if(sandi[i] == 'i' || sandi[i] == 'I'){
			if(sandi[i-1] == 'g' || sandi[i-1] == 'G' || sandi[i-1] == 'h' || sandi[i-1] == 'H'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("3 3 3");
			}
			else {
			printf("3 3 3 ");
			}
		}
		else if(sandi[i] == 'j' || sandi[i] == 'J'){
			if(sandi[i-1] == 'k' || sandi[i-1] == 'K' || sandi[i-1] == 'l' || sandi[i-1] == 'L'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("4");
			}
			else {
			printf("4 ");
			}
		}
		else if(sandi[i] == 'k' || sandi[i] == 'K'){
			if(sandi[i-1] == 'j' || sandi[i-1] == 'J' || sandi[i-1] == 'l' || sandi[i-1] == 'L'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("4 4");
			}
			else {
			printf("4 4 ");
			}
		}
		else if(sandi[i] == 'l' || sandi[i] == 'L'){
			if(sandi[i-1] == 'j' || sandi[i-1] == 'J' || sandi[i-1] == 'k' || sandi[i-1] == 'K'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("4 4 4");
			}
			else {
			printf("4 4 4 ");
			}
		}
		else if(sandi[i] == 'm' || sandi[i] == 'M'){
			if(sandi[i-1] == 'n' || sandi[i-1] == 'N' || sandi[i-1] == 'o' || sandi[i-1] == 'O'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("5");
			}
			else {
			printf("5 ");
			}
		}
		else if(sandi[i] == 'n' || sandi[i] == 'N'){
			if(sandi[i-1] == 'm' || sandi[i-1] == 'M' || sandi[i-1] == 'o' || sandi[i-1] == 'O'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("5 5");
			}
			else {
			printf("5 5 ");
			}
		}
		else if(sandi[i] == 'o' || sandi[i] == 'O'){
			if(sandi[i-1] == 'm' || sandi[i-1] == 'M' || sandi[i-1] == 'n' || sandi[i-1] == 'N'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("5 5 5");
			}
			else {
			printf("5 5 5 ");
			}
		}
		else if(sandi[i] == 'p' || sandi[i] == 'P'){
			if(sandi[i-1] == 'q' || sandi[i-1] == 'Q' || sandi[i-1] == 'r' || sandi[i-1] == 'R'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("6");
			}
			else {
			printf("6 ");
			}
		}
		else if(sandi[i] == 'q' || sandi[i] == 'Q'){
			if(sandi[i-1] == 'p' || sandi[i-1] == 'P' || sandi[i-1] == 'r' || sandi[i-1] == 'R'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("6 6");
			}
			else {
			printf("6 6 ");
			}
		}
		else if(sandi[i] == 'r' || sandi[i] == 'R'){
			if(sandi[i-1] == 'p' || sandi[i-1] == 'P' || sandi[i-1] == 'q' || sandi[i-1] == 'Q'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("6 6 6");
			}
			else {
			printf("6 6 6 ");
			}
		}
		else if(sandi[i] == 's' || sandi[i] == 'S'){
			if(sandi[i-1] == 't' || sandi[i-1] == 'T' || sandi[i-1] == 'u' || sandi[i-1] == 'U'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("7");
			}
			else {
			printf("7 ");
			}
		}
		else if(sandi[i] == 't' || sandi[i] == 'T'){
			if(sandi[i-1] == 's' || sandi[i-1] == 'S' || sandi[i-1] == 'u' || sandi[i-1] == 'U'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("7 7");
			}
			else {
			printf("7 7 ");
			}
		}
		else if(sandi[i] == 'u' || sandi[i] == 'U'){
			if(sandi[i-1] == 's' || sandi[i-1] == 'S' || sandi[i-1] == 't' || sandi[i-1] == 'T'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("7 7 7");
			}
			else {
			printf("7 7 7 ");
			}
		}
		else if(sandi[i] == 'v' || sandi[i] == 'V'){
			if(sandi[i-1] == 'w' || sandi[i-1] == 'W' || sandi[i-1] == 'x' || sandi[i-1] == 'X'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("8");
			}
			else {
			printf("8 ");
			}
		}
		else if(sandi[i] == 'w' || sandi[i] == 'W'){
			if(sandi[i-1] == 'x' || sandi[i-1] == 'X' || sandi[i-1] == 'v' || sandi[i-1] == 'V'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("8 8");
			}
			else {
			printf("8 8 ");
			}
		}
		else if(sandi[i] == 'x' || sandi[i] == 'X'){
			if(sandi[i-1] == 'v' || sandi[i-1] == 'V' || sandi[i-1] == 'w' || sandi[i-1] == 'W'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("8 8 8");
			}
			else {
			printf("8 8 8 ");
			}
		}
		else if(sandi[i] == 'y' || sandi[i] == 'Y'){
			if(sandi[i-1] == 'z' || sandi[i-1] == 'Z'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("9");
			}
			else {
			printf("9 ");
			}
		}
		else if(sandi[i] == 'z' || sandi[i] == 'Z'){
			if(sandi[i-1] == 'y' || sandi[i-1] == 'Y'){
			printf("-1 ");
			}
			if(i==batas-1){
			printf("9 9");
			}
			else {
			printf("9 9 ");
			}
		}
		else if(sandi[i] == ' '){
			if(i==batas-1){
			printf("0");
			}
			else {
			printf("0 ");
			}
		}
	}
	return 0;
}
