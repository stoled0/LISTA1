#include <stdio.h>

int main () {
    int N;
    int lista_de_pares = 0;

    printf("Digite um numero: \n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i %2 == 0)
            lista_de_pares++;
    }
    printf("Os numeros pares sao: %d", lista_de_pares);

return 0;
}