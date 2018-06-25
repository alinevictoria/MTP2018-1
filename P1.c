//Aluna: Aline Victória Machado Silva - 11721EBI006

#include <stdio.h>

int main () 
{
 int i = 0, estado = 0;
 char bits[256];	
	
  printf ("Programa para verificar se um numero eh multiplo de 3");
  printf ("\n Digite um numero binario: ");

  scanf ("%s", &bits[i]);	

  while (bits[i] != '\0'){

      if (bits[i] != '0' && bits[i] != '1')	

{
     printf ("Erro");
     
	 return 1;		 
}

if (estado == 0 && bits[i] == '0')

	{
	 estado = 0;		
	}

      else if (estado == 0 && bits[i] == '1')
	{
	  estado = 1;	
	}

       else if (estado == 1 && bits[i] == '0')
	{
	  estado = 2;	
	}
	  
      else if (estado == 2 && bits[i] == '1')	
	{
	  estado = estado;	
	}

      
      else if (estado == 2 && bits[i] == '0')	
	{
	  estado = 1;	
	}

      else if (estado == 1 && bits[i] == '1')	
	{
	  estado = 0;	
	}
else			
	{
	estado = estado;
}

i++;			
}
	  if (estado == 0)
 {
     printf("O numero eh multiplo de 3\n");
 }

 else 

 {
     printf("O numero nao eh multiplo de 3");
 }

 return 0;
}
