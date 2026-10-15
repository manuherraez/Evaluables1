/* Domotica con bits. 14/10/26. Manu Herraez */

#include <stdio.h>

void printBinary(int number, int bits) {
    unsigned int mask = 1 << (bits - 1);

    for (int i = 0; i < bits; i++) {
        if (number & mask)
            printf("1");
        else
            printf("0");

        mask >>= 1;
    }

    printf("\n");
}

int main() {
	
	int estado = 0;
	int luz = 0;
	
	printf("Estado inicial (0-255): ");
	scanf("%d", &estado);
	
	// Validamos si el valor esta entre 0-255

	if (estado < 0 || estado > 255) {
		printf("Error: estado inicial no valido\n");
		return 1;
	}

	printf("Inicial: ");
	printBinary(estado, 8);
	
	
	printf("Luz a encender: ");
	scanf("%d", &luz);
	
	// Validamos luces del 0-7
	
	if (luz < 0 || luz > 7) {
		printf("Error: numero de luz no valido\n");
		return 1;
	}
	
	estado = estado | (1 << luz);
	
	printf("Encender: %d / binario: ", estado);
	printBinary(estado, 8);

	
	printf("Luz a apagar: ");
	scanf("%d", &luz);
	
	// Validamos luces del 0-7
	
	if (luz < 0 || luz > 7) {
		printf("Error: numero de luz no valido\n");
		return 1;
	}
	
	estado = estado & ~(1 << luz);
	
	printf("Apagar: %d / binario: ", estado);
	printBinary(estado, 8);
	
	
	printf("Luz a invertir: ");
	scanf("%d", &luz);
	
	// Validamos luces del 0-7
	
	if (luz < 0 || luz > 7) {
		printf("Error: numero de luz no valido\n");
		return 1;
	}
	
	estado = estado ^ (1 << luz);
	
	printf("Invertir: %d / binario: ", estado);
	printBinary(estado, 8);


	// Comprobamos si luz 3 está encendida
	
	if (estado & (1 << 3)) {
		printf("Luz del salon: encendida\n");
	} else {
		printf("Luz del salon: apagada\n");
	}
	
	return 0;
}