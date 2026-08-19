#include <stdio.h>

int main (){
    int N;
    int soma = 0;
    int numeros;

    printf("Quantos numeros voce deseja somar? \n");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        printf("Digite os valores que voce quer somar: \n");
        scanf("%d", &numeros);
        soma = soma + numeros;
    }
    printf("Soma total: %d", soma);
return 0;
}