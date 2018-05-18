//Aluna: Aline Victória Machado Silva - 11721EBI006
#include <stdio.h>

int main(int ab, char ** ac) 
{
	
	

    char numero[256];
	
    int x=0,a;
	
    printf("Digite a string\n");
	
    scanf("%s",&numero);
	
    while(numero[x]!='\0')
{
		
         a=48;
		
         while(a>=48 && a<=57){
			
              if(numero[x]==a) printf("%c",numero[x]);
			
              a++;
		
         }
		
         x++;
	
     }

}
