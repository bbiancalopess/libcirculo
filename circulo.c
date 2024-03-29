#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

struct Circulo {
    float x_centro;
    float y_centro;
    float raio;
};

Circulo* circ_cria (float x, float y, float r) {
    Circulo *c = malloc(sizeof(Circulo));
    if (c != NULL){
        c->x_centro = x;
        c->y_centro = y;
        c->raio = r;
    }
    return c;
}

void circ_libera (Circulo *c) {
    free(c);
}

float circ_area (Circulo *c) {
    float area = M_PI * c->raio * c->raio;

    return area;
}

int circ_concentricos (Circulo *c1, Circulo *c2) {
    if(c1->x_centro == c2->x_centro && c1->y_centro == c2->y_centro) {
        return 1;
    } else {
        return 0;
    }
}

float circ_raio (Circulo *c) {
    return c->raio;
}