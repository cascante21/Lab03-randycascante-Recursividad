# Lab03-randycascante-Recursividad+
#A continuación, mostramos el código en lenguaje C para este laboratorio
def busqueda_lineal(arreglo, valor):
    for i in range(len(arreglo)):
        if arreglo[i] == valor:
            return i
    return -1  # Valor no encontrado

def busqueda_binaria_iterativa(arreglo, valor):
    izquierda, derecha = 0, len(arreglo) - 1
    while izquierda <= derecha:
        medio = (izquierda + derecha) // 2
        if arreglo[medio] == valor:
            return medio
        elif arreglo[medio] < valor:
            izquierda = medio + 1
        else:
            derecha = medio - 1
    return -1  # Valor no encontrado

def busqueda_binaria_recursiva(arreglo, valor, izquierda, derecha):
    if izquierda > derecha:
        return -1  # Valor no encontrado
    medio = (izquierda + derecha) // 2
    if arreglo[medio] == valor:
        return medio
    elif arreglo[medio] < valor:
        return busqueda_binaria_recursiva(arreglo, valor, medio + 1, derecha)
    else:
        return busqueda_binaria_recursiva(arreglo, valor, izquierda, medio - 1)

# Arreglo ordenado
arreglo = [2, 4, 6, 23, 56, 79]

# Pedir al usuario un valor entero
valor = int(input("Ingrese un valor entero: "))

# Búsqueda lineal
posicion_lineal = busqueda_lineal(arreglo, valor)
if posicion_line
