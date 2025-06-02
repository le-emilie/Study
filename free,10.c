#include <stdio.h>  //usamos para entrada e saida como scanf, printf
#include <stdlib.h>  //usamos para poder usarmos malloc, free
int main() {
   double media, *notas; 
   int i, n;
   scanf("%d", &n);
   notas = malloc(n * sizeof(double)); //notas é um ponteiro para um vetor que guarda ponteiros do tipo double, crio um espaço na memoria
  	// Vamos considerar que com certeza há espaço disponível na memória
   for (i = 0; i < n; i++){ //escaneio as 10 notas
        scanf("%lf", &notas[i]);}
   media = 0; //ou somamos tudo e dividimos por n, ou fazemos a media ponderada por n
   for (i = 0; i < n; i++){
       media += notas[i]/n;}
   printf("Média: %lf\n", media);
   free(notas); //para liberar a memoria
   return 0;
}
