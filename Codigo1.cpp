#include <iostream>
using namespace std

string PersonajeTieneEspada (Int espada)
{
    string respuesta = "";
    if (Espada <= 0)
    {
        Respuesta = "No";
    }
    else
    {
        Respuesta = "Si";
    }
    return respuesta;
}

string mostrarFicha (string nombre, int vida, int coins, int espada, float speed bool Llave)
{
    cout << "" << endl;
    cout << "Ficha tecnica << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Vida: " << vida << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "Monedas: " << coins << endl;
    cout << "Velocidad: " << speed << endl;
    cout << "Tiene espada?" << PersonajeTieneEspada(Espada) << endl;
    cout << "Tiene llave?: " << Llave << endl;
    cout << "" << endl;
}

string accesoAreaBosque (int nivel, bool llave)
{
    string respuesta = "";
    if (nivel >= 7 && llave == true)
    {
        respuesta = "Acceso al bosque desbloqueado";
    }
    else
    {
        respuesta = "Acceso al bosque denegado";
    }
    return respuesta;
}
    Int main ()
    {
    string nombrePersonaje = "Aragorn";
    int vida = 100;
    int coins = 0;
    int espada = 10;
    float speed = 10.0;
    bool llave = true;
    int nivel = 5;

    mostrarFicha(nombrePersonaje, vida, nivel, coins, espada, speed, llave);

    cout << "Tratando de acceder al bosque..." << endl;
    cout << "Atacamos a nuestro personaje con 50 de danio!<< endl;
    vida = vida -50;
    tiene llave = true;

    cout << "" << endl;
    cout << "Por haber encontrado la llave, has subido 3 niveles!" << endl;
    nivel = nivel + 3;

    mostrarFicha(nombrePersonaje, vida, nivel, coins, espada, speed, llave);
    accessoAreaBosque(nivel, llave);

    return 0;
}