#include <stdio.h>

 int busca_maximo (int *x, int N){
 int maximo, i;
   maximo = x [0]; // *(x+1)...
       for (i=1; i<N; i++){
       if (x[i]> maximo){maximo = x[i]}
       }
       return maximo;
 }

