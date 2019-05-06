#include <stdio.h>

int InputPrint (char *Hcode) {
	printf("Input Yout Hexadecimal ColorCode (XXXXXX) : ");

	for (int i = 0; i < 6; i++)
		scanf(" %c", &Hcode[i]);

	printf("\n");

}

int OutPutPrint (int *Dcode) {
	printf("Decimal ColorCode : (");

	for (int i = 0; i < 3; i++) {
		printf("%d", Dcode[i]);

		if (i != 2)
			printf(",");
	}

	printf(") \n\n");
	printf("==================================\n\n");
}

int main () {

	char code_16 [6];
	int code_10[3];


	return 0;
}

