//v1=(2,5,4)
//v2=(3,2,1)
//r= V1+V2=(5,7,5)

#include <stdio.h>

void somma(const float v1[], const float v2[], float result[], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = v1[i] + v2[i];
    }
}

int main()
{
    constexpr int lunghezza = 3;
    float v1[lunghezza] = { 2, 5, 4 };
    float v2[lunghezza] = { 3, 2, 1 };
    float result[lunghezza] = { 0.0f, 0.0f, 0.0f };

    somma(v1, v2, result, lunghezza);

    for (int i = 0; i < lunghezza; i++) {
        printf("result[%d] = %f\n", i, result[i]);
    }

    return 0;
}
