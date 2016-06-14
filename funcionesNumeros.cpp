#include "header.h"

long int getNumeroPrimo(long int min, long int max)                    //funcion que devuelve un numero primo entre determinado rango
{
    long int numeroPrimo;

    do
    {
        numeroPrimo = generarNumeroRandomRango(min, max);

    }while (!(esPrimo(numeroPrimo)));

    return numeroPrimo;
}

long int generarNumeroRandomRango(long int min, long int max)          //funcion que devuelve un numero random entre determinado rango
{
    int n = max - min + 1;
    int resto = RAND_MAX % n;
    int x;
    do{
        x = rand();
    }while (x >= RAND_MAX - resto);

    return min + x % n;
}

bool esPrimo(long int numero)                                //funcion que devuelve 1 si numero es primo, sino devuelve 0
{
    int i;

    for (i = 2 ; i < numero/2 ; i++)
        if (!(numero%i))
            return 0;

    return 1;
}
