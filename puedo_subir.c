/* ¿Puedo subir?. 13/10/26. Manu Herraez */

#include <stdio.h>

int main(){
	
	int edad = 0, altura = 0, acompaniado = 0, problemas = 0;
	
	// Preguntamos datos a usuario
	printf("Edad: ");
	scanf("%d", &edad);
	
	while (getchar() != '\n');
	
	printf("Altura (cm): ");
	scanf("%d", &altura);
	
	while (getchar() != '\n');
	
	printf("¿Acompaniado? (1/0): ");
	scanf("%d", &acompaniado);
	
	while (getchar() != '\n');
	
	printf("¿Problemas de espalda? (1/0): ");
	scanf("%d", &problemas);
	
	while (getchar() != '\n');
	
	// Miramos si puede montar a la montaña rusa
	
	if (altura >= 140 && problemas == 0 && edad >= 14) {
		printf("Montania rusa: Si\n");
	} else if (altura >= 140 && problemas == 0 && (edad < 14 && acompaniado == 1)) {
		printf("Montania rusa: Si\n");
	} else {
		printf("Montania rusa: No\n");
	}
	
	// Miramos si puede entrar a la casa del terror
	
	if (edad >= 12 || acompaniado == 1) {
		printf("Casa del terror: Si\n");
	} else {
		printf("Casa del terror: No\n");
	}
	
	// Miramos si puede montar en tazas giratorias
	
	if (altura >= 90 && altura <= 190) {
		printf("Tazas giratorias: Si\n");
	} else {
		printf("Tazas giratorias: No\n");
	}
	
	// Miramos si puede entrar gratis
	
	if (edad < 4 || edad >= 65) {
		printf("Entrada gratis: Si\n");
	} else {
		printf("Entrada gratis: No\n");
	}
	
	return 0;
}