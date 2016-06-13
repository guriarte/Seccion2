/* Programar un encriptador de palabras mediante el método RSA, o dos métodos de
encriptación simples (en caso de no querer usar el RSA); donde dado un programa, se
muestre al mismo encriptado, con la opción de recuperar el mensaje original.
*/

#include <iostream>
#include <ctime>

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

int getNumeroPrimo(int min, int max)                    //funcion que devuelve un numero primo entre determinado rango
{
    int i, numeroPrimo;

    srand(time(0));

    do
    {
        numeroPrimo = generarNumeroRandomRango(min, max);

    }while(!(esPrimo(numeroPrimo));
}

int generarNumeroRandomRango(int min, int max)          //funcion que devuelve un numero random entre determinado rango
{
    int n = max - min + 1;
    int resto = RAND_MAX % n;
    int x;
    do{
        x = rand();
    }while (x >= RAND_MAX - resto);

    return min + x % n;
}
