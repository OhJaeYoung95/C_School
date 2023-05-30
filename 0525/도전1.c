#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char title[20];
	char authorName[20];
	int page;
}LibraryManage;

void InputBookInfo(LibraryManage* book)
{
	printf("����: ");
	scanf("%s", book->authorName);
	getchar();

	printf("����: ");
	fgets(book->title, sizeof(book->title), stdin);
	//if (book->title[strlen(book->title)] == '\n')
	//	book->title[strlen(book->title)] = '\0';

	printf("������ ��: ");
	scanf("%d", &book->page);
}
void OutPutBookInfo(LibraryManage* book)
{
	printf("����: ");
	printf("%s\n", book->authorName);
	printf("����: ");
	printf("%s", book->title);
	printf("������ ��: ");
	printf("%d\n", book->page);
}


int main()
{
	LibraryManage book[3];

	printf("���� ���� �Է�\n");
	for (int i = 0; i < 3; i++)
	{
		InputBookInfo(&book[i]);
	}
	printf("\n\n���� ���� ���\n");
	for (int i = 0; i < 3; i++)
	{
		printf("book %d\n", i + 1);
		OutPutBookInfo(&book[i]);
	}


	return 0;
}