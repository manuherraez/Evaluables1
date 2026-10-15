/* Maquina expendedora. 14/10/26. Manu Herraez */

#include <stdio.h>

int main() {
	
	int precio = 0, introducido = 0;
	int cambio = 0, restante = 0, devolver = 0;
	
	int m200 = 0, m100 = 0, m50 = 0, m10 = 0, m5 = 0, m2 = 0, m1 = 0;
	
	printf("Precio (centimos): ");
	scanf("%d", &precio);
	
	printf("Dinero introducido: ");
	scanf("%d", &introducido);
	
	if (introducido >= precio) {
		cambio = introducido - precio;
		printf("Cambio: %d centimos\n", cambio);
		
		devolver = cambio;
		
		m200 = devolver / 200;
		devolver = devolver % 200;
		
		m100 = devolver / 100;
		devolver = devolver % 100;
		
		m50 = devolver / 50;
		devolver = devolver % 50;
		
		m10 = devolver / 10;
		devolver = devolver % 10;
		
		m5 = devolver / 5;
		devolver = devolver % 5;
		
		m2 = devolver / 2;
		devolver = devolver % 2;
		
		m1 = devolver;
		
		// Mostramos todas las monedas y lo que devolvemos de cada una
		
		if (m200 != 0) {
		printf("%d monedas de 200\n", m200);
		}
		if (m100 != 0) {
		printf("%d monedas de 100\n", m100);
		}
		if (m50 != 0) {
		printf("%d monedas de 50\n", m50);
		}
		if (m10 != 0) {
		printf("%d monedas de 10\n", m10);
		}
		if (m5 != 0) {
		printf("%d monedas de 5\n", m5);
		}
		if (m2 != 0) {
		printf("%d monedas de 2\n", m2);
		}
		if (m1 != 0) {
		printf("%d monedas de 1\n", m1);
		}
		
	} else {
		restante = precio - introducido;
		printf("Dinero insuficiente, faltan %d centimos", restante);
	}
	
	return 0;
}