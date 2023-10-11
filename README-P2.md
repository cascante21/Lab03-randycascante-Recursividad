# Informe - Búsqueda en Arreglo Ordenado

Este informe describe un programa en C que realiza búsquedas en un arreglo ordenado. El programa cumple con los siguientes requisitos:

1. Realiza una búsqueda lineal en el arreglo.
2. Realiza una búsqueda binaria iterativa en el arreglo.
3. Realiza una búsqueda binaria recursiva en el arreglo.

## Descripción del Código

### Función `linearSearch`

La función `linearSearch` recibe un arreglo `arr`, su longitud `n`, y un valor objetivo `target`. Realiza una búsqueda lineal en el arreglo para encontrar el valor objetivo. Si el valor se encuentra, la función retorna la posición en la que se encontró. Si el valor no se encuentra, la función retorna -1.

### Función `binarySearchIterative`

La función `binarySearchIterative` recibe un arreglo `arr`, su longitud `n`, y un valor objetivo `target`. Realiza una búsqueda binaria iterativa en el arreglo para encontrar el valor objetivo. Si el valor se encuentra, la función retorna la posición en la que se encontró. Si el valor no se encuentra, la función retorna -1.

### Función `binarySearchRecursive`

La función `binarySearchRecursive` recibe un arreglo `arr`, dos índices `left` y `right`, y un valor objetivo `target`. Realiza una búsqueda binaria recursiva en el arreglo para encontrar el valor objetivo. Si el valor se encuentra, la función retorna la posición en la que se encontró. Si el valor no se encuentra, la función retorna -1.

### Función `main`

La función `main` inicia la ejecución del programa. En esta función:

- Se declara un arreglo `arr` que se supone está ordenado.
- Se calcula la longitud del arreglo.
- Se solicita al usuario ingresar un valor entero como objetivo de búsqueda.
- Se llama a las tres funciones de búsqueda para buscar el valor ingresado.
- Se muestra el resultado de cada búsqueda en la salida estándar, indicando si se encontró el valor y su posición, o si no se encontró.

## Conclusión

El programa proporciona tres métodos diferentes para buscar un valor en un arreglo ordenado: búsqueda lineal, búsqueda binaria iterativa y búsqueda binaria recursiva. Estas técnicas son útiles en la búsqueda eficiente de elementos en grandes conjuntos de datos ordenados. Cada función de búsqueda devuelve la posición del valor si se encuentra o informa que el valor no está presente. La elección del método de búsqueda depende de la eficiencia y el ordenamiento del arreglo.

Este programa es útil para realizar búsquedas eficientes en arreglos ordenados, lo que puede ser importante en diversas aplicaciones informáticas.
