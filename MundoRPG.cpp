Construccion de clases

Clase Personaje, clase inventario, metodos protected, public y private, while para elegir personajes

class Personaje{      
         
    private:
    int vida;
    bool vivo;
    int danioJugador;
    int nivel
    
    protected:
    Personaje (int vida, bool vivo, int danioJugador, int nivel):
    vida(vida),vivo(vivo),danioJugador(danioJugador), nivel (niveles)

class item 
protected
    string nombre;
    string descripcion;
    int durabilidad;
    string categoria;

public
    item (string nomit = "", string desIt "",int durIt

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

while (opcion != 5 && vivo)
    {
        cout << "\nSeleccione su opcion" << endl;
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