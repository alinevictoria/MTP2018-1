//Aluna: Aline Victória Machado Silva - 11721EBI006
#include <stdio.h>

int ackermann_function(int m, int n)

{
	
    if (m == 0)

	{	

		return n+1;	

	}

	else if (m > 0 && n == 0)

	{

		return ackermann_function(m-1,1);	

	}

	else

	{
		return ackermann_function(m-1, ackermann_function(m,n-1));	

	}

}



int main()

{

	int m, n;

	printf("\nDigite m: ");

	scanf("%d", &m);

	printf("\nDigite n: ");

	scanf("%d", &n);

	printf("\nO resultado da funcao eh: %d", ackermann_function(m,n));

	return 0;

}
