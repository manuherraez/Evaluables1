/* Cartas de Blackjack. 13/10/26. Manu Herraez */

#include <stdio.h>

int main() {
	// Definimos variables
    char valor, palo;
    int puntos;

	// Pedimos valor y palo separado por espacio
    printf("Introduce tu carta (valor palo; en minusculas): \n");
    scanf(" %c %c", &valor, &palo);

    if (!((valor >= '2' && valor <= '9') || valor == 'a' || valor == 't' || valor == 'j' || valor == 'q' || valor == 'k') || !(palo == 'c' || palo == 'd' || palo == 'p' || palo == 't')) {
        printf("Carta inventada, ¡trampa!\n");
        return 0;
    }

    if (palo == 'c' || palo == 'd')
        printf("Color: rojo\n");
    else
        printf("Color: negro\n");

    if (valor == 'j' || valor == 'q' || valor == 'k')
        printf("Figura: Si\n");
    else
        printf("Figura: No\n");

    if (valor == 'a')
        puntos = 11;
    else if (valor == 't' || valor == 'j' || valor == 'q' || valor == 'k')
        puntos = 10;
    else
        puntos = valor - '0';

    printf("Puntos de blackjack: %d.\n", puntos);

    return 0;
}