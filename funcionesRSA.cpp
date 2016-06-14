#include "header.h"
using namespace std;

int generarPhi(int primo1, int primo2)
{
    return (primo1-1)*(primo2-1);
}


int generarClavePrivada(int phi, int exponente)
{
    return (2*phi+1)/exponente;
}

int elegirExponente(int phi)
{
    int i;

    for (i = 3 ; i < 100 ; i++)
        if (phi%i && esPrimo(i))
            return i;

    return 0;
}

long int encriptar(int clavePublica, int exponente, int mensaje)
{
    long int potencia;

    potencia = pow(mensaje, exponente);
    return potencia%(long)clavePublica;

}

long int desencriptar(int clavePrivada, int clavePublica, int mensaje)
{
    long int potencia;

    potencia = pow(mensaje, clavePrivada);
    return potencia%(long)clavePublica;

}
