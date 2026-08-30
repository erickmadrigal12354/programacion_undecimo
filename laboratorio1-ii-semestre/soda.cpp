#include <iostream> 
#include <string>
#include <queue>      
#include <algorithm> 
#include <vector>     
#include <stack>      

using namespace std;


const int N = 5; 

int main() {

//Para guardar los pares de monto y nombre, llegadas e historial 
    vector<pair<int, string>> pedidos_vec; 
    queue<string> pedidos_que;
    stack<string> Historial; 


   
    for (int i = 0; i < N; i++) {
        int monto;
        string nombre;
        cin >> nombre >> monto; 
        pedidos_vec.push_back({monto, nombre});
        
        //Guardar el nombre en la cola
        pedidos_que.push(nombre); 
    }



    // Ordenar el vector de menor a mayor monto 
    sort(pedidos_vec.begin(), pedidos_vec.end());

    for (const auto& p : pedidos_vec) {
        cout << "Estudiante: " << p.second << "Monto: " << p.first << '\n';
    } 
    
    // Encuentra el elemento con el mayor monto en el vector
    auto mayor = max_element(pedidos_vec.begin(), pedidos_vec.end());
    if (mayor != pedidos_vec.end()) {
        cout << "\nPedido de mayor monto: " << mayor->second << " con " << mayor->first << '\n';
    }
    

    string otro; 
    cin >> otro;

   
    auto it = find_if(pedidos_vec.begin(), pedidos_vec.end(), [&](const pair<int, string>& p) {
        return p.second == otro; // Retorna true cuando encuentra coincidencia en el nombre
    });

    if (it != pedidos_vec.end()) {
        cout << otro << " ya tiene un pedido registrado de: " << it->first << '\n';
    } else {
        cout << otro << " no hizo pedido.\n";
    }


  
    while (!pedidos_que.empty()) {
        // se obtiene el nombre del primero en la fila
        string atendido = pedidos_que.front();
        
        pedidos_que.pop();

        cout << "Atendiendo a: " << atendido << '\n';
        
        // Guarda al atendido en la pila 
        Historial.push(atendido);
    }


 
    string comando;
    cin >> comando;

    if (comando == "deshacer") {
        if (!Historial.empty()) {
            // Consulta al último que fue atendido
            string ultimo_atendido = Historial.top(); 
            Historial.pop(); 
            pedidos_que.push(ultimo_atendido); 

            cout << "Se deshizo la atencion de: " << ultimo_atendido 
                 << ". Volvio al final de la fila de espera.\n";
        } else {
            cout << "No hay pedidos en el historial para deshacer.\n";
        }
    } else {
        cout << "Comando no reconocido";
    }

    return 0; 
}
