//Aluna: Aline Victória Machado Silva - 11721EBI006
#include<stdio.h>
int main (){

char num[256];

int opcao, x, number=0, numero_binario;

    printf ("Escolha uma opcao entre 1 e 8:\n1- Binario para Decimal.\n2- Binario para Hexadecimal.\n3- Hexadecimal para Decimal.\n4- Hexadecimal para Binario.\n5- Decimal para Binario.\n6- Decimal para Hexadecimal.\n7- Octal para Decimal.\n8- Decimal para Octal.\n");

    scanf("%d", &opcao);	getchar();

if(opcao==1){

    printf("Digite um numero em Binario.\n");

    scanf("%s", num); getchar();

    for(x=0; num[x] != '\0'; x++)

    number = number*2 + (num[x] - '0');	

    printf("Valor em decimal: %d", number);

}else if(opcao==2){

    printf("Digite um numero em Binario.\n");

    scanf("%s", num); getchar();

    for(x=0; num[x] != '\0'; x++)

    number = number*2 + (num[x] - '0');		   

    printf("Valor em hexadecimal: %x", number);

}else if(opcao==3){

    printf("Digite um numero em Hexadecimal.\n");

    scanf("%x", &number); getchar();

    printf("Valor em decimal: %d", number);

}else if(opcao==4){

    printf("Digite um numero em Hexadecimal.\n");

	scanf("%x", &number); getchar();

	for(numero_binario = 0; number >= (1 << numero_binario); numero_binario++){

	}	

	char num[numero_binario];

	for(x=0; x<numero_binario; x++){

		if(number%2==0){

			num[x]=0;

		}else{

			num[x]=1;

		}

		number=number/2;

	}

	printf("Valor em binario: ");

	for(x=numero_binario-1; x>=0; x--){

	    printf("%i", num[x]);

	}

}else if(opcao==5){

    printf("Digite um numero em Decimal.\n");

	   scanf("%d", &number); getchar();

	for(numero_binario = 0; number >= (1 << numero_binario); numero_binario++){

	}	

	char num[numero_binario];

	for(x=0; x<numero_binario; x++){

		if(number%2==0){

			num[x]=0;

		}else{

			num[x]=1;

		}

		number=number/2;

	}

	printf("Valor em binario: ");

	for(x=numero_binario-1; x>=0; x--){

		printf("%i", num[x]);

	}

}else if(opcao==6){

    printf("Digite um numero em Decimal.\n");

    	scanf("%d", &number); getchar();

    	printf("Valor em hexadecimal: %x", number);

}else if(opcao==7){

    printf("Digite um numero em Octal.\n");

	    scanf("%o", &number); getchar();

	    printf("Valor em decimal: %d", number);

}else if(opcao==8){

    printf("Digite um numero em Decimal.\n");

	    scanf("%d", &number); getchar();

	    printf("Valor em Octal: %o", number);

}



	return 0;

}
