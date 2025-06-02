#include <stdio.h>

int main(){
   int v[5] = {1, 2, 3, 4, 5};
   int maximo;
   printf ("O tamano do vetor eh %ld", sizeof(v[5]));
   maximo = busca_maximo (v,5);
   printf ("\nMaximo = %d", maximo);
}
