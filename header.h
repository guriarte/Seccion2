#include <iostream>
#include <ctime>
#include <random>
#include <math.h>

enum letras {a = 1, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u ,v ,w, x, y, z};

void Seccion2Ejercicio1();
unsigned getNumeroPrimo(unsigned , unsigned );
unsigned generarNumeroRandomRango(unsigned , unsigned );
bool esPrimo(unsigned );
unsigned elegirExponente(unsigned );
unsigned generarClavePrivada(unsigned , unsigned );
unsigned generarPhi(unsigned , unsigned );
unsigned encriptar(unsigned, unsigned, unsigned);
unsigned desencriptar(unsigned, unsigned, unsigned);
unsigned powerMod(unsigned , unsigned , unsigned );
