#include <stdio.h>
#include <string.h>

int main(){
    // vetor de caracteres (string) com 100 posicoes (tamanho total do array)
    // a msg so pega 16 posicoes + \0,ou seja, 17 no total e as outras posicoes sao zeradas pelo compilador com \0
    char mensagem[100] = "Hello, world! :)"; // o compilador ja botou o \0 no final

    // aq o tamanho do array se refere ao tamanho da msg + \0
    char outra_mensagem[] = "Ola, mundo! :)"; // o compilador ja botou o \0 no final

    // TAMANHOS DE STRINGS -------------------------------------------

    char ao1[] = "Alo"; // 3 + \0
    char ao2[] = "Alô"; // 4 + \0

    // strlen() conta o nº de caracteres ATE O \0, mas ele NAO É incluido na contagem
    // basicamente ele conta tds os caracteres dentro das aspas, incluindo os espaços, vírgulas, ACENTOS, pontuação, 
    // so nao contar o terminador \0
    int tamanho1 = strlen(mensagem); // 16
    int tamanho2 = strlen(outra_mensagem); // 15
    int tamanho_ao1 = strlen(ao1); // 3
    int tamanho_ao2 = strlen(ao2); // 4


    // sizeof() conta o tamanho TOTAL do array, ou seja, todas as posicoes alocadas na memoria
    int tamanho_array1 = sizeof(mensagem); // vai dar 100, msm que a mensagemem si tenha 16 caracteres
    int tamanho_array2 = sizeof(outra_mensagem); // vai dar 16, pq n foi denfinido o tamanho do array, 
                                                // entao o compilador aloca o tamanho exato
    int tamanho_array_ao1 = sizeof(ao1); // 4
    int tamanho_array_ao2 = sizeof(ao2); // 5


    // printf("%s\n", mensagem);
    printf("- Usando o strlen():\n");
    printf("Tamanho da mensagem 1 '%s' => %d\n", mensagem, tamanho1);
    printf("Tamanho da mensagem 2 '%s' => %d\n", outra_mensagem, tamanho2);
    printf("Tamanho da string 1 '%s' => %d\n", ao1, tamanho_ao1);
    printf("Tamanho da string 2 '%s' => %d\n\n", ao2, tamanho_ao2);

    printf("- Usando o sizeof():\n");
    printf("Tamanho do array mensagem 1 => %d\n", tamanho_array1);
    printf("Tamanho do array mensagem 2 => %d\n", tamanho_array2);
    printf("Tamanho do array string 1 => %d\n", tamanho_array_ao1);
    printf("Tamanho do array string 2 => %d\n\n\n", tamanho_array_ao2);

    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome); // o scanf le a string ATE o primeiro espaco, ent se eu digitar "Ana Luiza" ele so vai ler "Ana"
    printf("Ferrou, %s!\n", nome);

    return 0;
}