#include <stdio.h>
	//invocamos a biblioteca stdio.h

int main(){
	//"main" é uma função, o ponto de partida de onde este programa abaixo irá rodar, abrimos ela com colchetes {
int linhasA, linhasB, colunasA, colunasB;

    printf("\nDigite a quantas linhas na Mtriz A: ");
    scanf("%d", &linhasA);
    printf("\nDigite a quantas colunas na Matriz A: ");
    scanf("%d", &colunasA);
    printf("\nDigite a quantas linhas na Matriz B: ");
    scanf("%d", &linhasB);
    printf("\nDigite a quantas colunas na Matriz B: ");
    scanf("%d", &colunasB);

    int matrizA[linhasA][colunasA], matrizB[linhasB][colunasB], matrizC[linhasA][colunasB], i, j;

    if(linhasA == colunasB)
    {
    //o comando for executa os comandos de inicialização, testando a condição. Se for falsa,executa o comando que está logo após o bloco subordinado ao for
	for(i = 0; i < linhasA; i++)
	{
    for(j = 0; j < colunasA; j ++)
            {
    	printf("\nInsira o valor na linha %d e coluna %d da Matriz A: ", i, j);
        scanf("%d", &matrizA[i][j]);
            }
        }

        for(i = 0; i < linhasB; i++)
        {
            for(j =0; j < colunasB; j++)
            {
                printf("\nInsira o valor na linha %d e coluna %d da Matriz B: ", i, j);
                scanf("%d", &matrizB[i][j]);
            }
        }

        int z = 0;
        int x;

        for(i = 0; i < linhasA; i++)
        {
            for(j = 0; j < colunasB; j++)
            {
                matrizC[i][j] = 0;

                for(x = 0; x < linhasB; x++)
                {
                    z += matrizA[i][x]*matrizB[x][j];
                }
                matrizC[i][j] = z;
                z = 0;
            }
        }

        printf("\nResultado da mulplicacao entre matrizes: \n\n");

        for(i = 0; i < linhasA; i++)
        {
            for(j = 0; j < colunasB; j++)
            {
                printf("%6.d", matrizC[i][j]);
            }
            printf("\n\n");
        }
    }

    else
    //se executada se a condição do comando if não for verdadeira
    {
        printf("\nNao eh possivel realizar a multiplicacao com esses valores");
    }

    return 0;
    //utilizamos para indicar o SO que o programa foi bem sucedido
}
