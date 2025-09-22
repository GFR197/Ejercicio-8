#include <iostream>
#include <vector>
using namespace std;
// Función para imprimir el vector
void imprimirVector(const vector<int>& arr) {
    for (int elemento : arr) {
        cout << elemento << " ";
    }
    cout << endl;
}

// Función que implementa el ordenamiento por inserción
void ordenamientoPorInsercion(vector<int>& arr) {
    int n = arr.size();
    // El ciclo FOR principal recorre el arreglo desde el segundo elemento (índice 1)
    for (int i = 1; i < n; i++) {
        // Guardamos el valor actual que queremos insertar
        int valorActual = arr[i];
        int j = i - 1;

        // El ciclo WHILE desplaza los elementos mayores hacia la derecha
        // Se ejecuta mientras no lleguemos al inicio del arreglo Y
        // el elemento a la izquierda (arr[j]) sea mayor que nuestro valorActual.
        while (j >= 0 && arr[j] > valorActual) {
            arr[j + 1] = arr[j]; // Desplaza el elemento mayor a la derecha
            j = j - 1;           // Nos movemos una posición a la izquierda
        }
        
        // Insertamos el valorActual en su posición correcta
        arr[j + 1] = valorActual;

    
    }
}

int main() {
    vector<int> numeros = {5, 2, 4, 1, 3};

    cout << "Vector original: ";
    imprimirVector(numeros);
    cout << "--------------------------" << endl;

    ordenamientoPorInsercion(numeros);

    cout << "--------------------------" << endl;
    cout << "Vector ordenado: ";
    imprimirVector(numeros);

    return 0;
}