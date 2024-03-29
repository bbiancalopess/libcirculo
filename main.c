#include <stdio.h>
#include "circulo.h"

void main () {
    Circulo *c1 = circ_cria(0, 0, 5);
    Circulo *c2 = circ_cria(0, 0, 10);
    Circulo *c3 = circ_cria(3, 4, 5);

    if(c1 == NULL || c2 == NULL || c3 == NULL) {
        printf("Erro ao criar os circulos.\n");
    }

    printf("Area do circulo c1: %.2f\n", circ_area(c1));
    printf("Area do circulo c2: %.2f\n", circ_area(c2));
    printf("Area do circulo c3: %.2f\n", circ_area(c3));

    if (circ_concentricos(c1, c2) == 1) {
        printf("c1 e c2 sao concentricos\n");
    } else {
        printf("c1 e c2 nao sao concentricos\n");
    }

    if (circ_concentricos(c1, c3) == 1) {
        printf("c1 e c3 sao concentricos\n");
    } else {
        printf("c1 e c3 nao sao concentricos\n");
    }

    printf("Raio do circulo c1: %.2f\n", circ_raio(c1));
    printf("Raio do circulo c2: %.2f\n", circ_raio(c2));
    printf("Raio do circulo c3: %.2f\n", circ_raio(c3));

    circ_libera(c1);
    circ_libera(c2);
    circ_libera(c3);
}