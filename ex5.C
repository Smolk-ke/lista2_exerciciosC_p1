/*5. Faça um programa que receba um número e verifique se um número é divisível por
3, 5 e por 7 ao mesmo tempo, se não for, divisível por algum deles, diga qual é*/
#include <stdio.h>

int main(){
    int valor;
    
    printf("Informe um numero: ");
    scanf("%d", &valor);

    if((valor % 3 == 0) && (valor % 5 == 0) && (valor % 7 == 0)){
        printf("O valor e divisivel por 3, 5 e 7.\n");
    } else {
        int divisivel = 0;

        if(valor % 3 == 0){
            printf("Divisivel por 3\n");
            divisivel = 1;
        }
        if(valor % 5 == 0){
            printf("Divisivel por 5\n");
            divisivel = 1;
        }
        if(valor % 7 == 0){
            printf("Divisivel por 7\n");
            divisivel = 1;
        }
        //Fiz assim por teste, por isso ta sem else e com negacao, ok?
        if(!divisivel){
            printf("Nao e divisivel por 3, 5 nem 7\n");
        }
    }
    return 0;
}