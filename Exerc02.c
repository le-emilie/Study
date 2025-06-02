#include <stdio.h> //Usaremos essa linha para incluir a biblioteca padrão de entrada e saída do C
                   //Com ela, conseguimos usar funções como printf e scanf

int main() { // A partir desse ponto, declaramos a função principal do nosso programa
    int A, B, aux; // Declaramos duas variáveis A e B, e uma auxiliar

    // Entrada dos valores
    printf("Digite o valor de A: "); // Estamos usando essa função para mostrar mensagens ou valores na tela para o usuário
    scanf("%d", &A); // Queremos ler o que o usuário digita e guardar o valor em uma variável

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Mostra os valores antes da troca
    printf("Antes da troca:\nA = %d\nB = %d\n", A, B);

    // Processo de troca usando uma variável auxiliar
    aux = A; // Guarda o valor de A
    A = B;   // A recebe o valor de B
    B = aux; // B recebe o valor que estava em A

    // Exibe os valores após a troca
    printf("Depois da troca:\nA = %d\nB = %d\n", A, B);

    return 0; // Indica que o programa terminou corretamente e encerra a função main
}
