using System;
using System.Collections.Generic; // para usar List<T>

class Program
{
    /**
     * Método para imprimir los elementos de una lista en una sola línea.
     * @param arr La lista de enteros a imprimir.
     */
    static void ImprimirLista(List<int> arr)
    {
        // String.Join une los elementos con un espacio y crea una sola cadena.
        Console.WriteLine(string.Join(" ", arr));
    }

    /**
     * Método que implementa el ordenamiento por inserción.
     * @param arr La lista de enteros a ordenar.
     */
    static void OrdenamientoPorInsercion(List<int> arr)
    {
        // El ciclo for principal recorre la lista desde el segundo elemento.
        for (int i = 1; i < arr.Count; i++)
        {
            int valorActual = arr[i];
            int j = i - 1;

            // El ciclo while desplaza los elementos mayores hacia la derecha.
            while (j >= 0 && arr[j] > valorActual)
            {
                arr[j + 1] = arr[j]; // Desplaza el elemento.
                j--;
            }

            // Insertamos el valorActual en su posición correcta.
            arr[j + 1] = valorActual;

        }
    }

    /**
     * El punto de entrada principal del programa.
     */
    static void Main(string[] args)
    {

        List<int> numeros = new List<int> { 5, 2, 4, 1, 3 };

        Console.WriteLine("Lista original:");
        ImprimirLista(numeros);
    }
}