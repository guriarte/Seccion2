#include "header.h"

unsigned getNumeroPrimo(unsigned min, unsigned max)                    //funcion que devuelve un numero primo entre determinado rango
{
    unsigned numeroPrimo;

    do
    {
        numeroPrimo = generarNumeroRandomRango(min, max);

    }while (!(esPrimo(numeroPrimo)));

    return numeroPrimo;
}

unsigned generarNumeroRandomRango(unsigned min, unsigned max)          //funcion que devuelve un numero random entre determinado rango
{
    int n = max - min + 1;
    int resto = RAND_MAX % n;
    int x;
    do{
        x = rand();
    }while (x >= RAND_MAX - resto);

    return min + x % n;
}

bool esPrimo(unsigned numero)                                //funcion que devuelve 1 si numero es primo, sino devuelve 0
{
    unsigned i;

    for (i = 2 ; i < numero/2 ; i++)
        if (!(numero%i))
            return 0;

    return 1;
}

unsigned powerMod(unsigned base, unsigned exponente, unsigned modulo)
{
    unsigned resto = base;

    for(int i = 1 ; i < exponente ; i *= 2)
        resto = (int)pow(resto, 2) % (int)modulo;

    return resto;
}
