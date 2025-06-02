#include <stdio.h> //Usaremos essa linha para incluir a biblioteca padrão de entrada e saída do C
                   //Com ela, conseguimos usar funções como printf e scanf


int main() { // A partir desse ponto, declaramos a função principal do nosso programa
    int a, b, c, temp;

    // Lê os três números do usuário
    printf("Digite três números inteiros:\n"); //Estamos usando essa função para mostrar mensagens ou valores na tela para o usuário
    scanf("%d %d %d", &a, &b, &c); // Queremos ler o que o usuário digita e guardar o valor em uma variável

    // Usamos trocas para ordenar os números em ordem crescente

    if (a > b) { // Se a maior que b, troca
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) { // Se a maior que c, troca
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) { // Se b maior que c, troca
        temp = b;
        b = c;
        c = temp;
    }

    // Exibe os números em ordem crescente
    printf("Numeros em ordem crescente: %d %d %d\n", a, b, c); 

    return 0; // Indica que o programa terminou corretamente e encerra a função main
}
