/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ 
    int idade;
    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    if (idade >= 0 && idade <= 11){
        printf("%d é criança. \n", idade);
    }
    else if (idade >= 12 && idade <= 17){
        printf("%d é adolescente. \n", idade);
    }
    else if (idade >= 18 && idade <= 59){
        printf("%d é adulto. \n", idade);
    }
    else if (idade >= 60){
        printf("%d é idoso. \n", idade);
    }
    return 0;
}