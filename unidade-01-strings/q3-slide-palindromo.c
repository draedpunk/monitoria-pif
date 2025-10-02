// Crie uma função que verifica se uma palavra é um palíndromo
#include <stdio.h>
#include <string.h>

int eh_Palindromo(char str[]){
    int tamanho = strlen(str);
    for(int i=0; i <tamanho/2; i++){
        if(str[i] != str[tamanho - i -1]) return 0;
    }
    return 1;
}

int main(){
    char str[] = "casa";
    
    if(eh_Palindromo(str)){
        printf("eh palindromo!\n");
    }else{
       printf("nao eh palindromo!\n"); 
    }
    return 0;
}