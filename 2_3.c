/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ 
   int A;
   int B;
   int C;
   printf("Digite 3 valores: \n");
   scanf("%d", &A);
   scanf("%d", &B);
   scanf("%d", &C);
   if (A > B && A > C) {
       printf("O maior valor entre os tres é: %d", A);
   }
   else if (B > A && B > C) {
       printf("O maior valor entre os tres é: %d", B);
   }
   else if (C > A && C > B) {
       printf("O maior valor entre os tres é: %d", C);
   }
}