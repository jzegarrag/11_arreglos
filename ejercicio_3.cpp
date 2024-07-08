#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Dia {
    string nombre;
    double temp_min;
    double temp_max;
};

int main() {
    const int DIAS_SEMANA = 7;
    vector<Dia> semana(DIAS_SEMANA);
    string nombres_dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

    for (int i = 0; i < DIAS_SEMANA; ++i) {
        semana[i].nombre = nombres_dias[i];
        cout << "Ingrese la temperatura minima del " << semana[i].nombre << ": ";
        cin >> semana[i].temp_min;
        cout << "Ingrese la temperatura maxima del " << semana[i].nombre << ": ";
        cin >> semana[i].temp_max;
    }

    cout << "\nTemperatura media de cada dia:\n";
    for (const auto& dia : semana) {
        double temp_media = (dia.temp_min + dia.temp_max) / 2.0;
        cout << dia.nombre << ": " << temp_media << "C\n";
    }

    Dia dia_menor_temp = semana[0];
    for (const auto& dia : semana) {
        if (dia.temp_min < dia_menor_temp.temp_min) {
            dia_menor_temp = dia;
        }
    }
    cout << "\nEl dia con la menor temperatura es " << dia_menor_temp.nombre << " con " << dia_menor_temp.temp_min << "C\n";

    double temp_buscar;
    cout << "\nIngrese una temperatura maxima para buscar: ";
    cin >> temp_buscar;

    bool encontrado = false;
    cout << "Dias con temperatura maxima de " << temp_buscar << "C:\n";
    for (const auto& dia : semana) {
        if (dia.temp_max == temp_buscar) {
            cout << dia.nombre << "\n";
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron dias con esa temperatura maxima.\n";
    }

    return 0;
}
