#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,res;
	char op;
	num1=90;
	num2=33;
	op='-';
	system("cls");
	
	switch(op){
	case'+':
		res=num1+num2;
		printf("The Sum is:\n%d",res);
		break;
		
	case'-':
		res=num1-num2;
		printf("The Sum is:\n%d",res);
		break;
		
	case'/':
	  	res=num1/num2;
	  	printf("The Sum is:\n%d",res);
	  	break;
	 
	case'*':
	  	res=num1*num2;
	  	printf("The Sum is:\n%d",res);
	  	break;
	  	
	default:
	  	printf("Invalid\n");
	  	break;
	}
	return 0;
}