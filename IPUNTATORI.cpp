//Un puntatore è come una mappa che ti dice dove si trova la scatola in memoria. Invece di memorizzare direttamente un numero o una parolA.
// il puntatore memorizza l'indirizzo della scatola.
#include <iostream>
#include <stdio.h>

    int main() {
        int a = 10;  // Una variabile normale, a è una variabile che contiene il valore 10.
        int* p;      // Un puntatore a int (cioè un puntatore a una variabile int)
        //p è un puntatore che memorizza l'indirizzo di a.

        p = &a;  // Assegniamo al puntatore l'indirizzo di memoria di a.
        //&a dà l'indirizzo di memoria di a, e lo mettiamo nel puntatore p
        printf("Valore di a: %d\n", a);     // Stampa: 10
        printf("Valore tramite puntatore: %d\n", *p);  // Stampa: 10

        return 0;
    }
    //Stringhe in C come Puntatori
    //le stringhe sono in realtà array di caratteri.
    // Ma, siccome le stringhe sono solo una sequenza di caratteri, quando usiamo una stringa in C,
    // stiamo usando un puntatore al primo carattere della stringa.
#include <stdio.h>

    int main() {
        char str[] = "Ciao";  // Array di caratteri CHE contiene i caratteri C, i, a, o, 
        //e il carattere speciale \0 (fine stringa).
        // Per accedere ai caratteri, usiamo l'indice (come un array normale).

        // Accediamo ai caratteri con l'array
        printf("Primo carattere: %c\n", str[0]);  // str è un puntatore che punta al primo carattere della stringa "Ciao"
        printf("Secondo carattere: %c\n", str[1]);  //*str accede al primo carattere('C'),
        //mentre* (str + 1) accede al secondo carattere('i'),
        // spostando il puntatore di una posizione avanti.

        return 0;
    }

    //Manipolare una Stringa con un Puntatore

    int main() {
        char* str = "HEY";  // Stringa come puntatore

        // str[0] = 'B';  // ERRORE! Non puoi modificare una stringa costante!

        printf("Stringa non modificabile: %s\n", str);

        return 0;
    }

    //Stringhe e Funzioni

    //Le stringhe vengono passate come puntatori alle funzioni,
    // quindi puoi manipolarle direttamente all'interno della funzione.

    void stampaStringa(char* str) {
        printf("La stringa è: %s\n", str);
    }

    int main() {
        char* str = "Ciao";
        stampaStringa(str);  // Passiamo la stringa alla funzione
        //La funzione stampaStringa riceve un puntatore alla stringa, e quando chiamiamo la funzione,
        // le diamo l'indirizzo di memoria della stringa str.
        return 0;
    }
//Puntatori: sono variabili che contengono indirizzi di memoria.
// -->Usando un puntatore, puoi accedere
// e modificare direttamente i valori che si trovano in altre posizioni di memoria.

//Stringhe: sono in realtà array di caratteri.
// Quando usi una stringa in C, stai usando un puntatore al primo carattere.

//Modifica delle stringhe : se una stringa è dichiarata come array di caratteri, puoi modificarla.
/*Se è dichiarata come puntatore a una stringa letterale--->
 NON puoi modificarla perché è in memoria di sola lettura.*/

