// LE FUNZIONI :-:  (^--^*)

#include <iostream>
#include <stdio.h>
//Le funzioni DEVONO SEMPRE essere definite PRIMA di essere utilizzate
//possono ricevere qualsiasi tipo di parametro 

// Funzione che somma due numeri
    int somma(int a, int b) {
        return a + b;
    }

    int main() {
        int risultato = somma(3, 4); // chiamata della funzione somma
        printf("La somma è: %d\n", risultato);
        return 0;
    }


    // Funzione che restituisce il quadrato di un numero
    int quadrato(int x) {
        return x * x;  // Moltiplica x per se stesso
    }

    int main() {
        int numero = 5;
        int risultato = quadrato(numero);  // Chiama la funzione quadrato
        printf("Il quadrato di %d è %d\n", numero, risultato);
        return 0;
    
        //pari o dispari
#include <stdio.h>

// Funzione che verifica se un numero è pari (restituisce 1) o dispari (restituisce 0)
        int pariDispari(int num) {
            if (num % 2 == 0)  // Se il numero è divisibile per 2
                return 1;       // È pari
            else
                return 0;       // È dispari
        }

        int main() {
            int numero = 7;
            if (pariDispari(numero)) {  // Chiama la funzione pariDispari
                printf("%d è un numero pari.\n", numero);
            }
            else {
                printf("%d è un numero dispari.\n", numero);
            }
            return 0;
        }
//somma di un array di numeri
        int sommaArray(int arr[], int n){
            int somma = 0;
            for (int i = 0; i < n; i++) {
                somma += arr[i]; // Aggiunge ogni elemento alla somma
            }
            int main() {
                int numeri[] = { 1,2,3,4,5 };
                int n = sizeoff(numeri)sizeof(numeri[0])//Calcola il numero di elementi nell'array
                    int risultato = sommaArray(numeri, n); //Chiama la funzione sommaArray
                printf("La somma dell'array è: %d\n", risultato);
                return 0;
            }

