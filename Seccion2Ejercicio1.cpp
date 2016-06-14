/* Programar un encriptador de palabras mediante el método RSA, o dos métodos de
encriptación simples (en caso de no querer usar el RSA); donde dado un programa, se
muestre al mismo encriptado, con la opción de recuperar el mensaje original.
*/

#include "header.h"

using namespace std;

void Seccion2Ejercicio1()
{
    int primo1, primo2, clavePublica, exponente, clavePrivada, mensaje=10, phi;

    srand(time(0));

    do
    {
        primo1 = getNumeroPrimo(100, 900);              //Obtengo los 2 primos factores de n
        primo2 = getNumeroPrimo(100, 900);

    }while(primo1 == primo2);

    cout << "El numero primo 1 es: " << primo1 << endl;
    cout << "El numero primo 2 es: " << primo2 << endl;

    clavePublica = primo1*primo2;
    phi = generarPhi(primo1, primo2);
    exponente = elegirExponente(phi);
    clavePrivada = generarClavePrivada(phi, exponente);

    cout << "La clave publica es: (" << clavePublica << ", " << exponente << ")" << endl;
    cout << "La clave privada es: " << clavePrivada << endl;

    cout << "El mensaje ingresado es: " << mensaje << endl;
    mensaje = encriptar(clavePublica, exponente, mensaje);
    cout << "El mensaje encriptado es: " << mensaje << endl;
    mensaje = desencriptar(clavePrivada, clavePublica, mensaje);
    cout << "El mensaje desencriptado es: " << mensaje << endl;

}

