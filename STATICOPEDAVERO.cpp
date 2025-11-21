//Senza static: la variabile esiste solo dentro la funzione in cui è stata creata e "sparisce" quando la funzione finisce.
//n static: la variabile rimane anche fuori dalla funzione e conserva il suo valore tra una chiamata e l'altra. È come se fosse una scatola permanente.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

void conta() {
    static int x = 0; // La variabile x è statica
    x++;
    printf("%d\n", x);
}

int main() {
    conta(); // stampa 1
    conta(); // stampa 2
    conta(); // stampa 3
    return 0;
}

//Uso di static DENTRO la funzione
#include <stdio.h>

void incrementa() {
    static int contatore = 0;  // La variabile è statica, inizializzata solo la prima volta
    contatore++;                // Ogni volta che viene chiamata la funzione, il contatore aumenta
    printf("Contatore: %d\n", contatore);
}

int main() {
    incrementa();  // Stampa: Contatore: 1
    incrementa();  // Stampa: Contatore: 2
    incrementa();  // Stampa: Contatore: 3
    return 0;
}
//static fuori da una funzione (a livello di variabile GLOBALE
#include <stdio.h>

static int globale = 5; //variabile globale statica

void cambiaVariabile() {
    globale += 10; // LA VARIABILE GLOBALE VIENE MODIFICATA
}

int main() {
    printf("Globale prima: %d\n", globale);// stampa globale prima
    cambiaVariabile();
    printf("Globale dopo: %d\n", globale);   // Stampa: Globale dopo: 15
    return 0;
}
//Inizializzazione con valore fisso
#include <stdio.h>

void inizializzaStatico() {
    // Usa una variabile statica e inizializzala solo la prima volta
}

int main() {
    inizializzaStatico();  // Stampa: Primo valore: 10
    inizializzaStatico();  // Stampa: Secondo valore: 20
    inizializzaStatico();  // Stampa: Terzo valore: 30
    return 0;
}
//Somma tra più funzioni
#include <stdio.h>

void funzione1() {
    // Incremente una variabile statica locale
}

void funzione2() {
    // Incremente un'altra variabile statica locale
}

int main() {
    funzione1();  // Incrementa prima variabile
    funzione2();  // Incrementa seconda variabile
    // Somma i due valori e stampali
    return 0;
}
