//: Funzione che calcola la potenza di un numero
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

// Funzione che calcola la potenza
int potenza(int base, int esponente) {
    int risultato = 1;  // Inizializziamo il risultato a 1
    for (int i = 0; i < esponente; i++) {
        risultato *= base;  // Moltiplichiamo il risultato per la base, esponente volte
    }
    return risultato;  // Restituiamo il risultato finale
}

int main() {
    int base, esponente;

    // Chiediamo all'utente di inserire la base e l'esponente
    printf("Inserisci la base: ");
    scanf("%d", &base);
    printf("Inserisci l'esponente: ");
    scanf("%d", &esponente);

    // Chiamiamo la funzione potenza
    int risultato = potenza(base, esponente);

    // Mostriamo il risultato
    printf("La potenza di %d elevato a %d e: %d\n", base, esponente, risultato);

    return 0;
}
