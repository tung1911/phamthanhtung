#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
    system("cls");
    
    printf("Enter a lower cased alphabet(a-z):\n");
    scanf("%c",&ch);
    
    if(ch<'a'||ch>'z')
    printf("Character not a lower cased alphabet");
    
    else
    switch(ch){
     	
    case 'a':
    case 'e':
    case 'i':
	case 'o':
    case 'u':
	printf("Character is a vowel\n");
	break;
	
    case'z':
	printf("Last Alphabet (z) was entered)");
	break;
	
	default:
	printf("Character is a consonant");
	break;
	
		 
		 	
	}
	return 0;
}