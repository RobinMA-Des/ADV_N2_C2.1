#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

class Personaje{      
    // atributos de la clase son privados, cuales son tambien, como es la clase/objeto ?          
    private:
    int vida;
    bool vivo;
    int danioJugador;
    
    public:
    // la siguiente funcion se llama constructor, se encargara de crear objetos de la clase
    Personaje (int vida, bool vivo, int danioJugador):
    vida(vida),vivo(vivo),danioJugador(danioJugador)
    {}
    //una funcion void no retorna nada, solo ejecuta una accion
    //métodos de la clase, que puede hacer la clase u objeto?
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
}



int main(){
    SetConsoleOutputCP(CP_UTF8);

    int opcion = 0;
    cout << "Vamos a crear nuestro PJ!" << endl;
    cout << "cuanta vida tendra po? << endl;
    cin >> vida;
    cout << cuanto vida tiene po? << endl;
    cin >> vida;

    //Instancia de clase

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

//Variable: Se crea para guardar informacion pueden ser tipo string, int o entero por ejemplo, las variables
permite utilizar informacion almacenada y llamarla a voluntad, se reserva un espacio de memoria

//Ej: string nombre= Robin, el string permite llamar al nombre cuando es necesario
// String seria el tipo de archivo que uno guarda, nombre es la carpeta y el archivo es el nombre en si

// teniendo el dato se puede manipular, usar, mover, llamar, etc.

//Class Personaje, los datos pueden ser public, private or protected. La Clase es una variable que contiene otras variables

//Personaje jugador (nombre,vida,vivo,recibir danio) <--- esto es un objeto y puede ser usado y manipulado dentro del codigo
//Clase: se puede llamar cuantas veces sea necesaria para crear nuevos objetos

//funcion && es cuando ambas opciones tienen que ser verdaderas para poder ejecutar el comando

//El while se usa de forma constante hasta que la condicion deje de cumplirse. El for ocurre una cantidad determinada de veces