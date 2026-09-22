#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

class Personaje{                
    public:
    int vida;
    bool vivo;
    int danioJugador;

    Personaje (int vida, bool vivo, int danioJugador):
    vida(vida),vivo(vivo),danioJugador(danioJugador)
    {}
}

void avanzar(){
    cout << "Po avanza..." << endl;
}

void saltar(){
    cout << "Po salta..." << endl;
}

void recibirDanio(int danio){
    vida -= danio;

    if (vida < 0) {
        vida = 0;
        vivo = false;
    }

    cout << "Po recibio " << danio << " de danio." << endl;
    cout << "Su vida restante es " << vida << "." << endl;
}

void verEstado(){
    string alerta = "";
    if (0 < vida < 30) alerta = "Vida demasiado baja!";

    cout << "Estado de Po" << endl;
    cout << "Vida restante: " << vida << endl;
    cout << "Esta Vivo? " << (vivo == true ? "Si": "No") << endl;
    cout << alerta << endl;
    alerta = "";
}

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int opcion = 0;
    cout << "Vamos a crear nuestro PJ!" << endl;
    cout << "cuanta vida tendra po? << endl;
    cin >> vida;
    cout << cuanto vida tiene po? << endl;
    cin >> vida;

    Personaje jugador(vivo,vida,daniojugador);

    while (opcion != 5 && vivo)
    {
        cout << "\nSeleccione su opcion" << endl;
        cout << "[1] Avanzar." << endl;
        cout << "[2] Saltar." << endl;
        cout << "[3] Recibir Danio." << endl;
        cout << "[4] Revisar Estado Poo." << endl;
        cout << "[5] Salir." << endl;
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                jugador.avanzar();
                break;
            case 2:
                jugador.saltar();
                break;
            case 3:
                cout << "Ingrese el danio a recibir: " << endl;
                cin >> danio;
                jugador.recibirDanio(danio);
                break;
            case 4:
                jugador.verEstado();
                break;
            case 5:
                cout << "Saliendo..." << endl;
                exit(0);
                break;
            default:
                cout << "Opcion ingresada NO corresponde...Intente nuevamente..." << endl;
        }
    }
    

    return 0;
}