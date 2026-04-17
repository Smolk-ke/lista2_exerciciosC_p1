/*4. Faça um programa, que calcula as 6 operações, soma, multiplicação, divisão,
subtração, potência quadrada e raiz quadrada usando o método do polinômio de
newton, trate o caso de divisão por 0, e se a raiz for negativa, deve informar que não
existe raiz real(sem usar biblioteca), o usuário deve informar os 2 números e
escolher qual operação ele quer fazer
Para o método do polinômio de newton use as equações a seguir, após o método, o
X use um número inteiro, siga os 4 passos na ordem, e depois imprima x como um número
inteiro*/ 
#include <stdio.h>

int main(){
    int operacao;
    float num1, num2, x, resultado;

    printf("Informe a operacao que deseja realizar:\n");
    printf("(1) Soma\n");
    printf("(2) Subtracao\n");
    printf("(3) Multiplicacao\n");
    printf("(4) Divisao\n");
    printf("(5) Quadrado\n");
    printf("(6) Raiz Quadrada\n");
    scanf("%d", &operacao);

    switch(operacao){
        case 1:
            printf("Informe um valor: ");
            scanf("%f", &num1);
            printf("Informe outro valor: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            printf("Informe um valor: ");
            scanf("%f", &num1);
            printf("Informe outro valor: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            printf("Informe um valor: ");
            scanf("%f", &num1);
            printf("Informe um valor: ");
            scanf("%f", &num2);
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            printf("Informe o dividendo: ");
            scanf("%f", &num1);
            printf("Informe o divisor: ");
            scanf("%f", &num2);

            if (num2 == 0) {
                printf("Erro: divisao por zero\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }
            break;

        case 5:
            printf("Informe um numero: ");
            scanf("%f", &num1);
            resultado = num1 * num1;
            printf("Resultado: %.2f\n", resultado);
            break;
        
        case 6:
            printf("Informe um numero: ");
            scanf("%f", &num1);
            if(num1>0){
                x = num1;
                for (int i=0; i<=100; i++){
                    x = (x+num1/x)/2;
                }
                resultado = x;
                printf("Resultado: %.2f\n", resultado);
            }else{
                printf("A raiz não se encontra no conjunto dos numeros reais.\n");
            }
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}