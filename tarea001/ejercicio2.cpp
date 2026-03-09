// Clasificador de régimen de vuelo
#include <iostream>
using namespace std;


// ------ Constantes ----- //
const double n1 = 331.0;
const double n2 = 0.6;
const double Tmin= -273.15;

int main() {
    double v; // Declaro la velocidad como un double
    double T; // Declaro la temperatura como un dounle

    cin >> v; // Recibe v de la terminal
    cin >> T; // Recibe T de la terminal

// Verificaciones
if (v<0 && T<=Tmin) //por si ambas, velocidad y temperatura son negativas
{
cout << "Error: la velocidad no puede ser negativa." << "\n";
cout << "Error: la temperatura no puede ser menor o igual al cero absoluto (-273.15 C).";
return 0; // cierra el programa
}
else if (v < 0) // velocidad negativa
{ 
cout << "Error: la velocidad no puede ser negativa.";
return 0; // detiene el programa
}
else if (T <= Tmin) // temperatura or debajo del cero absuluto
{
cout << "Error: la temperatura no puede ser menor o igual al cero absoluto (-273.15 C).";
return 0; // detiene el programa
}

// Operaciones:
double Vs= (n1 + n2*T);
double M= (v/Vs);


// Clasificación del régimen
string regimen; 
if (M < 0.8) 
{
    regimen = "Subsonico";
}
else if (0.8< M && M < 1.2) 
{
    regimen = "Transonico";
}
else if (1.2 < M && M < 5.0) 
{
    regimen = "Supersonico";
}
else
{
    regimen = "Hipersonico";
}


cout << "vs = "<< Vs << " m/s" << "\n";
cout << "M = " << M << "\n";
cout << "Regimen: " << regimen ;
return 0;
}
