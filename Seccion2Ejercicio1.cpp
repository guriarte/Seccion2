/* Programar un encriptador de palabras mediante el método RSA, o dos métodos de
encriptación simples (en caso de no querer usar el RSA); donde dado un programa, se
muestre al mismo encriptado, con la opción de recuperar el mensaje original.
*/

#include <iostream>

using namespace std;

void Seccion2Ejercicio1()
{
    int primo1, primo2, n, phi;

    do
    {
        primo1 = getNumeroPrimo(100, 900);              //Obtengo los 2 primos factores de n
        primo2 = getNumeroPrimo(100, 900);

    }while(primo1 != primo2);

    n = primo1*primo2;

    phi = (primo1-1)*(primo2-1);                        //calculo el phi(n)
}

