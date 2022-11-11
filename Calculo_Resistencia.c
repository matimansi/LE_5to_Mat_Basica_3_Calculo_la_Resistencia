
#include <stdio.h>

float calculo_resistencia (int valor_a, int valor_b, char tipo);

int main()
{
	int R1, R2;
	char s_p;
	float RT;
	printf("\nBienvenido a mi programa...\n");
	printf("Puedo realizar el calculo de restencia total de 2 resistores en serie o paralelo\n");
	printf("Ingrese el valor del primer resistor\n>>> ");
	scanf("%d", &R1);
	printf("Ingrese el valor del segundo resistor\n>>> ");
	scanf("%d", &R2);
	printf("Los resistores estan en: SERIE [S] o PARALELO [P]\n>>> ");
	fflush(stdin);
	scanf("%c", &s_p);
	RT = calculo_resistencia(R1, R2, s_p);
	printf("RT = %.3f", RT);
	return 0;
}

float calculo_resistencia (int valor_a, int valor_b, char tipo)
{
	float resultado;
	if ((tipo == 'S') || (tipo == 's')) resultado = valor_a + valor_b;	// SERIE
	if ((tipo == 'P') || (tipo == 'p')) resultado = ((float)(valor_a * valor_b) / (float)(valor_a + valor_b)); // PARALELO
	return (resultado);
}
