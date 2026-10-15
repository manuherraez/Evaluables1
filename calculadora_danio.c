/* Calculadora de daño. 13/10/26. Manu Herraez */

#include <stdio.h>


int main() {
	
	double ataque, armadura, vida;
	int nivel = 0;
	char critico;
	float daño = 0.0;
	float daño_final = 0.0;
	float vida_restante = 0.0;
	
	// Preguntamos al usuario
	
	printf("Ataque base: ");
	scanf("%lf", &ataque);
	
	while (getchar() != '\n');
	
	printf("Nivel: ");
	scanf("%d", &nivel);
	
	while (getchar() != '\n');
	
	printf("¿Critico (s/n)?: ");
	scanf("%c", &critico);
	
	while (getchar() != '\n');
	
	printf("Armadura enemiga: ");
	scanf("%lf", &armadura);
	
	while (getchar() != '\n');
	
	printf("Vida del enemigo: ");
	scanf("%lf", &vida);
	
	while (getchar() != '\n');
	
	// Calculamos daño
	
	daño = ataque * (1 + nivel * 0.05);
	
	if (critico == 's') {
		daño = daño * 2;
	}
	
	daño_final = daño * 100 / (100 + armadura);
	
	printf("Danio final: %.1f\n", daño_final);
	
	// Mostramos categoria golpe
	
	if (daño_final < 10) {
		printf("Rasguño.\n");
	} else if (daño_final >= 10 && daño_final < 50) {
		printf("Golpe solido.\n");
	} else if (daño_final >= 50) {
		printf("¡Devastador!\n");
	}
	
	// Vemos si el enemigo ha sido derrotado o norm
	
	if (daño_final >= vida) {
		printf("Enemigo derrotado!");
	} else {
		vida_restante = vida - daño_final;
		printf("Al enemigo le quedan %.1f puntos de vida\n", vida_restante);
	}
	
	return 0;
}