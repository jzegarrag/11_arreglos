#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> obtenerNombres(int cantidad) {
    vector<string> nombres;
    string nombre;
    for (int i = 0; i < cantidad; ++i) {
        cout << "Ingresa el nombre del estudiante " << i + 1 << ": ";
        cin >> nombre;
        nombres.push_back(nombre);
    }
    return nombres;
}

vector<string> encontrarComunes(const vector<string>& clase1, const vector<string>& clase2) {
    vector<string> comunes;
    for (const string& nombre : clase1) {
        if (find(clase2.begin(), clase2.end(), nombre) != clase2.end()) {
            comunes.push_back(nombre);
        }
    }
    return comunes;
}

int main() {
    int cantidadClase1, cantidadClase2;
    
    cout << "Ingresa la cantidad de estudiantes en Fundamentos de Programación: ";
    cin >> cantidadClase1;
    cout << "Ingresa la cantidad de estudiantes en Programación Gráfica: ";
    cin >> cantidadClase2;

    cout << "Ingresa los nombres de los estudiantes de Fundamentos de Programación:" << endl;
    vector<string> fundamentosProgramacion = obtenerNombres(cantidadClase1);

    cout << "Ingresa los nombres de los estudiantes de Programación Gráfica:" << endl;
    vector<string> programacionGrafica = obtenerNombres(cantidadClase2);

    vector<string> comunes = encontrarComunes(fundamentosProgramacion, programacionGrafica);

    cout << "Los estudiantes comunes en ambas clases son:" << endl;
    for (const string& nombre : comunes) {
        cout << nombre << endl;
    }
    cout << "Número total de estudiantes comunes: " << comunes.size() << endl;

    return 0;
}
