// Ejercicio 1: Entradas de cine
#include <iostream>
using namespace std;


int main() {
    int edad; // Declaro la edad como un int
    int dia; // Declaro el dia de la semana como un int

    cin >> edad; // Recibe t de la terminal               
    cin >> dia; // Recibe y de la terminal

// asignación de especificaciones
string categoria;
int precio_base;
int recargo;
int total;

// Verificación ..... Edad-Precio
if (edad < 12) 
{
categoria = "Nino";
precio_base = 2500;
}

else if (edad >= 12 && edad < 64)
{
    categoria = "Adulto";
    precio_base = 4000;
}
else 
{
    categoria = "Adulto mayor";
    precio_base = 2000;
}

// verificación..... recargo 
if (dia == 1)
{
recargo = 0;
}
if (dia == 2)
{
recargo = (precio_base*0.2);
}

total = (precio_base + recargo);
// terminal
cout << "Categoria: "<< categoria << "\n";
cout << "Precio base: "<< precio_base << "\n";
cout << "Recargo: "<< recargo << "\n";
cout << "Total: "<< total << "\n";
    return 0;
}