//Construccion de clases

//Clase Personaje, clase inventario, metodos protected, public y private, while para elegir personajes

#include <iostream>
#include <windows.h>
using namespace std;

class Personaje{      
         
    private:
    int vida;
    bool vivo;
    int danioJugador;
    int nivel;
    
    public:
    Personaje (int vida, bool vivo, int danioJugador, int nivel):
    vida(vida),vivo(vivo),danioJugador(danioJugador), nivel (nivel){}
};

class Item {
protected:
    string nombre;
    string descripcion;
    int durabilidad;
    string categoria;

public:
    Item (string nomit = "", string desIt = "",int durIt = 0, string categoriaIt = ""):
    nombre(nomit), descripcion(desIt), durabilidad(durIt), categoria(categoriaIt)
    {}
}
class guerrero : public Personaje
private:
    string arma;
    public:
    Guerrero(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(nombrepersonaje, vida, vivo, danioJugador), arma(nombreArma)
    {}

    class arquero : public Personaje
private:
    string arma;
    public:
    Arquero(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(nombrepersonaje, vida, vivo, danioJugador), arma(nombreArma)
    {}

      class magoFuego : public Personaje
private:
    string arma;
    public:
    MagoFuego(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(nombrepersonaje, vida, vivo, danioJugador), arma(nombreArma)
    {}

    class magoHielo : public Personaje
private:
    string arma;
    public:
    magoHielo(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(nombrepersonaje, vida, vivo, danioJugador), arma(nombreArma)
    {}

int main(){
    SetConsoleOutputCP(CP_UTF8);
        cout << "Selecciona un personaje un personaje!";

{
        switch (classpersonaje)
   
        cout << "Seleccione su opcion" << endl;
        cout << "[1] Guerrero (Espada)." << endl;
        cout << "[2] Arquero (arco)" << endl;
        cout << "[3] Mago de fuego (baston de fuego)" << endl;
        cout << "[4] Mago de hielo (baston de hielo)" << endl;
        cout << "[5] Salir del juego" << endl;
        cin >> opcion;

    Item: abrirLibrero () {
        Item item:
        cout << "El librero tiene nuevos textos para leer!"<<
        cout << "{1} libro de experiencia" << endl;
        cout << "[2] Libro de vida" << endl;
        cout << "[3] Libro de danio." << endl;
        cout << "[4] Moneda de la suerte" << endl;
        cin >> itemSeleccionado

switch (itemSeleccionado)
{
    case 1
        nombre = "Libro de experiencia";
        descripcion = "Sube 5 niveles a quien lo lea!";
        durabilidad = 1;
        categoria = nivel;
        break;
    case 2
        nombre = "Libro de vida";
        descripcion = "Sube 50 de vida a quien lo lea!";
        durabilidad = 1;
        categoria = vida;
        break;
    case 3
        nombre = "Libro de danio";
        descripcion = "Genera 15 de danio a un enemigo util para quien lo lea!";
        durabilidad = 1;
        categoria = danioJugador;
        break;
    case 4
        nombre = "Moneda de la suerte";
        descripcion = "No es un libro, pero puede que te ayude a conseguir mas dinero mas tarde";
        durabilidad = 1;
        categoria = monedas;
        break;

    cout << "Has seleccionado el item: " << nombre << endl;
    cout << "Descripcion: "" << descripcion << endl;
}

cout << "Que deseas hacer ahora?" << endl;

While (true) {
    cout << "[1] Usar item" << endl;
    cout << "[2] Guardar item en inventario" << endl;
    cout << "[3] Salir del librero" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Usando el item..." << endl;
            break;
        case 2:
            cout << "Guardando el item en el inventario..." << endl;
            break;
        case 3:
            // Salir del librero
            return 0;
        default:
            cout << "Opcion inválida. Intenta de nuevo." << endl;
    }
}
    cout << "Has salido del librero." << endl;
    cout << "Que deseas hacer ahora?" << endl;
    
    While (true) {
        cout << "[1] Atacar enemigos" << endl;
        cout << "[2] Salir del juego" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                atacarEnemigos();
                break;
            case 2:
                cout << "Saliendo del juego..." << endl;
                return 0;
            default:
                cout << "Opcion inválida. Intenta de nuevo." << endl;
        }
    }