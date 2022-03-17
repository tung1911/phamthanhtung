#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=4 ,b=5, c=6;
	
	printf("a=4, b=5, c=6\n");
	printf("the value of a>b is \t%i\n",a>b);
	printf("the value of b<c is \t%i\n",b<c);
	printf("the value of b-a<=b-c is \t%i\n",b-a<=b-c);
	printf("result of a>10 && b<5 = %d\n\n",a>10 && b<5);
	printf("result of a>100 || b<50 = %d\n\n",a>100 || b<50);
	
	return 0;
}