#include <stdio.h> //Usaremos essa linha para incluir a biblioteca padrão de entrada e saída do C
                   //Com ela, conseguimos usar funções como printf e scanf

int main() { // A partir desse ponto, declaramos a função principal do nosso programa
    // Variáveis para armazenar os valores fornecidos pelo usuário
    float deposito_inicial, deposito_mensal, juros; // Usamos "float" quando precisamos armazenar números com casas decimais
    int meses;
    
    // Solicitamos ao usuário os dados necessários
    printf("Digite o valor do depósito inicial (R$): "); // Estamos usando essa função para mostrar mensagens ou valores na tela para o usuário
    scanf("%f", &deposito_inicial); // Queremos ler o que o usuário digita e guardar o valor em uma variável

    printf("Digite o valor do depósito mensal (R$): ");
    scanf("%f", &deposito_mensal);

    printf("Digite a taxa de juros mensal (%%): ");
    scanf("%f", &juros);

    printf("Digite o número de meses da aplicação: ");
    scanf("%d", &meses);

    // Transforma a taxa de juros em decimal
    juros = juros / 100;

    // Calcula o valor final da aplicação
    float valor_total = deposito_inicial;  // começa com o depósito inicial

    for (int i = 1; i <= meses; i++) { // Usamos o for quando queremos repetir um bloco de código um número definido de vezes
        valor_total += deposito_mensal;       // adiciona o depósito do mês
        valor_total += valor_total * juros;   // aplica os juros sobre o valor acumulado
    }

    // Imprime o valor final da aplicação com 2 casas decimais
    printf("Valor final da aplicação após %d meses: R$ %.2f\n", meses, valor_total);

    return 0; 
}
