#include "header.h"
using namespace std;

unsigned generarPhi(unsigned primo1, unsigned primo2)
{
    return (primo1-1)*(primo2-1);
}


unsigned generarClavePrivada(unsigned phi, unsigned exponente)
{
    return (2*phi+1)/exponente;
}

unsigned elegirExponente(unsigned phi)
{
    int i;

    for (i = 3 ; i < 100 ; i++)
        if (phi%i && esPrimo(i))
            return i;

    return 0;
}

unsigned encriptar(unsigned clavePublica, unsigned exponente, unsigned mensaje)
{
    //unsigned potencia;

    //potencia = pow(mensaje, exponente);
    //return potencia%(long)clavePublica;
    return powerMod(mensaje, exponente, clavePublica);

}

unsigned desencriptar(unsigned clavePrivada, unsigned clavePublica, unsigned mensaje)
{
    //unsigned potencia;

    //potencia = pow(mensaje, clavePrivada);
    //return potencia%(long)clavePublica;
    return powerMod(mensaje, clavePrivada, clavePublica);
}
