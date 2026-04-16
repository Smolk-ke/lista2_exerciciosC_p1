/*3. faça um programa, que receba 4 notas de um aluno, e calcule a média, se a nota for
maior que 7, imprima que o aluno está aprovado, se for entre 5 e 7, ele está de
recuperação, se for menor que 5, ele está reprovado*/
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media;

    printf("Informe a nota na 1ª avaliacao: ");
    scanf("%f", &nota1);
    printf("Informe a nota na 2ª avaliacao: ");
    scanf("%f", &nota2);
    printf("Informe a nota na 3ª avaliacao: ");
    scanf("%f", &nota3);
    printf("Informe a nota na 4ª avaliacao: ");
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;
    if(media>7){
        printf("SITUACAO: APROVADO");
    }else if(media>5){
        printf("SITUACAO: RECUPERACAO");
    }else{
        printf("SITUACAO: REPROVADO");
    }
    return 0;
}