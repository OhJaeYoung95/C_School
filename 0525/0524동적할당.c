#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 문제1
void Practice1()
{
	char* str;
	int strLen = 0;
	//char *str1;
	printf("입력할 문자열의 최대 길이 입력 : ");
	scanf("%d ", &strLen);

	str = (char*)malloc(sizeof(char) * (strLen+1));

	gets(str);

\
	for (int i = strLen; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	free(str);
	str = NULL;
}

// 문제2
void Practice2()
{
	int len = 0;
	int count = 0;
	printf("문자열의 길이 입력 : ");
	scanf("%d", &len);

	char* str1 = (char*)malloc(sizeof(char) * len + 1);
	memset(str1, 0, len + 1);

	getchar();

	fgets(str1, len + 1, stdin);
	if (str1[strlen(str1) - 1] == '\n')
		str1[strlen(str1) - 1] = '\0';



	for (int i = 0; i < (len - 1) / 2; i++)
	{
		char temp = str1[i];
		str1[i] = str1[len - 2 - i];
		str1[len - 2 - i] = temp;
	}


	//printf("%s", str1);




	for (int i = 0; i < len -1; i++)
	{			
		printf("%c", str1[i]);
	}




	free(str1);
	str1 = NULL;
}

int main()
{
	Practice2();

	return 0;
}