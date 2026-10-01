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
    
    protected:
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
    int tipopersonaje = 0;
    int vida = 0;
    bool vivo = true;
    int daniojugador = 0;
    string nombrepersonaje = "";
    personaje* jugador = nullptr;

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

//El while se usa de forma constante hasta que la condicion deje de cumplirse. El for ocurre una cantidad determinada de veces}

//Aqui por ejemplo se crea una clase de personaje, se le asigna un nombre, vida, si esta vivo o no y el danio que puede recibir.
 Luego se crea un objeto llamado jugador que es de la clase personaje y se le asignan los valores de vida, vivo y danioJugador. 
 Luego se utiliza un ciclo while para permitir al usuario seleccionar opciones para avanzar, saltar,
  recibir danio o revisar el estado del personaje hasta que decida salir o el personaje muera.    

class Guerrero : public Personaje
{
    private:
    string arma;
    public:
    Guerrero(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(nombrepersonaje, vida, vivo, danioJugador), arma(nombreArma)
    {}

    Void atacar()
    {
        cout << "El guerrero ataca con su " << arma << endl;
    }

    class Arquero : public Personaje
{
    private:
    string arma;
    public:
    Arquero(int vida, bool vivo, int danioJugador, string nombreArma)
    : Personaje(nombrepersonaje, vida, vivo, danioJugador), arma(nombreArma)
    {}

    Void atacar()
    {
        cout << "El arquero ataca con su " << arma << endl;
    }

    //Ejemplo de ciclo while con los personajes creados, se puede crear un ciclo while para que el jugador pueda elegir entre los personajes

    cout << "Seleccione su personaje" << endl;
    cout << "[1] Guerrero." << endl;
    cout << "[2] Arquero." << endl;
    cin >> tipoPersonaje;

    //Switch es para elegir entre las opciones que se le presentan al jugador, en este caso entre guerrero y arquero. Es mas eficiente
     que un if else ya que permite elegir entre varias opciones y ejecutar el codigo correspondiente a la opcion elegida. Y tambien 
     permite que el jugador pueda elegir entre las opciones que se le presentan y ejecutar el codigo correspondiente a la opcion elegida.

     switch (tipoPersonaje){
     case 1:
         Guerrero jugador("Guerrero", nombrepersonaje, vida, vivo, danioJugador, "Espada");
         break;
     case 2:
         Arquero jugador("Arquero", nombrepersonaje, vida, vivo, danioJugador, "Arco de las mil flamas demoniacas!!!");
         break;
     default:
         cout << "Opción no válida." << endl;
     }
