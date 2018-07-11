//Aluna: Aline Victória Machado Silva - 11721EBI006
#include <stdio.h>
#include <stdlib.h>



void gerando(float * v, int tamanho) {

	int x;  

	for(x = 0; x < tamanho; x++) 

		v[x] = (float) rand()/(float) RAND_MAX + 0.5f;}

float somando(float v[], int i){

	 if (i == 0) return 0;

   else {

      float soma;

      soma = somando (v, i-1);

      if (v[i-1] > 0) soma += v[i-1];

      return (soma);}}

float produto(float v[], int i){

	float multiplica = 1.0f;

	for(int n=0; i<n; i++)

		multiplica = multiplica*v[i];

	return multiplica;

}



int main(){

	srand(123456);

	printf("%d\n", rand()); 

	int opcao, n=100;

	float num[100];

	gerando(num, n);

	do{

	printf("\nMenu: \n1 - Somatorio.\n2 - Produto.\n3 - Sair do programa.");

	printf("\nDigite a opcao: ");

	scanf("%d", &opcao);	

	getchar();

	switch(opcao){

		case 1:

			printf("\nSomatorio: %f", somando(num, n));

			break;

		case 2:

			printf("\nProduto: %f", produto(num,n));

			break;

		case 3:

			return 0;

		default:

			break;

	}}while(opcao != 4);

	return 0;}
