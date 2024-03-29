typedef struct Circulo Circulo;

/**
 * Cria um circulo com centro (x,y) e raio r.
 * @param x Coordenada x do centro do círculo
 * @param y Coordenada y do centro do círculo
 * @param r O raio do círculo
 * @return Uma variável do tipo círculo com as informações de coordenadas do centro e raio
*/
Circulo* circ_cria(float x, float y, float r);

/** 
 * Libera a memoria de um Circulo
 * @param c Ponteiro que aponta para o círculo
*/
void circ_libera(Circulo *c);

/** 
 * Calcula a area de um circulo 
 * @param c Ponteiro que aponta para o círculo
 * @return A área de um círculo
*/
float circ_area(Circulo *c);

/** 
 * Verifica se dois circulos tem o mesmo centro 
 * @param c1 Ponteiro que aponta para o círculo
 * @param c2 Ponteiro que aponta para o círculo
 * @return 1 caso os círculos sejam iguais e 0 caso não sejam iguais
*/
int circ_concentricos(Circulo *c1, Circulo *c2);

/** 
 * Obtem o raio de um circulo 
 * @param c Ponteiro que aponta para o círculo
 * @return O raio de um círculo
*/
float circ_raio(Circulo *c);
