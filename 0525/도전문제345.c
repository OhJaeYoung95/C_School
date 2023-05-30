#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ����3
typedef struct
{
	double real;
	double imag;
} ComplexNumber;
ComplexNumber AddComplexNumber(const ComplexNumber* num1, const ComplexNumber* num2)
{
	ComplexNumber result;
	result.real = num1->real + num2->real;
	result.imag = num1->imag + num2->imag;

	return result;
}
ComplexNumber MulComplexNumber(const ComplexNumber* num1, const ComplexNumber* num2)
{
	ComplexNumber result;
	result.real = (num1->real * num2->real) - (num1->imag * num2->imag);
	result.imag = (num1->real * num2->imag) + (num1->imag * num2->real);
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


	ComplexNumber addResult = AddComplexNumber(&cn1, &cn2);
	ComplexNumber mulResult = MulComplexNumber(&cn1, &cn2);

	printf("���� ���] �Ǽ� : %f, ��� : %f\n", addResult.real, addResult.imag);
	printf("���� ���] �Ǽ� : %f, ��� : %f\n", mulResult.real, mulResult.imag);
}

// ���� 4

void CreateFile()
{
	char words[100];
	FILE* file = fopen("text.txt", "wt");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}

	printf("�ܾ� �ټ��� �Է� : \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �ܾ� �Է� : ", i+1);
		fgets(words, sizeof(words), stdin);
		fprintf(file, "%s", words);
	}

	fclose(file);
}
int countWords(const char* filename) {
	FILE* file = fopen(filename, "rt");
	if (file == NULL) {
		printf("������ �� �� �����ϴ�.\n");
		return -1;
	}

	int countA = 0;
	int countP = 0;
	char word[100];

	while (fscanf(file, "%s", word) != EOF) {
		if ((word[0] == 'A' || word[0] == 'a')) {
			countA++;
		}
		else if ((word[0] == 'P' || word[0] == 'p')) {
			countP++;
		}
	}

	printf("A�� �����ϴ� �ܾ��� ��: %d\n", countA);
	printf("P�� �����ϴ� �ܾ��� ��: %d\n", countP);

	fclose(file);

	return 0;
}
void Practice4()
{
	char* filename = "text.txt";
	CreateFile();
	countWords(filename);
	//fscanf(file, "%s", string);

}

// ���� 5

void CreateFilesNComp(char* fileName1,char* fileName2)
{
	FILE* file1 = fopen(fileName1, "wt");
	FILE* file2 = fopen(fileName2, "wt");
	if (file1 == NULL || file2 == NULL)
	{
		printf("������ �� �� �����ϴ�.\n");
		return -1;
	}

	char words1[100];
	char words2[100];

	printf("d1���� �ؽ�Ʈ �Է� : ");
	fgets(words1, sizeof(words1), stdin);
	printf("d2���� �ؽ�Ʈ �Է� : ");
	fgets(words2, sizeof(words2), stdin);

	fprintf(file1, "%s", words1);
	fprintf(file2, "%s", words2);
	//fgets(words1, sizeof(words1), file1);
	//fgets(words2, sizeof(words2), file2);

	fclose(file1);
	fclose(file2);
	file1 = NULL;
	file2 = NULL;
}

void Comp(char* fileName1, char* fileName2)
{
	FILE* file1 = fopen(fileName1, "rt");
	FILE* file2 = fopen(fileName2, "rt");
	if (file1 == NULL || file2 == NULL)
	{
		printf("������ �� �� �����ϴ�.\n");
		return -1;
	}
	char string1[100];
	char string2[100];

	fscanf(file1, "%s", string1);
	fscanf(file2, "%s", string2);

	fclose(file1);
	fclose(file2);
	file1 = NULL;
	file2 = NULL;

	for (int i = 0; i < sizeof(string1); i++)
	{
		if (string1[i] != string2[i])
		{
			printf("�� ���� ������ ��ġ���� �ʽ��ϴ�!\n");
			return 0;
		}
	}

	printf("�� ���� ������ ������ ��ġ�մϴ�!\n");

}

void Practice5()
{
	char* fileName1 = "d1.txt";
	char* fileName2 = "d2.txt";

	CreateFilesNComp(fileName1, fileName2);
	Comp(fileName1, fileName2);
}

int main()
{
	Practice4();
	return 0;
}