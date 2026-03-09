// Caída libre por una ventana 
#include <iostream>
using namespace std;

// Constantes:
const double g = 9.8;
int main() {
    double t; // Declaro el tiempo como un double
    double y; // Declaro la altura como un dounle

    cin >> t; // Recibe t de la terminal               
    cin >> y; // Recibe y de la terminal


//---------- Operación -----------//
double h;
h = ((y-(0.5*t*t*g))*(y-(0.5*t*t*g)))/(2*g*t*t); 

    
//-------- VERIFICACIONES ----------//
if (t < 0) {
    cout << "Error: el tiempo debe ser positivo."; // tiempo negativo
}

else if (y < 0) {
    cout << "Error: la altura de la ventana debe ser positiva."; // ventana negativa
}

else if ((y-(0.5*g*t*t)) < 0) { // y - valor de h para ese tiempo, si es negativo, hay un error
    cout << "Error: los valores ingresados implican h <= 0; el objeto no pudo haber sido soltado por encima del borde superior de la ventana."; // h negativo
}
else {
    
    cout << "h = ";
    cout << h; 
    cout << " m";
}
return 0;
}