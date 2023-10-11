# Lab03-randycascante-Recursividad+
#A continuación, mostramos el código en lenguaje C para este laboratorio:

#include <stdio.h>
int busquedaLineal(int arreglo[], int tam, int valor) {
    for (int i = 0; i < tam; i++) {
        if (arreglo[i] == valor) {
            return i;
        }
    }
    return -1;  // Valor no encontrado
}

int busquedaBinariaIterativa(int arreglo[], int tam, int valor) {
    int izquierda = 0, derecha = tam - 1;
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (arreglo[medio] == valor) {
            return medio;
        }
        if (arreglo[medio] < valor) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1;  // Valor no encontrado
}

int busquedaBinariaRecursiva(int arreglo[], int izquierda, int derecha, int valor) {
    if (izquierda > derecha) {
        return -1;  // Valor no encontrado
    }
    int medio = izquierda + (derecha - izquierda) / 2;
    if (arreglo[medio] == valor) {
        return medio;
    }
    if (arreglo[medio] < valor) {
        return busquedaBinariaRecursiva(arreglo, medio + 1, derecha, valor);
    } else {
        return busquedaBinariaRecursiva(arreglo, izquierda, medio - 1, valor);
    }
}

int main() {
    int arreglo[] = {2, 4, 6, 23, 56, 79};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Ingrese un valor entero: ");
    int valor;
    scanf("%d", &valor);

    int posicionLineal = busquedaLineal(arreglo, tam, valor);
    if (posicionLineal != -1) {
        printf("La posición del valor %d (búsqueda lineal) es: %d\n", valor, posicionLineal);
    } else {
        printf("El valor no fue encontrado (búsqueda lineal)\n");
    }

    int posicionBinariaIterativa = busquedaBinariaIterativa(arreglo, tam, valor);
    if (posicionBinariaIterativa != -1) {
        printf("La posición del valor %d (búsqueda binaria iterativa) es: %d\n", valor, posicionBinariaIterativa);
    } else {
        printf("El valor no fue encontrado (búsqueda binaria iterativa)\n");
    }

    int posicionBinariaRecursiva = busquedaBinariaRecursiva(arreglo, 0, tam - 1, valor);
    if (posicionBinariaRecursiva != -1) {
        printf("La posición del valor %d (búsqueda binaria recursiva) es: %d\n", valor, posicionBinariaRecursiva);
    } else {
        printf("El valor no fue encontrado (búsqueda binaria recursiva)\n");
    }

    return 0;
}
