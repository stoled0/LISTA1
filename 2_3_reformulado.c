/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 0;
    int maior_valor = 0;
    while (i < 3) {
        int numero;
        printf("Digite 1 valor: \n");
        scanf("%d", &numero);
        if (numero > maior_valor) {
            maior_valor = numero;
        }
        i ++;
    }
    printf("O maior valor é: %d", maior_valor);
    return 0;
}