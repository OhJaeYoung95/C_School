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
	printf("저자: ");
	scanf("%s", book->authorName);
	getchar();

	printf("제목: ");
	fgets(book->title, sizeof(book->title), stdin);
	//if (book->title[strlen(book->title)] == '\n')
	//	book->title[strlen(book->title)] = '\0';

	printf("페이지 수: ");
	scanf("%d", &book->page);
}
void OutPutBookInfo(LibraryManage* book)
{
	printf("저자: ");
	printf("%s\n", book->authorName);
	printf("제목: ");
	printf("%s", book->title);
	printf("페이지 수: ");
	printf("%d\n", book->page);
}


int main()
{
	LibraryManage book[3];

	printf("도서 정보 입력\n");
	for (int i = 0; i < 3; i++)
	{
		InputBookInfo(&book[i]);
	}
	printf("\n\n도서 정보 출력\n");
	for (int i = 0; i < 3; i++)
	{
		printf("book %d\n", i + 1);
		OutPutBookInfo(&book[i]);
	}


	return 0;
}