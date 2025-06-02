#include <stdio.h>
	//invocamos a biblioteca stdio.h

int main(){

	//"main" � uma fun��o, o ponto de partida de onde este programa abaixo ir� rodar, abrimos ela com colchetes {
	int N;
	
	//primeiramente, crio uma vari�vel N. Por ser um comando execut�vel, precisa ser finalizado com um ponto-e-v�rgula
	//printf executa v�rios comandos que ao final ir� imprimir no prompt o argumento da fun��o. Deixamos o usu�rio determinar o tamanho que deseja do vetor N:
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	//
	int vetor [N];
	int v;
	
	//loop for, para que o usu�rio possa determinar o valor que deseja denro do vetor 
	for(v = 0; v < N; v++)
{
	printf("\nDigite o valor dentro do vetor: ");
	scanf("%d", &vetor[v]);
	//%d ser� substitu�do pelo conte�do indicado pelo segundo argumento da fun��o prinf()	
}
	printf("\nValores determinados no vetor: \n\n");

	//agora para os valores serem impressos:
for (v=0; v < N; v++)
{
		printf("%d\n", vetor [v]);
}
return 0;
	//utilizamos para indicar o SO que o programa foi bem sucedido
}
		//finalizamos com os colchetes
