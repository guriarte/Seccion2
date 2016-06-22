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
    unsigned i;

    for (i = 2 ; i < phi ; i++)
        if (phi%i && esPrimo(i))
            return i;

    return 0;
}
unsigned elegirExponenteE(unsigned phi, unsigned exponenteD)
{
    unsigned i;
    for(i = 1; i < phi;i++)
    {
        if(((i*exponenteD%phi) == 1 || (i*exponenteD%phi) == phi+1) && i != exponenteD)
            break;
    }
    return i;
}
unsigned encriptarNoe(unsigned mensaje,unsigned exponente,unsigned digitos)
{
    unsigned cifrado;
    cifrado = (long)pow((double)mensaje,(double)exponente)%digitos;

    return cifrado;
}
unsigned desencriptarNoe(unsigned mensaje,unsigned exponenteE, unsigned digitos)
{
    unsigned descifrado;
    descifrado = (long double)pow((long double)mensaje,(long double)exponenteE);
    descifrado = descifrado%digitos;

    return descifrado;
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
