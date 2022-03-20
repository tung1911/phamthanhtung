#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	x=0;
	system("cls");
	
	printf("Enter Choice(1-3):");
	scanf("%d",&x);
	
	if(x==1)
	printf("Choice is 1\n");
	
	else if(x==2)
	printf("Choice is 2\n");
	
	else if(x==3)
	printf("Choice is 3\n");
	
	else
	printf("Invalid Choice");
	
	return 0;
}