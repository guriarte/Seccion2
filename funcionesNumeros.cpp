#include "header.h"

using namespace std;

int getNumeroPrimo(int min, int max)                    //funcion que devuelve un numero primo entre determinado rango
{
    int i, numeroPrimo;

    do
    {
        numeroPrimo = generarNumeroRandomRango(min, max);

    }while (!(esPrimo(numeroPrimo)));

    return numeroPrimo;
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

bool esPrimo(int numero)                                //funcion que devuelve 1 si numero es primo, sino devuelve 0
{
    int i;

    for (i = 2 ; i < numero/2 ; i++)
        if (!(numero%i))
            return 0;

    return 1;
}
