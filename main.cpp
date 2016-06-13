#include "header.h"

using namespace std;

int main()
{
    int primo1, primo2, n, phi, exponente, clavePrivada;

    srand(time(0));

    do
    {
        primo1 = getNumeroPrimo(100, 900);              //Obtengo los 2 primos factores de n
        primo2 = getNumeroPrimo(100, 900);

    }while(primo1 == primo2);

    cout << "El numero primo 1 es: " << primo1 << endl;
    cout << "El numero primo 2 es: " << primo2 << endl;

    phi = generarPhi(primo1, primo2);
    exponente = elegirExponente(phi);
    clavePrivada = generarClavePrivada(phi, exponente);

    cout << "Phi da: " << phi << endl;
    cout << "El exponente elegido es: " << exponente << endl;
    cout << "La clave privada es: " << clavePrivada << endl;


}
