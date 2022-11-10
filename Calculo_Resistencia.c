/*
	Recibo dos valores de resistencias y la operación a realizar
	(si estan en serie o en paralelo). Devuelvo la resistencia resultante.

	>> TERMINADO << (ES NECESARIO UTILIZAR <stdio_ext.h> [LINEA 9] Y __fpurge(stdin); [LINEA 27])
*/

#include <stdio.h>
//#include <stdio_ext.h>

float calculo_resistencia (int valor_a, int valor_b, char tipo);

int main()
{
	int R1, R2;
	//int s_p;
	char s_p;
	float RT;
	printf("Bienvenido a mi programa...\n");
	printf("Puedo realizar el calculo de restencia total\n");
	printf("de 2 resistores en serie o paralelo\n");
	printf("Ingrese el valor del primer resistor\n>>> ");
	scanf("%d", &R1);
	printf("Ingrese el valor del segundo resistor\n>>> ");
	scanf("%d", &R2);
	printf("Los resistores estan en: SERIE [S] o PARALELO [P]\n>>> ");
	//__fpurge(stdin);
	scanf("%c", &s_p);
	//printf("%d   %d   %d", R1, R2, s_p);
	RT = calculo_resistencia(R1, R2, s_p);
	printf("RT = %.3f", RT);
	return 0;
}

float calculo_resistencia (int valor_a, int valor_b, char tipo)
{
	float resultado;
	if ((tipo == 'S') || (tipo == 's')) // SERIE
	{
		resultado = valor_a + valor_b;
	}
	if ((tipo == 'P') || (tipo == 'p')) // PARALELO
	{
		//float R1 = 1/valor_a;
		//float R2 = 1/valor_b;
		//resultado = (1/((1/valor_a)+(1/valor_b)));

		// 100 y 55 --> 35.483

		resultado = ((float)(valor_a * valor_b) / (float)(valor_a + valor_b));
	}
	return (resultado);
}