#include <iostream>
#include <ctime>
#include <random>
#include <math.h>

enum letras {a = 1, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u ,v ,w, x, y, z};

void Seccion2Ejercicio1();
long int getNumeroPrimo(long int , long int );
long int generarNumeroRandomRango(long int , long int );
bool esPrimo(long int );
long int elegirExponente(long int );
long int generarClavePrivada(long int , long int );
long int generarPhi(long int , long int );
long int encriptar(long int, long int, long int);
long int desencriptar(long int, long int, long int);
