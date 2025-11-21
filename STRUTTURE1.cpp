//Le strutture in C-->

/*Una struttura in C è un contenitore che può tenere diversi tipi di dati.
Immagina una scatola in cui puoi mettere numeri, parole o qualsiasi altra cosa
insieme.*/
#include <iostream>
#include <stdio.h>

// Definiamo una struttura chiamata 'Persona'
struct Persona {
    char nome[50];  // Un array di caratteri per memorizzare il nome (fino a 49 caratteri + 1 per '\0')
    int eta;        // Un intero per memorizzare l'età
};

int main() {
    // Creiamo una variabile 'p1' di tipo 'struct Persona'
    struct Persona p1;

    // Assegniamo il valore 25 alla variabile 'eta' di 'p1'
    p1.eta = 25;

    // Assegniamo il nome "Marco" alla variabile 'nome' di 'p1'
    // snprintf è usato per copiare la stringa in 'nome' in modo sicuro
    snprintf(p1.nome, sizeof(p1.nome), "Marco");

    // Stampa il nome che si trova dentro la struttura 'p1'
    printf("Nome: %s\n", p1.nome);  // %s serve per stampare una stringa

    // Stampa l'età che si trova dentro la struttura 'p1'
    printf("Età: %d\n", p1.eta);  // %d serve per stampare un intero

    return 0;  // Fine del programma
}
/*Struttura: È un tipo personalizzato che può contenere variabili di tipi diversi
(nel nostro caso,un char[] per il nome e un int per l'età).

Accesso ai membri: Usando il punto (.), 
accediamo ai membri della struttura (ad esempio, p1.nome e p1.eta).

Stampa: Usando printf, stampiamo le informazioni memorizzate nella struttura.*/

