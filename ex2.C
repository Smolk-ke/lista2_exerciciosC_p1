/*2. Faça um programa que leia 2 números, calcule a potência quadrada de cada
número, e depois compare qual deles é maior e imprima na tela*/
#include <stdio.h>

int main(){
    float num1, num2;
    float quadrado1, quadrado2;
    printf("Informe o primeiro valor: ");
    scanf("%f", &num1);
    printf("Informe o primeiro valor: ");
    scanf("%f", &num2);

    quadrado1 = num1 * num1;
    quadrado2 = num2 * num2;
    if (quadrado1>quadrado2){
        printf("O quadrado do primeiro valor e maior que o quadrado do segundo.\n");
    }else{
        printf("O quadrado do segundo valor e maior que o quadrado do primeiro.\n");
    }
    return 0;
}