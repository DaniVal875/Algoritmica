#include <iostream>
using namespace std;


unsigned long long calcularFactorial(int numero) {
    unsigned long long factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    return factorial;
}


void mostrarTablaMultiplicar(int numero) {
    int i = 1;
    do {
        cout << numero << " * " << i << " = " << numero * i << endl;
        i++;
    } while (i <= 10);
}

int main() {
    int opcion;
    
    while (true) {
        cout << "===== MENÚ PRINCIPAL =====" << endl;
        cout << "1. Calcular factorial" << endl;
        cout << "2. Mostrar tabla de multiplicar" << endl;
        cout << "3. Salir" << endl;
        cout << "Elija una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int numero;
                cout << "Ingrese un número entero positivo para calcular su factorial: ";
                cin >> numero;

                
                if (numero < 0) {
                    cout << "Por favor, ingrese un número positivo." << endl;
                } else {
                    
                    unsigned long long factorial = calcularFactorial(numero);
                    cout << "El factorial de " << numero << " es: " << factorial << endl;
                }
                break;
            }
            case 2: {
                int numero;
                cout << "Ingrese un número entero positivo para ver su tabla de multiplicar: ";
                cin >> numero;

                
                if (numero < 0) {
                    cout << "Por favor, ingrese un número positivo." << endl;
                } else {
                    
                    cout << "Tabla de multiplicar del " << numero << ":" << endl;
                    mostrarTablaMultiplicar(numero);
                }
                break;
            }
            case 3:
                cout << "Saliendo del programa." << endl;
                return 0;  
            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }

        cout << "Presione cualquier tecla para continuar..." << endl;
        cin.ignore();  
        cin.get();     
    }

    return 0;
}