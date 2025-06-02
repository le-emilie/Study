#include <stdio.h>
	//invocamos a biblioteca stdio.h

int main(){


	int v;
	int vetor[3];

	for(v=0; v<3; v++)
	//o comando for executa os comandos de inicialização, testando a condição. Se for falsa,executa o comando que está logo após o bloco subordinado ao for
{
	printf ("\nDigite um numero: ");
	scanf("%d", &vetor [v]);
}

	int menor = vetor [0];
	int maior = 0;
	int meio;
	
	for(v=0; v<3; v++)
	{
		if (vetor[v] < menor)
	//utilizamos o comando IF para alterar o fluxo de execução de um programa em C baseado no valor, verdadeiro ou falso, de uma expressão lógica
		{
			menor = vetor [v];
		}
	}
	
	for(v=0; v<3; v++)
	{
		if (vetor[v] > maior)
		{
			maior = vetor [v];
		}
	}
	
	for(v=0; v<3; v++)
	{
		if (vetor[v] > menor && vetor[v]< maior)
		{
			meio = vetor [v];
		}
	}
	printf("\nOrdem crescente dos numeros inseridos: \n%d %d %d", menor, meio, maior);

	return 0;
	//utilizamos para indicar o SO que o programa foi bem sucedido
}
	//finalizamos com colchetes
