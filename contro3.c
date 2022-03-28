#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a,str[50],*ptr;
	
	printf("Enter a sentence:\n");
	gets(str);
	printf("\nEnter character to search for:");
	a=getchar();
	ptr=strchr(str,a);
	if(ptr==0){
		printf("\nNo");
	}
	else{
		printf("\nYes");
	}
	return 0;
}