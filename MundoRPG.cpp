#include <iostream>
#include <windows.h>
using namespace std;

//Creaccion de clase personaje y enemigo con constructor
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

class EnemigoDelBosqueOscuro{      
         
    private:
    int vida;
    int danioEnemigo;
    
    public:
    EnemigoDelBosqueOscuro (int vida, int danioEnemigo):
    vida(vida), danioEnemigo(danioEnemigo)
    {}
};

//Creaccion de clase item con constructor
class Item {
protected:
    string nombre;
    string descripcion;
    int durabilidad;
    string categoria;

//Creaccion de objetos item con constructor

public:
    Item (string nomit = "", string desIt = "",int durIt = 0, string categoriaIt = ""):
    nombre(nomit), descripcion(desIt), durabilidad(durIt), categoria(categoriaIt)
    {}
}

//Creaccion de objetos personaje con constructor

class guerrero : public Personaje
private:
    string arma;
    public:
    Guerrero(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(vida, vivo, danioJugador, 1), arma(nombreArma)
    {}

    class arquero : public Personaje
private:
    string arma;
    public:
    Arquero(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(vida, vivo, danioJugador, 1), arma(nombreArma)
    {}

      class magoFuego : public Personaje
private:
    string arma;
    public:
    MagoFuego(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(vida, vivo, danioJugador, 1), arma(nombreArma)
    {}

    class magoHielo : public Personaje
private:
    string arma;
    public:
    magoHielo(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(vida, vivo, danioJugador, 1), arma(nombreArma)
    {}

//Creaccion de objetos enemigo con constructor

      class EnemigoDelBosqueOscuro : public EnemigoDelBosqueOscuro
Private:
    string magia;
    public:
    EnemigoDelBosqueOscuro(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(vida, vivo, danioJugador, 1), arma(nombreArma)
    {}

//Seleccion de personaje

int main(){
    SetConsoleOutputCP(CP_UTF8);
        cout << "Selecciona un personaje un personaje!";

{
        switch (classpersonaje)                                //Switch para seleccionar el personaje
        {
            case 1:
                cout << "Has seleccionado al guerrero!" << endl;
                break;
            case 2:
                cout << "Has seleccionado al arquero!" << endl;
                break;
            case 3:
                cout << "Has seleccionado al mago de fuego!" << endl;
                break;
            case 4:
                cout << "Has seleccionado al mago de hielo!" << endl;
                break;
            case 5:
                cout << "Saliendo del juego..." << endl;
                return 0;
            default:
                cout << "Opcion inválida. Intenta de nuevo." << endl;
        cin >> opcion;
        }

    // Habilitacion del librero para obtener items
    Item: abrirLibrero () {
        Item item:
        cout << "El librero tiene nuevos textos para leer!"<<
        cout << "{1} libro de experiencia" << endl;
        cout << "[2] Libro de vida" << endl;
        cout << "[3] Libro de danio." << endl;
        cout << "[4] Moneda de la suerte" << endl;
        cin >> itemSeleccionado

//Menu de seleccion de item
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
        cout << "[1] Atacar enemigos del bosque oscuro" << endl;
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
        << cout << "Quieres atacar a los enemigos del bosque oscuro?" << endl;"

        for (int turno = 0; turno <= 5; turno++) {
cout << "Enemigos del bosque oscuro atacados: " << turno << endl;
}  
    cout << "Has derrotado a todos los enemigos!" << endl;
    return 0;
}

//interaccion con el mago de hielo

cout << "El mago te ha regalado un libro de experiencia!" << endl;
cout << "Has subido 5 niveles!" << endl;

Class mago de hielo : public Personaje {
    private:
        int nivel-5;
    public:
        void subirNivel(int cantidad) {
            nivel += cantidad;
            cout << "Has perdido niveles " << cantidad << " niveles! Ahora estas en el nivel " << nivel << "." << endl;
        }

Class arquero : public Personaje {
    private:
        int nivel+5;
    public:
        void subirNivel(int cantidad) {
            nivel += cantidad;
            cout << "Has subido " << cantidad << " niveles! Ahora estas en el nivel " << nivel << "." << endl;
        }
};
{ 
    //Menu de opciones despues de derrotar a los enemigos del bosque oscuro
    cout << "Que quieres hacer ahora?" << endl;
    while (opcion != 2 && vivo)
    {
        cout << "Seleccione su opcion" << endl;
        cout << "[1] Guardar." << endl;
        cout << "[2] Salir." << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                Guardar();
                break;
            case 2:
                cout << "Saliendo del juego..." << endl;
                return 0;
            default:
                cout << "Opcion inválida. Intenta de nuevo." << endl;
        }
    }
}
    cout << "Gracias por jugar!" << endl;
    {
        return 0;
    }