//Ejercicio 2: Analizador de triángulos
#include <iostream>
#include <string>
#include <cctype>
using namespace std;



//Funcion es_válido
bool es_valido(int a, int b, int c){
    // Determina si el trángulo es válido
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return true;  
    // Si no lo es, retorna False
    } else {
        return false; 
    }
}

//Función tipo_triangulo
string tipo_triangulo(int a, int b, int c){
    string tipo;

    // Triángulo equilátero
    if (a == b && b == c) {
    tipo = "Equilatero";
    } 
    // Triángulo Isóceles
    else if (a == b || a == c || c == b ){
        tipo = "Isoceles";
    }
    // Triángulo Escaleno
    else {
        tipo = "Escaleno";
    } 
    return tipo;

}

// Función calcular_perímetro
int calcular_perimetro(int a, int b, int c){
    int periemtro;
    periemtro = a + b + c;
    return periemtro;
}

// Finción describir_triangulo
void describir_triangulo(int a, int b, int c){
    //Si es_valido = True, entonces -->
    if (es_valido(a, b, c)){
        cout << "Tipo: " << tipo_triangulo(a, b, c) << endl;
        cout << "Perimetro: " << calcular_perimetro(a, b, c) << endl;
    }

    //Si es_valido = false, entonces-->
    else{
        cout << "Triangulo Invalido ";
    }
}
//----------------------------------
int main() {
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;

describir_triangulo(a,b,c);
}