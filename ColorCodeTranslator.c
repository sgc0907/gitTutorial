#include <stdio.h>

int checkout(char *code) {

	int check = 0;

	for (int i = 0; i < 6; i++) {
		
		if(code[i] != '0')
			check++;

	}
	return check;
}

void SixTeenToTen(char *Hcode, int *Dcode) {
	for (int i = 0; i < 6; i++) {
		switch (Hcode[i]) {
		case 'A':
		case 'a':
			Hcode[i] = 10;
			break;
		case 'B':
		case 'b':
			Hcode[i] = 11;
			break;
		case 'C':
		case 'c':
			Hcode[i] = 12;
			break;
		case 'D':
		case 'd':
			Hcode[i] = 13;
			break;
		case 'E':
		case 'e':
			Hcode[i] = 14;
			break;
		case 'F':
		case 'f':
			Hcode[i] = 15;
			break;
		default:
			Hcode[i] -= 48;
			break;
		}
	}
	
	for (int i = 0; i < 3; i++)
		Dcode[i] = (int)Hcode[i*2] * 16 + (int)Hcode[i*2+1];

	return;
}


int InputPrint (char *Hcode) {
	printf("Input Yout Hexadecimal ColorCode (XXXXXX) : ");

	for (int i = 0; i < 6; i++)
		scanf(" %c", &Hcode[i]);

	printf("\n");

}

int OutputPrint (int *Dcode) {
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

	while(1) {
	
		InputPrint(code_16);

		if(checkout(code_16) == 0)
			return 0;

		SixTeenToTen(code_16, code_10);		//Translate

		OutputPrint(code_10)

	}
	return 0;
}

