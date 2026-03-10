// Ejercicio 2: Factura de electricidad
#include <iostream>
using namespace std;


int main() {
    int consumo;
    int tarifa;

    cin >> consumo;                
    cin >> tarifa; 

int subtotal;
if (consumo < 200) 
{
    subtotal =( 75* consumo);
}

else if (consumo > 201 && consumo < 400) 
{
    subtotal =(200*75 + (consumo-200)*110);
}

else 
{
    subtotal =(200*75 + (consumo-200)*110 + (consumo-400)*160);
}

//...........
cout << "Subtotal: "<< subtotal << "\n";

    return 0;
}