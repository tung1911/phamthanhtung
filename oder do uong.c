#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum,luachon,sl,gia;
	char ans;
	sum=0;
	system("cls");
	
	printf("menu:\n 1.nuoccam=50k\t 2.caphe=30k\t\n 3.tra=20k\n");
	
	
	do{
		printf("nhap do:");
		scanf("%d",&luachon);
	
		switch(luachon){
		         case 1:    
			        gia=50;
			        printf("nuoc cam\n");
			        printf("so luong:");
			        scanf("%d",&sl);
			        sum+=sl*gia;
			        break;
				case 2:
					gia=30;
					printf("ca phe\n");
					printf("so luong:");
					scanf("%d",&sl);
					sum+=sl*gia;
					break;
				case 3:
					gia=20;
				     printf("tra\n");
				     printf("so luong:");
				     scanf("%d",&sl);
				     sum+=sl*gia;
					 break;
					 	
			}
			  printf("Ban co oder them(Y/N)\n");
			 
			  scanf("%c",&ans);
			  
			
		}
		while(ans=='y'||ans=='Y');
		printf("tong tien=\n%d",sum);
	
		
	
	
	
	
	return 0;
}