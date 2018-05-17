#include <stdio.h>

int main ()

{

    int x,y,D[64];

    char C [255];

    int* pcod = (int*) C;

    char* pdec = (char*) &D;
    
	printf("Bem Vindo(a), escolha a opcao desejada:\n");
    printf("1-> Codificar\n");
    printf("2-> Decodificar\n");

    scanf("%d", &x);

    y=getchar();

    switch(x)

    {

    case 1:

        for(y=0;y<255;y++)

        

            C[y]=0;

        

        printf("\n->Digite uma frase com o maximo de 255 caracteres\n");

        fgets(C,255,stdin);

        for(y=0;C[y]!=0;y++)

            if(C[y]==10){C[y]=0;}

        

        for(y=0;*(pcod+y)!=0;y++)

            printf("%d ", *(pcod+y));

        

        break;

    case 2:

        printf("\n-Digite um numero\n");

        for(y=0;y<64;y++)

        {

            scanf("%d", &D[y]);

            if(getchar()=='\n')

            {

                break;

            }

        }

        for (y=0;*(pdec+y)!=0;y++)

        printf("%c", *(pdec+y));

        

        break;

    }

    return 0;

}
