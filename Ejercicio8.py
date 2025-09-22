def imprimir_lista(lista):
    # Función para imprimir los elementos de una lista en una sola línea.
    for elemento in lista:
        print(elemento, end=" ")
    print() # Imprime un salto de línea al final

def ordenamiento_por_insercion(lista):
    # Función que implementa el ordenamiento por inserción.
    # El ciclo FOR principal recorre la lista desde el segundo elemento.
    for i in range(1, len(lista)):
        valor_actual = lista[i]
        j = i - 1

        # El ciclo WHILE desplaza los elementos mayores hacia la derecha.
        # Se ejecuta mientras no lleguemos al inicio y el elemento a la
        # izquierda sea mayor que nuestro valor_actual.
        while j >= 0 and valor_actual < lista[j]:
            lista[j + 1] = lista[j] # Desplaza el elemento a la derecha.
            j -= 1 # Nos movemos una posición a la izquierda.

        # Insertamos el valor_actual en su posición correcta.
        lista[j + 1] = valor_actual

   

# Bloque principal para ejecutar el código
if __name__ == "__main__":
    numeros = [5, 2, 4, 1, 3]

    print("Lista original: ", end="")
    imprimir_lista(numeros)
    print("--------------------------")

    ordenamiento_por_insercion(numeros)

    print("--------------------------")
    print("Lista ordenada: ", end="")
    imprimir_lista(numeros)