//Aluna: Aline Victória Machado Silva - 11721EBI006

#include <stdio.h>

int snum(int v[20], int x) 

	{

		
        int p;
	    if (x == 0) return 0;

	    else{

		      p = snum(v, x-1);

		      if (v[x-1] > 0)

			  	{

				  p += v[x-1];

				}

		      return (p);

			}

	}

float med(int snum, float j)

	{

		float r;

		r = snum/j;

		return r;

	}


int main()

	{

		int v[20],a,soma,quant;

	

		float j;

		printf("Quantidade de numeros: ");

		scanf("%d", &quant);
		
        for(a=0; a<quant; a++)

		{

			printf("\n %d numero: ", a+1);

			scanf("%d", &v[a]);

			getchar();

			if(v[a] != 0) 

			j++;

		}

		soma = (snum (v, a) );

		printf("\nA media dos numeros digitados eh: %f",med(soma, j));

		

		return 0;

		}
