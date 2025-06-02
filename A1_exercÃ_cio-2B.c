#include <stdio.h>
	//invocamos a biblioteca stdio.h

int main(){
	//"main" é uma função, o ponto de partida de onde este programa abaixo irá rodar, abrimos ela com colchetes {
	int v;
	//como trata-se de uma variável numérica do tipo inteiro, utilizamos a sentença int
	int vetor [3];
	
	for (v = 0; v<3; v++)
	{
		printf("\nDigite um número: ");
	//printf executa vários comandos que ao final irá imprimir no prompt o argumento da função
		scanf("%d", &vetor [v]);
	}
	
	int menor = vetor [0];
	int meio;
	int maior = 0;

	for(v=1; v<3; v++)
	//o comando for executa os comandos de inicialização, testando a condição. Se for falsa,executa o comando que está logo após o bloco subordinado ao for
	{
	//utilizamos o comando IF para alterar o fluxo de execução de um programa em C baseado no valor, verdadeiro ou falso, de uma expressão lógica
		if(vetor[v] < menor)
		{
			menor = vetor[v];
		}
	}

{
	printf("\nO menor numero eh: %d", menor);
	}	
return 0;
	//utilizamos para indicar o SO que o programa foi bem sucedido
}
	//finalizamos com colchetes


