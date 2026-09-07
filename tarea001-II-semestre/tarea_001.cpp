// ESTACIÓN METEOROLÓGICA // 

#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std;

class EstacionMeteorologica
{
private:
    string nombre;
    vector<double> temperaturas; 

public: 
    // Constructores 
    EstacionMeteorologica(string nombre) {
        this->nombre = nombre;
    }
    
    EstacionMeteorologica() {
        this->nombre = "Estacion sin nombre";
    }

    // Métodos 
    bool registrarLectura(double temperatura) { 
        if (temperatura >= -50 && temperatura <= 60) {
            temperaturas.push_back(temperatura); 
            return true;
        }
        return false;
    }

    double promedio() const {
        if (temperaturas.empty()) { // Está vacío?
            return 0.0;
        }
        double suma = 0.0;
        for (double temperatura : temperaturas) {
            suma += temperatura;
        }

        return suma / temperaturas.size(); // Promedio de temperaturas
    }

    double maxima() const {
        if (temperaturas.empty()) {
            return 0.0;
        }

        return *max_element(temperaturas.begin(), temperaturas.end());
    }

    // Getters
    string getNombreEstacion() const {
        return nombre;
    } 
    
    int getCantidadLecturas() const {
        return temperaturas.size();
    }
}; 

int main() {
    string nombreEstacion;
    getline(cin, nombreEstacion);

    EstacionMeteorologica estacion(nombreEstacion);

    int M;
    cin >> M; // Lee la cantidad de entradas

    string comando;
    for (int i = 0; i < M; ++i) {
        cin >> comando;

        if (comando == "registrar") {
            double temperatura;
            cin >> temperatura;
            if (estacion.registrarLectura(temperatura)) {
                cout << "Lectura registrada: " << temperatura << endl;
            } else {
                cout << "Error: la temperatura debe estar entre -50 y 60." << endl;
            }
        } 
        else if (comando == "promedio") { 
            if (estacion.getCantidadLecturas() > 0) {
                cout << "Promedio: " << estacion.promedio() << endl;
            } else {
                cout << "Sin lecturas registradas." << endl;
            }
        }
        else if (comando == "maxima") {
            if (estacion.getCantidadLecturas() > 0) {
                cout << "Máxima: " << estacion.maxima() << endl;
            } else {
                cout << "Sin lecturas registradas." << endl;
            }
        }
        else if (comando == "cantidad") {
            cout << estacion.getNombreEstacion() << " - Lecturas registradas: " << estacion.getCantidadLecturas() << endl;
        }
    }

    return 0;
}

