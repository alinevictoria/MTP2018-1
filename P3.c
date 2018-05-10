#include <stdio.h>

void mostrabits(unsigned int numero, int tamanho) 
{
	if(tamanho != 0) 
	{
	mostrabits(numero/2, tamanho-1);
	printf("%d", (numero%2));
	}	
}
int main()
{
	int aux, x, y, res;
	printf("Menu da Calculadora\n\n");
	printf("1. NOT\n2. AND\n3. OR\n4. XOR\n5. Right Shift\n6. Left Shift\n\n");
	scanf("%d", &aux);
	if(aux == 1)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &x);
		getchar();
		printf("\nNOT %d", x);
		printf("(");
		mostrabits(x, 32);
		printf(")");
		res=~x;
		printf(" : %d", res);
		printf("(");
		mostrabits(res, 32);
		printf(")");
	}
	else if (aux == 2)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &x);
		getchar();
		printf("\n\nDigite outro numero: ");
		scanf("%d", &y);
		getchar();
		printf("\n\n%d", x);
		printf("(");
		mostrabits(x, 32);
		printf(")");
		printf(" AND %d", y);
		printf("(");
		mostrabits(y, 32);
		printf(")");
		res=x&y;
		printf(" : %d", res);
		printf("(");
		mostrabits(res, 32);
		printf(")");
	}
	else if ( aux == 3)
	{
		printf("\n\nDigite um numero: ");
		scanf("%d", &x);
		getchar();
		printf("\n\nDigite outro numero: ");
		scanf("%d", &y);
		getchar();
		printf("\n\n%d", x);
		printf("(");
		mostrabits(x, 32);
		printf(")");
		printf(" OR %d", y);
		printf("(");
		mostrabits(y, 32);
		printf(")");
		res=x|y;
		printf(" : %d", res);
		printf("(");
		mostrabits(res, 32);
		printf(")");
	}
	else if ( aux == 4)
	{
		printf("\n\nDigite um numero: ");
		scanf("%d", &x);
		getchar();
		printf("\n\nDigite outro numero: ");
		scanf("%d", &y);
		getchar();
		printf("\n\n%d", x);
		printf("(");
		mostrabits(x, 32);
		printf(")");
		printf(" XOR %d", y);
		printf("(");
		mostrabits(y, 32);
		printf(")");
		res=x^y;
		printf(" : %d", res);
		printf("(");
		mostrabits(res, 32);
		printf(")");
    }
	else if ( aux == 5)
	{
		printf("\n\nDigite um numero: ");
		scanf("%d", &x);
		getchar();
		printf("\n\nDigite outro numero: ");
		scanf("%d", &y);
		getchar();
		printf("\n\n%d", x);
		printf("(");
		mostrabits(x, 32);
		printf(")");
		printf(" >> %d", y);
		printf("(");
		mostrabits(y, 32);
		printf(")");
		res=x>>y;
		printf(" : %d", res);
		printf("(");
		mostrabits(res, 32);
		printf(")");
	}
	else if( aux == 6)
	{
			printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			mostrabits(x, 32);
			printf(")");
			printf(" << %d", y);
			printf("(");
			mostrabits(y, 32);
			printf(")");
			res=x<<y;
			printf(" : %d", res);
			printf("(");
			mostrabits(res, 32);
			printf(")");
	}
	return 0;
}