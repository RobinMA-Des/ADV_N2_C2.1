Ejercicio 1: Crear un personaje
Contenido: Variables y tipos de datos
Un videojuego necesita almacenar informacion de sus personajes.

Crea un programa que almacene: Nombre del personaje, nivel, cantidad de vidas, velocidad de movimiento y si posee espada magica.
Ejemplo de salida:
Nombre: Arkan
Nivel: 3
Vidas: 5
Velocidad: 4.5
Espada magica: True

int main()
{
    string nombrePersonaje = "Arkan";
    int vidas = 5;
    float velocidad = 4.5;
    int nivel = 3;
    bool espada = true
}

Ejercicio 2: Sistema de acceso a una mision

string MisionDesbloqueada (int nivel)
{
    string respuesta = "";
    if (nivel >= 10)
    {
        respuesta = "Mision desbloqueada";
    }
    else
    {
        respuesta = "Necesitas mas experiencia para ingresar";
    }
    return respuesta;
}

Ejercicio 3: Recoleccion de monedas
Contenido: Ciclos
Utiliza un ciclo para representar la recoleccion de 10 monedas. Muestra un mensaje por cada moneda obtenida y el total al finalizar. 
Desafio: permitir que el usuario ingrese la cantidad de monedas


    for (int i = 0; i < 10; i++)
    {
        cout << "Moneda Obtenida!" << i << endl;
        cout << "10 Monedas obtenidas!" << endl;
    }   

Ejercicio 4: Calcular dano de ataque
Contenido: Funciones

int calcularDanio(int ataque, int bonificador) {
int danio = ataque + bonificador;
if (danio < 0) {
danio = 33;
}
return danio;
}
int resultado = calcularDanio(25, 108);
cout << "Danio total: " << resultado;