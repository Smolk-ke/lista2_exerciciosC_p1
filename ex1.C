/*1. faça um programa que leia os 3 lados de um triângulo, diga se ele é equilátero,
isósceles ou escaleno, e calcule a área do triângulo, pode-se usar a fórmula de
heron(sem usar auxílio de nenhuma biblioteca)*/
#include <stdio.h>

int main(){
    float lado1, lado2, lado3, area;

    printf("Informe um valor: ");
    scanf("%f", &lado1);
    printf("Informe outro valor: ");
    scanf("%f", &lado2);
    printf("Informe mais um valor: ");
    scanf("%f", &lado3);

    if((lado1+lado2>lado3) && 
        (lado1+lado3>lado2) && 
        (lado2+lado3>lado1)){
        //calculo da area
        float semiperimetro = (lado1+lado2+lado3)/2;
        float s = semiperimetro;
        float N = s*(s-lado1)*(s-lado2)*(s-lado3);
        float x = N; 
        for (int i=0; i<=15; i++){
            x = (x + (N/x))/2;
        }
        area = x;

        if(lado1==lado2 && lado2==lado3){
            printf("E formado um triangulo equilatero de area %.2f\n", area);
        }else if((lado1 != lado2) && (lado2 != lado3) && (lado1 != lado3)){
            printf("E formado um triangulo escaleno de area %.2f\n", area);
        }else{
            printf("E formado um triangulo isoceles de area %.2f\n", area);
        }
    }else{
        printf("Não e possivel formar triangulo com esses valores. \n");
    }
    return 0;
}