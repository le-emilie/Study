#include <stdio.h>

void hanoi(int x, char orig, char aux, char dest);
void imprime_mov(int y, char ini, char dest);
void pausar();

int n, temp = 0;

int main()
{
    printf("\nDetermine uma quantidade de discos (1 a 4 apresenta imagem): ");
    scanf("%d", &n);
    
    if(n == 1)
    {
        printf("\n   1   0   0\n---------------\n   A   B   C\n");
    }
    if(n == 2)
    {
        printf("\n   1   0   0\n   2   0   0\n---------------\n   A   B   C\n");
    }
    if(n == 3)
    {
        printf("\n   1   0   0\n   2   0   0\n   3   0   0\n---------------\n   A   B   C\n");
    }
    if(n == 4)
    {
        printf("\n   1   0   0\n   2   0   0\n   3   0   0\n   4   0   0\n---------------\n   A   B   C\n");
    }

    hanoi(n, 'A', 'B', 'C');
}

void hanoi(int x, char orig, char aux, char dest)
{
    if(x > 0)
    {
        hanoi(x-1, orig, dest, aux);
        printf("\nO disco %d foi movido de %c para %c\n", x, orig, dest);
        imprime_mov(x, orig, dest);
        pausar();
        hanoi(x-1, aux, orig, dest);
    }
}

void imprime_mov(int y, char ini, char fim)
{
    if(n == 1)
    {
        printf("\n   0   0   1\n---------------\n   A   B   C\n");
    }
    if(n == 2)
    {
        if((y == 1) && (ini == 'A') && (fim == 'B'))
        {
            printf("\n   0   0   0\n   2   1   0\n---------------\n   A   B   C\n");
        }
        if((y == 2) && (ini == 'A') && (fim == 'C'))
        {
            printf("\n   0   0   0\n   0   1   2\n---------------\n   A   B   C\n");
        }
        if((y == 1) && (ini == 'B') && (fim == 'C'))
        {
            printf("\n   0   0   1\n   0   0   2\n---------------\n   A   B   C\n");
        }   
    }

    if(n == 3)
    {
        if((y == 1) && (ini == 'A') && (fim == 'C') && (temp == 0))
        {
            printf("\n   0   0   0\n   2   0   0\n   3   0   1\n---------------\n   A   B   C\n");
        }
        if((y == 2) && (ini == 'A') && (fim == 'B'))
        {
            printf("\n   0   0   0\n   0   0   0\n   3   2   1\n---------------\n   A   B   C\n");
        }
        if((y == 1) && (ini == 'C') && (fim == 'B'))
        {
            printf("\n   0   0   0\n   0   1   0\n   3   2   0\n---------------\n   A   B   C\n");
        }
        if((y == 3) && (ini == 'A') && (fim == 'C'))
        {
            printf("\n   0   0   0\n   0   1   0\n   0   2   3\n---------------\n   A   B   C\n");
        }
        if((y == 1) && (ini == 'B') && (fim == 'A'))
        {
            printf("\n   0   0   0\n   0   0   0\n   1   2   3\n---------------\n   A   B   C\n");
        }
        if((y == 2) && (ini == 'B') && (fim == 'C'))
        {
            printf("\n   0   0   0\n   0   0   2\n   1   0   3\n---------------\n   A   B   C\n");
        }
        if((y == 1) && (ini == 'A') && (fim == 'C') && (temp > 0))
        {
            printf("\n   0   0   1\n   0   0   2\n   0   0   3\n---------------\n   A   B   C\n");
        }
        temp++;
    }
    if (n == 4) 
    {
        if((y == 1) && (ini == 'A') && (fim == 'B') && (temp == 0)) 
        {
            printf("\n   0   0   0\n   2   0   0\n   3   0   0\n   4   1   0\n---------------\n   A   B   C\n");
        }
        if((y == 2) && (ini == 'A') && (fim == 'C') && (temp == 1)) 
        {
            printf("\n   0   0   0\n   0   0   0\n   3   0   0\n   4   1   2\n---------------\n   A   B   C\n");
        }
        if ((y == 1) && (ini == 'B') && (fim == 'C') && (temp == 2)) 
        {
            printf("\n   0   0   0\n   0   0   0\n   3   0   1\n   4   0   2\n---------------\n   A   B   C\n");
        }
        if ((y == 3) && (ini == 'A') && (fim == 'B')) 
        {
            printf("\n   0   0   0\n   0   0   0\n   0   0   1\n   4   3   2\n---------------\n   A   B   C\n");
        }
        if ((y == 1) && (ini == 'C') && (fim == 'A') && (temp == 4)) 
        {
            printf("\n   0   0   0\n   0   0   0\n   1   0   0\n   4   3   2\n---------------\n   A   B   C\n");
        }
        if ((y == 2) && (ini == 'C') && (fim == 'B')) 
        {
            printf("\n   0   0   0\n   0   0   0\n   1   2   0\n   4   3   0\n---------------\n   A   B   C\n");
        }
        if ((y == 1) && (ini == 'A') && (fim == 'B') && (temp == 6)) 
        {
            printf("\n   0   0   0\n   0   1   0\n   0   2   0\n   4   3   0\n---------------\n   A   B   C\n");
        }
        if ((y == 4) && (ini == 'A') && (fim == 'C')) 
        {
            printf("\n   0   0   0\n   0   1   0\n   0   2   0\n   0   3   4\n---------------\n   A   B   C\n");
        }
        if ((y == 1) && (ini == 'B') && (fim == 'C') && (temp == 8)) 
        {
            printf("\n   0   0   0\n   0   0   0\n   0   2   1\n   0   3   4\n---------------\n   A   B   C\n");
        }
        if ((y == 2) && (ini == 'B') && (fim == 'A')) 
        {
            printf("\n   0   0   0\n   0   0   0\n   0   0   1\n   2   3   4\n---------------\n   A   B   C\n");
        }
        if ((y == 1) && (ini == 'C') && (fim == 'A') && (temp > 4)) 
        {
            printf("\n   0   0   0\n   0   0   0\n   1   0   0\n   2   3   4\n---------------\n   A   B   C\n");
        }
        if ((y == 3) && (ini == 'B') && (fim == 'C')) 
        {
            printf("\n   0   0   0\n   0   0   0\n   1   0   3\n   2   0   4\n---------------\n   A   B   C\n");
        }
        if ((y == 1) && (ini == 'A') && (fim == 'B') && (temp > 6)) 
        {
            printf("\n   0   0   0\n   0   0   0\n   0   0   3\n   2   1   4\n---------------\n   A   B   C\n");
        }
        if ((y == 2) && (ini == 'A') && (fim == 'C') && (temp > 1)) 
        {
            printf("\n   0   0   0\n   0   0   2\n   0   0   3\n   0   1   4\n---------------\n   A   B   C\n");
        }
        if ((y == 1) && (ini == 'B') && (fim == 'C') && (temp > 13)) 
        {
            printf("\n   0   0   1\n   0   0   2\n   0   0   3\n   0   0   4\n---------------\n   A   B   C\n");
        }
        temp++;
    }
    
}

void pausar() 
{
    printf("\nPressione Enter para continuar...");
    while(getchar() != '\n');
    getchar();
}