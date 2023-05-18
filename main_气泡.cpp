#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Introduce un número del 1 al 1000: ";
    cin >> size;

    // Validar que el tamaño esté en el rango
    if (size < 1 || size > 1000) {
        cout << "El número debe estar en el rango del 1 al 1000." << endl;
        return 0;
    }

    int array[size]; // Crear el array con el tamaño ingresado

    cout << "Se ha creado un array de tamaño " << size << "." << endl;

    return 0;
}
