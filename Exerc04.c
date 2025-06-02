#include <stdio.h> //Usaremos essa linha para incluir a biblioteca padrão de entrada e saída do C
                   //Com ela, conseguimos usar funções como printf e scanf


int main() { // A partir desse ponto, declaramos a função principal do nosso programa
    float ini, mensal, juros; // Usamos "float" quando precisamos armazenar números com casas decimais
    int t;

    // Entrada dos dados do usuário
    printf("Digite o valor do depósito inicial (R$): "); // Estamos usando essa função para mostrar mensagens ou valores na tela para o usuário
    scanf("%f", &ini); // Queremos ler o que o usuário digita e guardar o valor em uma variável

    printf("Digite o valor do depósito mensal (R$): ");
    scanf("%f", &mensal);

    printf("Digite a taxa de juros mensal (em %%): ");
    scanf("%f", &juros);

    printf("Digite o número de meses: ");
    scanf("%d", &t);

    juros = juros / 100; // converte a porcentagem para decimal

    float total = ini; // começa com o valor inicial

    // Loop para cada mês de aplicação
    for(int i = 1; i <= t; i++) { // Usamos o for quando queremos repetir um bloco de código um número definido de vezes
        total += mensal;         // adiciona o depósito do mês
        total += total * juros;  // aplica os juros sobre o total acumulado
    }

    // Exibe o valor final com duas casas decimais
    printf("Valor final da aplicação após %d meses: R$ %.2f\n", t, total);

    return 0; // Indica que o programa terminou corretamente e encerra a função main
}
