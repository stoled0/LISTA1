/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int C;
    printf("Digite o valor da temperatura em Celsius \n");
    scanf("%d", &C);
    printf("A temperata em Fahrenheit é: %d", C * 9/5 + 32);
    return 0;
}