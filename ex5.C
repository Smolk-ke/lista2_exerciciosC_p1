/*5. Faça um programa que receba um número e verifique se um número é divisível por
3, 5 e por 7 ao mesmo tempo, se não for, divisível por algum deles, diga qual é*/
#include <stdio.h>

int main(){
    int valor;
    
    printf("Informe um numero:");
    scanf("%d", &valor);

    if((valor%3==0)&&(valor%5==0)&&(valor%7==0)){
        printf("O valor e divisivel por 3, 5 e 7.");
    }else if((valor%3==0)&&(valor%5==0)&&(valor%7!=0)){
        printf("O valor nao e divisivel por 7.");
    }else if((valor%3==0)&&(valor%5!=0)&&(valor%7==0)){
        printf("O valor nao e divisivel por 5.");
    }else if((valor%3!=0)&&(valor%5==0)&&(valor%7==0)){
        printf("O valor nao e divisivel por 3.");
    }else if((valor%3==0)&&(valor%5!=0)&&(valor%7!=0)){
        printf("O valor nao e divisivel por 5 e 7.");
    }else if((valor%3!=0)&&(valor%5!=0)&&(valor%7==0)){
        printf("O valor nao e divisivel por 5 e 3.");
    }else if((valor%3!=0)&&(valor%5==0)&&(valor%7!=0)){
        printf("O valor nao e divisivel por 3 e 7.");
    }else{
        printf("O valor nao e divisivel por 3, 5 e 7");
    }
    return 0;
}