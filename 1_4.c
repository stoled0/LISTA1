/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    float raio;
    printf("Digite o raio de um circulo: \n");
    scanf("%f", &raio);
    printf("A area do circulo é %f", M_PI * pow(raio, 2));
    return 0;
}