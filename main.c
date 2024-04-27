
#include "../include/lol.h"
int main() {

   //Type Conversion----------------
   double a = 5.456;
   int b = (int)a;

   printf("a: %lf",a);
   printf("\nb: %d\n",b);

   // Character Arithmetic-------------
   int x = 'A';
   int y = 20;
   int z = x+y;
   printf("\nCharacter Arithmetic----------------------------");
   printf("\nA: %d",x);
   printf("\nz: %d",z);
   printf("\ny: %c\n",y);


   test();
   integer_promotions();

   inputs(); 


   return 0;
}
