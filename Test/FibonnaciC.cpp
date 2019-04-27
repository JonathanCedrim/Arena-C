#include "stdio.h"
#include "GrandBook.h";


int main() {
    int primeiroValor = 0, segundoValor = 1, it;
    int valorAuxiliar = 0;


    GrandBook bookLol ("Jonathan", "As aventuras");
    

    printf ("nome: %string", bookLol.getCourseName());

    printf("Digite o valor para ser encontrado enntre os valores de  Fibonacci: " );
    scanf("%d", &it);
    printf("\n");

    printf("Iniciando sequencia de Fibonacci: ");

    for(int i = 0; valorAuxiliar < it; i++) {
        valorAuxiliar = primeiroValor + segundoValor;
        primeiroValor = segundoValor;
        segundoValor = valorAuxiliar;
        
        printf("%d, ", valorAuxiliar);            
    }
}