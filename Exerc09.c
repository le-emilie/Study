#include <stdio.h> //Usaremos essa linha para incluir a biblioteca padrão de entrada e saída do C
                   //Com ela, conseguimos usar funções como printf e scanf


int main() { // A partir desse ponto, declaramos a função principal do nosso programa
    int N;

    // Lê o tamanho do vetor
    printf("Digite o tamanho do vetor:\n");  //Estamos usando essa função para mostrar mensagens ou valores na tela para o usuário
    scanf("%d", &N); // Queremos ler o que o usuário digita e guardar o valor em uma variável

    int vetor[N]; // Declara o vetor com N posições

    // Lê os valores do vetor
    for (int i = 0; i < N; i++) { // Usamos o for quando queremos repetir um bloco de código um número definido de vezes
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Imprime o vetor na ordem inversa
    printf("Vetor em ordem inversa:\n");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0; // Indica que o programa terminou corretamente e encerra a função main
}
