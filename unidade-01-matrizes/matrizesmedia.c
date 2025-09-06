#include <stdio.h>

int main(){

    double matriz_notas_alunos[2][10];
    double media_ponderada[10];
    double peso1 = 7.0, peso2 = 3.0;

    for(int i=0; i < 10; i++){ // aqui coloca as duas nota pra cada um dos DEZ ALUNOS
        printf("Primeira nota do aluno %d:\n", i+1);
        scanf("%lf", &matriz_notas_alunos[0][i]); // linha 0 referente à primeira nota
        printf("Segunda nota do aluno %d:\n", i+1);
        scanf("%lf", &matriz_notas_alunos[1][i]); // linha 1 referente à segunda nota
    }
    printf("OKnotas\n\n");

    for(int i=0; i<10;i++){
        // aqui eu pego a nota 1 (na linha0) e a nota 2 (na linha 1) e faço o calculo das medias ponderadas pra cada aluno
        double calculo = (matriz_notas_alunos[0][i] * peso1 + matriz_notas_alunos[1][i] * peso2)/(peso1 + peso2);
        media_ponderada[i] = calculo; // agr a matriz que eu criei p armazenar as medias vai receber esses valores dos DEZ alunos
    }
    printf("ok medias\n\n");

    for(int i=0; i<10; i++){ // verificação das medias de caad aluno
        if(media_ponderada[i] >= 5.0){ // esse %.2lf é so pra mostrar 2 casas decimais
            printf("aluno %d aprovado por media %.2lf\n", i+1, media_ponderada[i]);
        } else{
            printf("aluno %d reprovado por media %.2lf\n", i+1, media_ponderada[i]);
        }
    }


    return 0;
}