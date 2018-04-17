//Aluna: Aline Victória Machado Silva - 11721EBI006

#include <stdio.h>

int main(){
	
	int estado = 0, i = 0;
    char bits[256];
    
    printf("Digite um numero binario: \n");
    scanf("%s", bits);
    
    while(bits[i] != '\0'){
	
        if (estado == 0 && bits[i] == '0'){
    		estado = 0;
    		i++;
		}
    	
    	if (estado == 0 && bits[i] == '1'){
    		estado = 1;
    		i++;
    	}
    	
    	if (estado == 1 && bits[i] == '0'){
    		estado = 2;
    		i++;
    	}
    	
    	if (estado == 1 && bits[i] == '1'){
    		estado = 0;
    		i++;
    	}
    	
    	if (estado == 2 && bits[i] == '0'){
    		estado = 1;
    		i++;
    	}
    	
    	if (estado == 2 && bits[i] == '1'){
    		estado = 2;
    		i++;
    	}
	
	}
	
	if (estado == 0){
		printf("\nO numero binario eh: %s", &bits);
		printf("\nO numero e multiplo de 3.");
	}
	
	else{
		printf("\nO numero binario e: %s", &bits);
		printf("\nO numero nao e multiplo de 3.");
	}
	
	return 0;
	
}
