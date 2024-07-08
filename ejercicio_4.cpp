#include <iostream>
#include <vector>
using namespace std;

vector<int> generarMultiplos(int tamano, int numero) {
    vector<int> arreglo;
    for (int i = 1; i <= tamano; ++i) {
        arreglo.push_back(numero * i);
    }
    return arreglo;
}

int main() {
    int tamano;
    int numero;

    cout << "Ingresa el limite del arreglo: ";
    cin >> tamano;

    cout << "Ingresa el numero para generar sus multiplos: ";
    cin >> numero;

    vector<int> multiplos = generarMultiplos(tamano, numero);

    cout << "El arreglo de multiplos es: ";
    for (int i = 0; i < multiplos.size(); ++i) {
        cout << multiplos[i] << " ";
    }
    cout << endl;

    return 0;
}
