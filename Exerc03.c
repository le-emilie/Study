#include <stdio.h> //Usaremos essa linha para incluir a biblioteca padrão de entrada e saída do C
                   //Com ela, conseguimos usar funções como printf e scanf


int main() { // A partir desse ponto, declaramos a função principal do nosso programa
    int total_segundos;
    int horas, minutos, segundos;

    // Entrada de dados
    printf("Digite o tempo em segundos: "); // Estamos usando essa função para mostrar mensagens ou valores na tela para o usuário
    scanf("%d", &total_segundos); // Queremos ler o que o usuário digita e guardar o valor em uma variável

    // Cálculo das horas, minutos e segundos
    horas = total_segundos / 3600;                  // 1 hora = 3600 segundos
    minutos = (total_segundos % 3600) / 60;         // resto da divisão por 3600 dividido por 60
    segundos = total_segundos % 60;                 // o que sobra são os segundos

    // Impressão no formato HH:MM:SS com dois dígitos
    printf("Tempo formatado: %02dh%02dm%02ds\n", horas, minutos, segundos);

    return 0; // Indica que o programa terminou corretamente e encerra a função main
}
