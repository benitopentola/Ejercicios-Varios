#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime> // For time() function

using namespace std;

int main() {
    int size;
    cout << "请输入一个1到1000之间的数字："; // Introduce un número entre 1 y 1000:
    cin >> size;

    // Validate that the size is within range (Complicado de leer si son demasiados numeros)
    if (size < 1 || size > 1000) {
        cout << "数字必须在1到1000的范围内。" << endl; // El número debe estar en el rango de 1 a 1000.
        return 0;
    }

    int array[size]; // Create the array with the entered size (¿Igual sería mejor presentarlo en lineas de 10)

    // Generate random numbers and store them in the array (¿Varios arrays?)
    srand(time(NULL)); // Initialize the random number generator seed (Investigar si hay metodos de generar aleatorio)

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 1000 + 1; // Generate a random number between 1 and 1000 
    }

    // Print the generated random numbers (Buscar como imprimir de forma más legible)
    cout << "生成的随机数字：" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    // Bubble Sort algorithm 
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap the elements 
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Print the sorted numbers (Imprimir los números ordenados)
    cout << "排序后的数字：" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    return 0;
}
