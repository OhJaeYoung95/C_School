#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ����3
typedef struct
{
	double real;
	double imag;
} ComplexNumber;
ComplexNumber AddComplexNumber(ComplexNumber num1, ComplexNumber num2)
{
	ComplexNumber result;
	result.real = num1.real + num2.real;
	result.imag = num1.imag + num2.imag;

	return result;
}
ComplexNumber MulComplexNumber(ComplexNumber num1, ComplexNumber num2)
{
	ComplexNumber result;
	result.real = (num1.real * num2.real) - (num1.imag * num2.imag);
	result.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
	return result;
}
void Practice3()
{
	ComplexNumber cn1;
	ComplexNumber cn2;

	
	printf("���Ҽ� �Է� 1[�Ǽ� ���] : ");
	scanf("%lf %lf", &cn1.real, &cn1.imag);
	printf("���Ҽ� �Է� 2[�Ǽ� ���] : ");
	scanf("%lf %lf", &cn2.real, &cn2.imag);


	ComplexNumber addResult = AddComplexNumber(cn1, cn2);
	ComplexNumber mulResult = MulComplexNumber(cn1, cn2);

	printf("���� ���] �Ǽ� : %f, ��� : %f\n", addResult.real, addResult.imag);
	printf("���� ���] �Ǽ� : %f, ��� : %f\n", mulResult.real, mulResult.imag);
}

// ���� 4

void CreateFile()
{
	char string[50];
	FILE* file = fopen("text.txt", "wt");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}
	puts(string);
	fprintf(file, "%s", string);
	

	fclose(file);
}

void Practice4()
{
	CreateFile();
	//fscanf(file, "%s", string);

}

int main()
{
	Practice4();
	return 0;
}