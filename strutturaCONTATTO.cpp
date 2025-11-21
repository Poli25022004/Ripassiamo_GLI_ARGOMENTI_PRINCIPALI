//Le strutture in C-->

/*Una struttura in C è un contenitore che può tenere diversi tipi di dati.
Immagina una scatola in cui puoi mettere numeri, parole o qualsiasi altra cosa
insieme.*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
//esercizio d'esempio
#include <stdio.h>

// Definiamo la struttura per un contatto
struct Contatto {
    char nome[50];    // Nome della persona
    char numero[20];  // Numero di telefono
    int eta;          // Età della persona
};

int main() {
    // Creiamo una variabile 'contatto' di tipo 'struct Contatto'
    struct Contatto c1;

    // Chiediamo all'utente di inserire i dati
    printf("Inserisci il nome: ");
    fgets(c1.nome, sizeof(c1.nome), stdin);  // Legge il nome (con spazi)

    printf("Inserisci il numero di telefono: ");
    fgets(c1.numero, sizeof(c1.numero), stdin);  // Legge il numero di telefono

    printf("Inserisci l'eta: ");
    scanf("%d", &c1.eta);  // Legge l'età

    // Stampa i dati inseriti
    printf("\n--- Dati del contatto ---\n");
    printf("Nome: %s", c1.nome);     // Stampa il nome
    printf("Numero di telefono: %s", c1.numero); // Stampa il numero
    printf("Età: %d\n", c1.eta);    // Stampa l'età

    return 0;
}

