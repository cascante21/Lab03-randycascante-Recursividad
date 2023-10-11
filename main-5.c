#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Retorna la posición si se encuentra el valor
        }
    }
    return -1; // Retorna -1 si el valor no se encuentra en el arreglo
}

int binarySearchIterative(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Retorna la posición si se encuentra el valor
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Retorna -1 si el valor no se encuentra en el arreglo
}

int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Retorna la posición si se encuentra el valor
        }

        if (arr[mid] < target) {
            return binarySearchRecursive(arr, mid + 1, right, target);
        }

        return binarySearchRecursive(arr, left, mid - 1, target);
    }

    return -1; // Retorna -1 si el valor no se encuentra en el arreglo
}

int main() {
    int arr[] = {2, 4, 6, 23, 56, 79};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Arreglo ordenado: 2, 4, 6, 23, 56, 79\n");
    printf("Ingrese un valor entero: ");
    
    int target;
    scanf("%d", &target);

    int resultLinear = linearSearch(arr, n, target);
    int resultBinaryIterative = binarySearchIterative(arr, n, target);
    int resultBinaryRecursive = binarySearchRecursive(arr, 0, n - 1, target);

    if (resultLinear != -1) {
        printf("Búsqueda lineal: %d se encuentra en la posición %d del arreglo.\n", target, resultLinear);
    } else {
        printf("Búsqueda lineal: %d no se encuentra en el arreglo.\n", target);
    }

    if (resultBinaryIterative != -1) {
        printf("Búsqueda binaria iterativa: %d se encuentra en la posición %d del arreglo.\n", target, resultBinaryIterative);
    } else {
        printf("Búsqueda binaria iterativa: %d no se encuentra en el arreglo.\n", target);
    }

    if (resultBinaryRecursive != -1) {
        printf("Búsqueda binaria recursiva: %d se encuentra en la posición %d del arreglo.\n", target, resultBinaryRecursive);
    } else {
        printf("Búsqueda binaria recursiva: %d no se encuentra en el arreglo.\n", target);
    }

    return 0;
}
