#include <stdio.h>
int main(){
   int v[5] = {1, 2, 3, 4, 5};
   int *p;
   p= &v[2];
   
   p=p+1;
   p=p-2;
  
   printf("\n%d", *(p+1));
   printf("\n%d", *(p-1));
}
