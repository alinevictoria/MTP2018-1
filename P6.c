//Aluna: Aline Victória Machado Silva - 11721EBI006

#include <stdio.h>

int soma(int a, int *b)

{

    if(a>0)

        return *b+soma(a-1, b+1);

    else

        return 0.0;

}

float media(int x, int y)

{

    return (float)x/(float)y;

}

int main ()

{

	int v[]={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};

	int tamanho=0, c=0;

	printf("Tamanho a ser somado:\n");

	scanf("%d", &tamanho);

	printf("\nValores: \n");

	for (c=0; c<tamanho; c++) 

		scanf("%d", &v[c]);

	printf("\nmedia = %f", media(soma(tamanho, v), tamanho));

	return 0;

}
