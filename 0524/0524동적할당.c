#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����1
void Practice1()
{
	char* str;
	int strLen = 0;
	//char *str1;
	printf("�Է��� ���ڿ��� �ִ� ���� �Է� : ");
	scanf("%d ", &strLen);

	str = (char*)malloc(sizeof(char) * (strLen+1));

	gets(str);

	for (int i = strLen; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	free(str);
	str = NULL;
}

// ����2
void Practice2()
{
	char str2[20];
	int len = 0;
	int count = 0;
	printf("���ڿ��� ���� �Է� : ");
	scanf("%d ", &len);

	char* str1 = (char)malloc(sizeof(char) * len + 1);
	memset(str1, 0, len + 1);

	gets(str1);

	for (int i = len; i >= 0; i--)
	{

		if (str2[count] = getchar() != ' ')
		{
			 
			count++;
			continue;
		}


		printf("%c", str1[i]);
	}

	free(str1);
	str1 = NULL;
}

int main()
{
	Practice1();

	return 0;
}