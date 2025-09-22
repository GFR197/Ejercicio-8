import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Ejercicio8 {

    /**
     * Método para imprimir los elementos de una lista en una sola línea.
     * @param arr La lista de enteros a imprimir.
     */
    public static void imprimirLista(List<Integer> arr) {
        // Recorremos la lista para imprimir cada elemento.
        for (int i = 0; i < arr.size(); i++) {
            System.out.print(arr.get(i) + " ");
        }
        System.out.println(); // Salto de línea al final.
    }

    /**
     * Método que implementa el ordenamiento por inserción.
     * @param arr La lista de enteros a ordenar.
     */
    public static void ordenamientoPorInsercion(List<Integer> arr) {
        // El ciclo for principal recorre la lista desde el segundo elemento.
        for (int i = 1; i < arr.size(); i++) {
            int valorActual = arr.get(i);
            int j = i - 1;

            // El ciclo while desplaza los elementos mayores hacia la derecha.
            while (j >= 0 && arr.get(j) > valorActual) {
                arr.set(j + 1, arr.get(j)); // Desplaza el elemento.
                j--;
            }

            //  Insertamos el valorActual en su posición correcta.
            arr.set(j + 1, valorActual);

        }
    }
}