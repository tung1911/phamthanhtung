#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int sum;
	int b=2000;
	
	printf("nhap so tien\n");
	scanf("%d",&a);
	
	if(a<=2000 & a%50==0)	
	{printf("thanh cong\n");
	printf("so du=%d\n",b-a);}
	
	 else{printf("khong du tien\n");
	}
	

	return 0;
}