#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	x=y=0;
	system("cls");
	
	printf("Enter Choice (1-3):");
	scanf("%d",&x);
	
	if(x==1)
	{
	printf("Enter value for y(1-5):\n");
	scanf("%d",&y);
	
	if(y<=5)
	printf("The value for y is:%d\n",y);
	else
	printf("The value of y Exceeds 5");
	}
	else
	printf("Choice entered was not 1");
	
	return 0;
}