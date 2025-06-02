#include <stdio.h>
int main(){
   int v[5] = {1, 2, 3, 4, 5};
   int *p;
   p= v;
  
   printf("\n%d", v[0]);
   printf("\n%d", *p);
   printf("\n%p", p);
   p=p+3;
   printf("\n%p", p);
   printf("\n%d", *p);
}
