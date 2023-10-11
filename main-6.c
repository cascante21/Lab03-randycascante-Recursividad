#include <stdio.h>

void encontrarMinMax(int *arreglo, int *minimo, int *maximo, int longitud) {
    if (longitud == 0) {
        // En caso de un arreglo vacío, asignamos un valor sentinela a minimo y maximo
        *minimo = *maximo = 0;
        return;
    }

    *minimo = *maximo = arreglo[0]; // Inicializamos minimo y maximo con el primer elemento

    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i]; // Actualizamos el mínimo si encontramos un valor menor
        }
        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i]; // Actualizamos el máximo si encontramos un valor mayor
        }
    }
}

int encontrarMin(int *arreglo, int longitud) {
    if (longitud == 0) {
        return 0; // Valor sentinela en caso de arreglo vacío
    }

    int minimo = arreglo[0];

    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }

    return minimo;
}

int encontrarMax(int *arreglo, int longitud) {
    if (longitud == 0) {
        return 0; // Valor sentinela en caso de arreglo vacío
    }

    int maximo = arreglo[0];

    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }

    return maximo;
}

int main() {
    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int minimo, maximo;

    // Encuentra el mínimo y el máximo utilizando punteros
    encontrarMinMax(arreglo, &minimo, &maximo, longitud);

    printf("Mínimo: %d\n", minimo);
    printf("Máximo: %d\n", maximo);

    // Encuentra el mínimo utilizando una función aparte
    int min = encontrarMin(arreglo, longitud);
    printf("Mínimo (usando función aparte): %d\n", min);

    // Encuentra el máximo utilizando una función aparte
    int max = encontrarMax(arreglo, longitud);
    printf("Máximo (usando función aparte): %d\n", max);

    return 0;
}
