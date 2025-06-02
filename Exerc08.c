#include <stdio.h> //Usaremos essa linha para incluir a biblioteca padrão de entrada e saída do C
                   //Com ela, conseguimos usar funções como printf e scanf


int main() { // A partir desse ponto, declaramos a função principal do nosso programa
    float num, anterior = 0; // Usamos quando precisamos armazenar números com casas decimais


    printf("Digite números (0 para sair):\n"); //Estamos usando essa função para mostrar mensagens ou valores na tela para o usuário

    while (1) { // Estrutura de repetição para executar um bloco de código enquanto a condição for verdadeira
        scanf("%f", &num); // Queremos ler o que o usuário digita e guardar o valor em uma variável
        if (num == 0) break; // Sai do loop se for 0

        anterior += num; // Soma o número ao acumulador
        printf("Soma atual: %.2f\n", anterior); // Imprime a soma atual
    }

    return 0; // Indica que o programa terminou corretamente e encerra a função main
}
