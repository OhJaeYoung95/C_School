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
	int bookNum = 0;
	printf("�Է� �� ������ �� : ");
	scanf("%d", &bookNum);
	//LibraryManage** books = (LibraryManage**)malloc(sizeof(LibraryManage*) * bookNum);

	LibraryManage* books[3];
	for (int i = 0; i < bookNum; i++)
	{
		books[i] = (LibraryManage*)malloc(sizeof(LibraryManage));
	}

	printf("���� ���� �Է�\n");
	for (int i = 0; i < bookNum; i++)
	{
		InputBookInfo(books[i]);
	}
	printf("\n\n���� ���� ���\n");
	for (int i = 0; i < bookNum; i++)
	{
		printf("book %d\n", i + 1);
		OutPutBookInfo(books[i]);
		free(books);
	}
	return 0;
}