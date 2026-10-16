#include <stdio.h>
#include <stdlib.h>

void main() {
    char nome[10];
    printf("Qual e o seu nome? ");
    scanf("%s", &nome);
    printf("Muito Prazer em te conhecer %s", nome );
    system("pause");
}
