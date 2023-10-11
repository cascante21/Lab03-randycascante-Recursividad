
```markdown
# Informe - Encontrar Mínimo y Máximo en un Arreglo

Este informe describe un programa en C que se encarga de encontrar el valor mínimo y máximo en un arreglo de números enteros. El programa cumple con los siguientes requisitos:

1. Utiliza una función para encontrar el valor mínimo en el arreglo.
2. Utiliza una función para encontrar el valor máximo en el arreglo.
3. Utiliza punteros en otra función para encontrar tanto el valor mínimo como el valor máximo.

## Descripción del Código

### Función `encontrarMinMax`

La función `encontrarMinMax` recibe un arreglo, un puntero al valor mínimo (`minimo`), un puntero al valor máximo (`maximo`), y la longitud del arreglo (`longitud`). Esta función busca los valores mínimo y máximo en el arreglo. Si el arreglo está vacío, se asigna un valor sentinela a `minimo` y `maximo`. Luego, se itera a través del arreglo para encontrar los valores mínimo y máximo.

### Función `encontrarMin`

La función `encontrarMin` recibe un arreglo y su longitud. Encuentra el valor mínimo en el arreglo sin utilizar punteros. Si el arreglo está vacío, se retorna un valor sentinela. De lo contrario, se itera a través del arreglo para encontrar el valor mínimo.

### Función `encontrarMax`

La función `encontrarMax` recibe un arreglo y su longitud. Encuentra el valor máximo en el arreglo sin utilizar punteros. Si el arreglo está vacío, se retorna un valor sentinela. De lo contrario, se itera a través del arreglo para encontrar el valor máximo.

### Función `main`

La función `main` inicia la ejecución del programa. En esta función, se declara un arreglo `arreglo` con valores de ejemplo. Se calcula la longitud del arreglo y se declaran las variables `minimo` y `maximo`.

Luego, se llama a la función `encontrarMinMax` para encontrar tanto el valor mínimo como el valor máximo utilizando punteros. Se muestra el resultado en la salida estándar.

A continuación, se llama a las funciones `encontrarMin` y `encontrarMax` por separado para encontrar el valor mínimo y máximo sin punteros. Los resultados se muestran en la salida estándar.

## Conclusión

El programa proporciona tres métodos para encontrar los valores mínimo y máximo en un arreglo de números enteros. La implementación con punteros es eficiente y flexible, permitiendo obtener ambos valores en una sola llamada de función. Las otras dos funciones permiten obtener el valor mínimo y máximo por separado si es necesario.

Este programa es útil en situaciones donde es necesario determinar rápidamente los valores extremos en un conjunto de datos. 
`