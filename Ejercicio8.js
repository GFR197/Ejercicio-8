/**
 * Función para imprimir los elementos de un arreglo en una sola línea en la consola.
 * @param {number[]} arr El arreglo a imprimir.
 */
function imprimirArreglo(arr) {
  // .join(' ') une todos los elementos con un espacio en medio.
  console.log(arr.join(' '));
}

/**
 * Función que implementa el ordenamiento por inserción.
 * @param {number[]} arr El arreglo a ordenar.
 */
function ordenamientoPorInsercion(arr) {
  // El ciclo for principal recorre el arreglo desde el segundo elemento.
  for (let i = 1; i < arr.length; i++) {
    let valorActual = arr[i];
    let j = i - 1;

    // El ciclo while desplaza los elementos mayores hacia la derecha.
    while (j >= 0 && arr[j] > valorActual) {
      arr[j + 1] = arr[j]; // Desplaza el elemento a la derecha.
      j--; // Nos movemos una posición a la izquierda.
    }

    // Insertamos el valorActual en su posición correcta.
    arr[j + 1] = valorActual;

 
  }
  return arr; // Es común que las funciones de ordenamiento devuelvan el arreglo.
}

// Bloque principal para ejecutar el código
let numeros = [5, 2, 4, 1, 3];

console.log("Arreglo original:");
imprimirArreglo(numeros);
console.log("--------------------------");

ordenamientoPorInsercion(numeros);

console.log("--------------------------");
console.log("Arreglo ordenado:");
imprimirArreglo(numeros);