/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ 
    int numero;
    printf("Informe um numero inteiro: \n");
    scanf("%d", &numero);
    if (numero>0) {
        printf("%d é positivo. \n", numero);
    }
    else if (numero==0) {
        printf("%d é zero. \n", numero);
    }
    else {
        printf("%d é negativo. \n", numero);
    }
    return 0;
}