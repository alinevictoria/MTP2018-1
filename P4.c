//Aluna: Aline Victória Machado Silva - 11721EBI006

#include <stdio.h>

int main()

{

	int sl=0, i=0;

	char numero[256];

	printf("Digite uma sequência de caracteres numericos: ");

	scanf("%s", numero);

	getchar();

	for (i=0; numero[i]; i++)

	{

		if ((numero[i]-'0')>=0 && (numero[i]-'0')<=9)

			sl=sl*10+(numero[i]-'0');

		else;

	}

	printf("%i", sl);

	return 0;

}
