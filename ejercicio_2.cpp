#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    vector<int> numeros(n);
    vector<int> pares;
	vector<int> impares;

    // Leer los números y clasificarlos en pares e impares
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        if (numeros[i] % 2 == 0) {
            pares.push_back(numeros[i]);
        } else {
            impares.push_back(numeros[i]);
        }
    }

    // Mostrar los elementos pares
    cout << "\nElementos pares: ";
    for (int num : pares) {
        std::cout << num << " ";
    }
	cout << std::endl;

    // Mostrar los elementos impares
    cout << "\nElementos impares: ";
    for (int num : impares) {
        std::cout << num << " ";
    }
    cout << endl;

    return 0;
}

