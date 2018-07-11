////Aluna: Aline Victória Machado Silva - 11721EBI006

#include<stdio.h>

#include<stdlib.h>

#include<string.h>



#define NCHAR_NOME 64



typedef struct

{

	float largura, profundidade, altura;

}Dimensoes;



typedef struct

{

	char nome[NCHAR_NOME];

	float preco;

	Dimensoes dimensoes;

}Produto;



int sizeofFile(char nomearquivo[NCHAR_NOME])

{

	int sof = 0;

	

	FILE* arquivo = fopen(nomearquivo, "rb");

	

	if (arquivo)

	{

		fseek(arquivo, 0, SEEK_END);

		sof = ftell(arquivo);

		fclose(arquivo);

	}else

	{

		fprintf(stderr, "- Arquivo nao encontrado!\n");

		sof = -1;

	}

	

	return sof;

}





void cadastrarNovo(Produto *p, int cont)

{

	printf("Nome do produto: ");

	scanf("%s", p[cont].nome); getchar();

	printf("Preco: ");

	scanf("%f", &p[cont].preco); getchar();

	printf("Largura: ");

	scanf("%f", &p[cont].dimensoes.largura); getchar();

	printf("Profundidade: ");

	scanf("%f", &p[cont].dimensoes.profundidade); getchar();

	printf("Altura:");

	scanf("%f", &p[cont].dimensoes.altura); getchar();

	printf("\nCadastrado com sucesso!\n\n");

}



void consultar(Produto *p, int cont)

{

	if(cont == 0)

		printf("\nNenhum produto cadastrado!\n\n");

	else

	{

		int x, op; 

		printf("Produtos em memoria: %d\n0. Voltar\n", cont);

		

		for(x = 0 ; x < cont; x++)

			printf("%d. %s\n", x+1, p[x].nome);

		

		printf("\nOpcao escolhida: ");

		scanf("%d", &op);

		getchar();

		

		if(op != 0)

		{

			if(op>cont)

				printf("Produto inexistente!\n\n");

			else

			{

				op--;

				printf("%s, R$ %.2f, L: %.2f m x P: %.2f m x A: %.2f m\n\n", p[op].nome, p[op].preco, p[op].dimensoes.largura, p[op].dimensoes.profundidade, p[op].dimensoes.altura);

			}

		}

	}

}



void abrirArq(Produto *p, int *cont)

{

	FILE *arquivo;

	char nomearquivo[NCHAR_NOME];

	

	printf("\nNome do arquivo: ");

	scanf("%s", nomearquivo);

	

	int sof = sizeofFile(nomearquivo), x;

	

	if (sof > 0)

	{

		arquivo = fopen(nomearquivo, "rb");

		*cont = sof/sizeof(Produto);

		p = (Produto *) realloc(p, *cont*sizeof(Produto));

		if(p!=NULL)

		{

			for(x = 0; x < *cont; x++)

			{

				fread(p[x].nome, sizeof(char), NCHAR_NOME, arquivo);

				fread(&p[x].preco, sizeof(float), 1, arquivo);

				fread(&p[x].dimensoes.largura, sizeof(float), 1, arquivo);

				fread(&p[x].dimensoes.profundidade, sizeof(float), 1, arquivo);

				fread(&p[x].dimensoes.altura, sizeof(float), 1, arquivo);	

			}

			printf("\nArquivo contem %d produto(s). Leitura realizada!\n\n", *cont);

		}

		else {

			fprintf(stderr, " - Problema de realocacao da memoria!\n\n");

			cont = 0;

		}

	fclose(arquivo);

	}else

		fprintf(stderr, "- Carregamento nao efetuado!\n\n");	

}



void salvarArq(Produto *p, int cont)

{

	FILE *arq;

	int x = 0;

	char nomearquivo[NCHAR_NOME];

	

	printf("\nNome do arquivo: ");

	scanf("%s", nomearquivo); getchar();

	

	if((arq = fopen(nomearquivo,"wb")) != NULL)

	{

		for(x = 0; x < cont; x++)

		{

			fwrite(p[x].nome, sizeof(char), NCHAR_NOME, arq);

			fwrite(&p[x].preco, sizeof(float), 1, arq);

			fwrite(&p[x].dimensoes.largura, sizeof(float), 1, arq);

			fwrite(&p[x].dimensoes.profundidade, sizeof(float), 1, arq);

			fwrite(&p[x].dimensoes.altura, sizeof(float), 1, arq);

		}

		printf("Produtos armazenados em disco!\n\n");

		fclose(arq);

	}else

		printf("Erro: não foi possível abrir o arquivo\n\n");

}



int main()

{

	Produto *p;

	int cont = 0, op;

	p = malloc(sizeof(Produto));

	

	do

	{

		printf("Produtos em memoria: %d\n\n1 - Consultar\n2 - Cadastrar novo\n3 - Carregar de arquivo para memoria (sobrescreve memoria)"

				"\n4 - Salvar memoria em arquivo (sobrescreve arquivo)\n0 - Sair\n\nOpcao escolhida: ", cont);

		scanf("%d", &op); getchar();



		switch(op)

		{

			case 1:

				consultar(p, cont);

				break;

			case 2:

				cadastrarNovo(p, cont);

				cont++;

				break;

			case 3:

				abrirArq(p, &cont);

				break;

			case 4:

				salvarArq(p, cont);

				break;

		}	

	}while(op!=0);

	

	free(p);

	

	return 0;

}
