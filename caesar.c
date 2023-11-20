#include "cs50.h"
#include "ctype.h"
#include "stdio.h"
#include <stdio.h>

// Função para criptografar uma única letra
char cifraDeCesar(char letra, int chave) {
    if (isalpha(letra)) {
        char base = isupper(letra) ? 'A' : 'a';
        return (letra - base + chave) % 26 + base;
    }
    return letra;
}

// Função para criptografar uma string usando a cifra de César
void criptografarCesar(char mensagem[], int chave) {
    for (int i = 0; mensagem[i] != '\0'; i++) {
        mensagem[i] = cifraDeCesar(mensagem[i], chave);
    }
}

int main() {
    // Mensagem a ser criptografada
    char mensagem[] = "hello world";

    // Defina a chave (número de posições para deslocar)
    int chave = 3;

    // Criptografe a mensagem
    criptografarCesar(mensagem, chave);

    // Imprima a mensagem criptografada
    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}
