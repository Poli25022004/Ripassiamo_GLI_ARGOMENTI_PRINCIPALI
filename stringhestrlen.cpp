#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>   // printf
#include <cstring>  // strlen, strcpy, strncpy, strcmp, strcat, strncat

int main()
{               
    // Buffer di destinazione con spazio sufficiente
    char str1[20] = "hello";
    char str2[] = "world";

    // 1) lunghezza della stringa (strlen restituisce size_t)
    size_t len = strlen(str1);
    printf("lunghezza str1: %zu\n", len);

    // 2) copia sicura: usare strncpy e garantire terminatore
    // Copia "hi" in str1 assicurandosi di non superare il buffer
    strncpy(str1, "hi", sizeof(str1) - 1);
    str1[sizeof(str1) - 1] = '\0'; // garantire terminazione
    printf("Dopo strncpy (copia di \"hi\"): %s\n", str1);

    // 3) confronto tra stringhe (strcmp)
    int cmp = strcmp(str1, str2);
    // cmp < 0 se str1 < str2, 0 se uguali, >0 se str1 > str2
    printf("strcmp result: %d\n", cmp);

    // 4) concatenazione sicura: usare strncat con spazio rimanente
    size_t spazio_rimanente = sizeof(str1) - strlen(str1) - 1; // spazio disponibile per caratteri + terminatore
    strncat(str1, str2, spazio_rimanente);
    str1[sizeof(str1) - 1] = '\0'; // difesa extra
    printf("dopo strncat: %s\n", str1);

    return 0;
}