#include <stdio.h> //Usaremos essa linha para incluir a biblioteca padrão de entrada e saída do C
                   //Com ela, conseguimos usar funções como printf e scanf


int main() { // A partir desse ponto, declaramos a função principal do nosso programa
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    // Leitura das duas datas
    printf("Digite a primeira data (dia mes ano):\n"); // Estamos usando essa função para mostrar mensagens ou valores na tela para o usuário
    scanf("%d %d %d", &dia1, &mes1, &ano1); // Queremos ler o que o usuário digita e guardar o valor em uma variável

    printf("Digite a segunda data (dia mes ano):\n");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    // Compara os anos primeiro
    if (ano1 < ano2 ||
        (ano1 == ano2 && mes1 < mes2) ||
        (ano1 == ano2 && mes1 == mes2 && dia1 < dia2)) {
        printf("A primeira data ocorreu primeiro.\n");
    } else if (ano1 == ano2 && mes1 == mes2 && dia1 == dia2) { // Queremos testar outra condição, caso o if inicial seja falso

        printf("As duas datas são iguais.\n");
    } else { // Trata o caso em que a condição do if não foi satisfeita
        printf("A segunda data ocorreu primeiro.\n");
    }

    return 0; // Indica que o programa terminou corretamente e encerra a função main
}
