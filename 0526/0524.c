#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// ���� 1: ���̳ʸ� ������ �����ϴ� �Լ��� �ۼ��Ͻÿ�.
void CreateBinaryFile(char* fileName);
void Practice1();
// ���� 2: ���̳ʸ� ���Ͽ� ������ ���� �Լ��� �ۼ��Ͻÿ�.
void WriteIntToBinaryFile(char* fileName, int num);
void Practice2();
// ���� 3: ���̳ʸ� ���Ͽ��� ������ �д� �Լ��� �ۼ��Ͻÿ�.
int ReadIntFromBinaryFile(char* fileName);
void Practice3();
// ���� 4: ���̳ʸ� ���Ͽ� ���� �迭�� ���� �Լ��� �ۼ��Ͻÿ�.
void WriteIntArrayToBinaryFile(char* fileName, int* arr, int size);
void Practice4();
// ���� 5: ���̳ʸ� ���Ͽ��� ���� �迭�� �д� �Լ��� �ۼ��Ͻÿ�.
void ReadIntArrayFromBinaryFile(char* fileName, int* arr, int size);
void Practice5();
// ���� 6: ���̳ʸ� ���Ͽ� ������ �߰��ϴ� �Լ��� �ۼ��Ͻÿ�.
void AppendIntToBinaryFile(char* fileName, int num);
void Practice6();
// ���� 7: ���̳ʸ� ���Ͽ� �ִ� ������ ������ ���� �Լ��� �ۼ��Ͻÿ�.
int CountIntsInBinaryFile(char* fileName);
void Practice7();

// ���� 8: ���̳ʸ� ���Ͽ��� �ִ� ������ ã�� �Լ��� �ۼ��Ͻÿ�.
int FindMaxIntInBinaryFile(char* fileName);
void Practice8();

// ���� 9: ���̳ʸ� ���Ͽ� ���ڿ��� ���� �Լ��� �ۼ��Ͻÿ�.
void WriteStringToBinaryFile(char* fileName, char* str);
void Practice9();

// ���� 10: ���̳ʸ� ���Ͽ��� ���ڿ��� �д� �Լ��� �ۼ��Ͻÿ�.
void ReadStringFromBinaryFile(char* fileName, char* str);
void Practice10();

int main()
{
	Practice10();
	return 0;
}

// ���� 1: ���̳ʸ� ������ �����ϴ� �Լ��� �ۼ��Ͻÿ�.
void CreateBinaryFile(char* fileName)
{
	FILE* file = fopen(fileName, "wb");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}
	fclose(file);
}
void Practice1()
{
	CreateBinaryFile("BinaryFile.txt");
}

// ���� 2: ���̳ʸ� ���Ͽ� ������ ���� �Լ��� �ۼ��Ͻÿ�.
void WriteIntToBinaryFile(char* fileName, int num)
{
	FILE* file = fopen("BinaryFile.txt", "wb");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}

	fwrite(&num, sizeof(int), 1, file);

	fclose(file);

}
void Practice2()
{
	WriteIntToBinaryFile("BinaryFile.txt", 5);
}

// ���� 3: ���̳ʸ� ���Ͽ��� ������ �д� �Լ��� �ۼ��Ͻÿ�.
int ReadIntFromBinaryFile(char* fileName)
{
	int num;
	FILE* file = fopen(fileName, "rb");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}

	int count = fread(&num, sizeof(int), 1, file);
	if (count < 1)
	{
		puts("���̳ʸ� ���� �б� ����");
		return -1;
	}
	fclose(file);
	return num;
}
void Practice3()
{
	int num = ReadIntFromBinaryFile("BinaryFile.txt");
	printf("%d", num);
}

// ���� 4: ���̳ʸ� ���Ͽ� ���� �迭�� ���� �Լ��� �ۼ��Ͻÿ�.
void WriteIntArrayToBinaryFile(char* fileName, int* arr, int size)
{
	FILE* file = fopen(fileName, "wb");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}

	fwrite(arr, sizeof(int), size, file);

	fclose(file);
}
void Practice4()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int arrLen = sizeof(arr) / sizeof(int);
	WriteIntArrayToBinaryFile("BinaryFile.txt", arr, arrLen);
}

// ���� 5: ���̳ʸ� ���Ͽ��� ���� �迭�� �д� �Լ��� �ۼ��Ͻÿ�.
void ReadIntArrayFromBinaryFile(char* fileName, int* arr, int size)
{
	FILE* file = fopen(fileName, "rb");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}
	fread(arr, sizeof(int), size, file);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	fclose(file);
}
void Practice5()
{
	int arr[5];
	int arrLen = sizeof(arr) / sizeof(int);
	ReadIntArrayFromBinaryFile("BinaryFile.txt", arr, arrLen);
}

// ���� 6: ���̳ʸ� ���Ͽ� ������ �߰��ϴ� �Լ��� �ۼ��Ͻÿ�.
void AppendIntToBinaryFile(char* fileName, int num)
{
	FILE* file = fopen(fileName, "ab");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}

	fwrite(&num, sizeof(int), 1, file);
	fclose(file);
}
void Practice6()
{
	int addNum = 100;
	AppendIntToBinaryFile("BinaryFile.txt", addNum);
}

// ���� 7: ���̳ʸ� ���Ͽ� �ִ� ������ ������ ���� �Լ��� �ۼ��Ͻÿ�.
int CountIntsInBinaryFile(char* fileName)
{
	int num;
	int count = 0;
	FILE* file = fopen(fileName, "rb");

	while (fread(&num, sizeof(int), 1, file) == 1)
		count++;
	return count;
}
void Practice7()
{
	int count = CountIntsInBinaryFile("BinaryFile.txt");
	printf("���� ���� : %d", count);
}

// ���� 8: ���̳ʸ� ���Ͽ��� �ִ� ������ ã�� �Լ��� �ۼ��Ͻÿ�.
int FindMaxIntInBinaryFile(char* fileName)
{
	int max = 0;
	int num;
	FILE* file = fopen(fileName, "rb");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}

	while (fread(&num, sizeof(int), 1, file))
	{
		if (num > max)
			max = num;
	}
	fclose(file);
	return max;
}
void Practice8()
{
	int max = FindMaxIntInBinaryFile("BinaryFile.txt");
	printf("�ִ밪 : %d\n", max);
}

// ���� 9: ���̳ʸ� ���Ͽ� ���ڿ��� ���� �Լ��� �ۼ��Ͻÿ�.
void WriteStringToBinaryFile(char* fileName, char* str)
{
	FILE* file = fopen(fileName, "wb");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}
	fwrite(str, sizeof(char), strlen(str)+1, file);
	fclose(file);
}
void Practice9()
{
	char str[20];
	gets(str);
	WriteStringToBinaryFile("BinaryFile.txt", str);
}

// ���� 10: ���̳ʸ� ���Ͽ��� ���ڿ��� �д� �Լ��� �ۼ��Ͻÿ�.
void ReadStringFromBinaryFile(char* fileName, char* str)
{
	int i = 0;
	char word;
	FILE* file = fopen(fileName, "rb");
	if (file == NULL)
	{
		puts("���� ����");
		return -1;
	}

	//fread(str, sizeof(char), sizeof(str), file);
	fread(str, sizeof(char), strlen(str), file);
	for (i = 0; i < strlen(str); i++)
	{
		word = fgetc(file);
		printf("%c", word);
	}
	fclose(file);
}
void Practice10()
{
	char str[20];
	ReadStringFromBinaryFile("BinaryFile.txt", str);
	//printf("%s", str);

}
