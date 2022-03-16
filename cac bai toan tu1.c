#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	system("cls");
	
	a=50;
	b=25;
	c=30;
	
	d=a*b+c/2;
	printf("\nketqua:a*b+c/2 la: %d",d);
	
	d=a%b;
	printf("\nketqua:a%b la: %d",d);
	
	d=a*b-c;
	printf("\nketqua:d=a*b-c la: %d",d);
	
	d=a/b+c;
	printf("\nketqua:d=a/b+c la: %d",d);
	
	d=a+b*c;
	printf("\nketqua:d=a+b*c la: %d",d);
	
	d=(a+b)*c;
	printf("\nketqua:d=(a+b)*c la: %d",d);
	
	d=a*(b+c+(a-c)*b);
	printf("\nketqua:d=a*(b+c+(a-c)*b) la: %d",d);
	
	
	return 0;
}