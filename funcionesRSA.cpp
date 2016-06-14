#include "header.h"
using namespace std;

long int generarPhi(long int primo1, long int primo2)
{
    return (primo1-1)*(primo2-1);
}


long int generarClavePrivada(long int phi, long int exponente)
{
    return (2*phi+1)/exponente;
}

long int elegirExponente(long int phi)
{
    int i;

    for (i = 3 ; i < 100 ; i++)
        if (phi%i && esPrimo(i))
            return i;

    return 0;
}

long int encriptar(long int clavePublica, long int exponente, long int mensaje)
{
    long int potencia;

    potencia = pow(mensaje, exponente);
    return potencia%(long)clavePublica;

}

long int desencriptar(long int clavePrivada, long int clavePublica, long int mensaje)
{
    long int potencia;

    potencia = pow(mensaje, clavePrivada);
    return potencia%(long)clavePublica;

}
