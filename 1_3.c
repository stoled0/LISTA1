/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    float A;
    float B;
    float C;
    printf("Digite 3 valores para calcularmos a média: \n");
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    printf("A média dos valores é %f", (A + B + C) / 3);
    return 0;
}