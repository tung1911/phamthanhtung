#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mapin;
	int luachon;
	int limit;
	char as;
	limit=0;
	system("cls");
	
	printf("vietcombank\n");
	

	
    do{
    	printf("nhap ma pin\n");
    	scanf("%d",&mapin);
    	limit++;
		}
    while(mapin!=123&&limit<3); 
    printf("khoa the\n");
    
    if(mapin==123){
    	do{
    		
    		printf("thanh cong\n");
    		printf("1:xem so du 2:rut tien 3:giao dich khac\n");
    		scanf("%d",&luachon);
    		
    		switch(luachon){
    			case 1:
    				printf("so du la\n");
    				break;
    			case 2:
				    printf("nhap so tien can rut:\n");
					break;
				default:
				    printf("ban co muon giao dich khacY/N\n");
				    fflush(stdin);
					scanf("%c",&as);
					break;
					 	
			}
		}
		while(as=='Y');
	}
	

    
    
   
			
			
	
    
    

	
	
		
	
	return 0;
}