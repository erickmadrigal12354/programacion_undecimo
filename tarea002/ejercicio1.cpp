
// Ejercicio 1: Detector de palíndromos
#include <iostream>
#include <string>
using namespace std;
#include <cctype>

// Función es_palindormo
bool es_palindromo(string palabra) {
    int inicio = 0;
    int fin = palabra.length() - 1;  //Lee el largo de la palabra 

    while (inicio < fin) { //Se repite para todo el largo de la palabra
        if (tolower(palabra[inicio]) != tolower(palabra[fin])) { //compara la primera letra con la última.
            // se ponen todas las letras en minúsculas
            return false; // Si un par no coincide, no es palíndromo
        }
        inicio = inicio +1; //Compara la segunda letra
        fin = fin -1; //Compara la penúltima letra
    }
    return true; 
}

int main() {
    std::string palabra;
    cin >> palabra;
   

    if (es_palindromo(palabra)) {
        std::cout << palabra << " Es un palindromo" << std::endl;
    } else {
        std::cout << palabra << " No es un palindromo" << std::endl;
    }
    return 0;
}