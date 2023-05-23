#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char num[20];
	char id[20];
	int pay;
};
void Practice()
{
	struct employee human[3];
	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 사람 정보 입력\n", i + 1);
		printf("번호 : ");
		scanf("%s", human[i].num);
		printf("주민등록번호 : ");
		scanf("%s", human[i].id);
		printf("월급 : ");
		scanf("%d", human[i].pay);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 사람 정보 출력: ", i + 1);
		printf("번호 : %s", human[i].num);
		printf("주민등록번호 : %s", human[i].id);
		printf("월급 : %s", human[i].pay);
	}
}

// 문제1
typedef struct
{
	int xPos;
	int yPos;
} Point1;
void Swap(Point1* pos1, Point1* pos2)
{
	//int temp = pos1->xPos;
	//pos1->xPos = pos2->xPos;
	//pos2->xPos = temp;

	//temp = pos1->yPos;
	//pos1->yPos = pos2->yPos;
	//pos2->yPos = temp;

	Point1 temp = *pos1;
	*pos1 = *pos2;
	*pos2 = temp;
}
void Practice1();

// 문제2
typedef struct
{
	int xPos;
	int yPos;
} Point2;
typedef struct
{
	Point2* point1;
	Point2* point2;
} Rectangle;
void Area(const Rectangle* rec)
{
	int width = 0;
	int height = 0;

	// 예외처리 : 같은 값 입력
	if (rec->point1->xPos == rec->point2->xPos || rec->point1->yPos == rec->point2->yPos)
	{
		printf("잘못된 입력\n");
		return;
	}

	// 대소 비교
	if (rec->point1->xPos > rec->point2->xPos)
		 width = rec->point1->xPos - rec->point2->xPos;
	else
		width = rec->point2->xPos - rec->point1->xPos;

	if (rec->point1->yPos > rec->point2->yPos)
		height = rec->point1->yPos - rec->point2->yPos;
	else
		height = rec->point2->yPos - rec->point1->yPos;

	int area = width * height;
	printf("넓이 : %d\n", area);
}
void PointCalculate(const Point2* point1, const Point2* point2)
{
	// 예외처리 : 같은 값 입력
	if (point1->xPos == point2->xPos || point1->yPos == point2->yPos)
	{
		printf("잘못된 입력\n");
		return;
	}

	Point2 pos1 = { point1->xPos, point1->yPos };
	Point2 pos2 = { point2->xPos, point2->yPos };
	Point2 pos3 = { point1->xPos, point2->yPos };
	Point2 pos4 = { point2->xPos, point1->yPos };

	printf("1번째 좌표 x: %d  y: %d\n", pos1.xPos, pos1.yPos);
	printf("2번째 좌표 x: %d  y: %d\n", pos2.xPos, pos2.yPos);
	printf("3번째 좌표 x: %d  y: %d\n", pos3.xPos, pos3.yPos);
	printf("4번째 좌표 x: %d  y: %d\n", pos4.xPos, pos4.yPos);
}
void Practice2();

// File
void File1();
void File2();
void File3();
void File4();

// 파일 문제1
void FilePractice1();

// 파일 문제2
void FilePractice2();

// 파일 문제3
void FilePractice3();

// 파일 문제4
void FilePractice4();

int main()
{
	FilePractice4();
	return 0;
}

// 문제1
void Practice1()
{
	Point1 pos1 = { 2, 4 };
	Point1 pos2 = { 5, 7 };
	Swap(&pos1, &pos2);
	printf("pos1 xPos : %d  yPos : %d\n", pos1.xPos, pos1.yPos);
	printf("pos2 xPos : %d  yPos : %d\n", pos2.xPos, pos2.yPos);
}

// 문제2
void Practice2()
{
	Point2 pos1 = { 0, 0 };
	Point2 pos2 = { 100, 100 };
	Rectangle rec = { &pos1, &pos2 };
	Area(&rec);
	PointCalculate(&pos1, &pos2);
}

// File
void File1()
{
	FILE* fp = fopen("test.txt", "wt");
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;	// 비정상적 종료 의미
	}

	fputc('A', fp);
	fputc('d', fp);
	fputc('C', fp);
	fclose(fp);		// 스트림 종료
}
void File2()
{
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}

	for (int i = 0; i < 3; i++)
	{
		char ch = fgetc(fp);
		printf("%c \n", ch);
	}

	fclose(fp);
}
void File3()
{

	FILE* fp = NULL;
	errno_t err = fopen_s(&fp, "friend.txt", "wt");
	if (err != 0)
	{
		printf("파일 열기 에러");
		return -1;
	}

	char name[10] = { 0 };
	char sex = 0;
	int age = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("이름 성별 나이 순 입력 : ");
		scanf_s("%s %c %d", name, (int)_countof(name), &sex, 1, &age);
		fprintf(fp, "%s %c %d\n", name, sex, age);
	}


	err = fclose(fp);
	if (err != 0)
	{
		printf("파일 닫기 에러");
	}
}
void File4()
{
	char name[10];
	char sex;
	int age;
	FILE* fp = fopen("friend.txt", "rt");
	int ret;

	while (1)
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF)
			break;
		printf("%s %c %d \n", name, sex, age);
	}

	fclose(fp);
}

// 파일 문제1
void FilePractice1()
{
	char name[20];
	char id[20];
	char num[20];


	FILE* fp = fopen("mystroy.txt", "wt");
	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}

	printf("#이름 : ");
	fgets(name, strlen(name), stdin);
	fputs("#이름 : ", fp);
	fputs(name, fp);

	printf("#주민번호 : ");
	fgets(id, strlen(id), stdin);
	fputs("#주민번호 : ", fp);
	fputs(id, fp);

	printf("#전화번호 : ");
	fgets(num, strlen(num), stdin);
	fputs("#전화번호 : ", fp);
	fputs(num, fp);
	//printf("#주민번호 : ");
	//fgets(id, strlen(id), stdin);
	//printf("#전화번호 : ");
	//fgets(num, strlen(num), stdin);


	fclose(fp);
}

// 파일 문제2
void FilePractice2()
{
	char food[20];
	char hobby[20];

	FILE* fp = fopen("mystroy.txt", "at");
	int ch = 0;

	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}

	printf("#즐겨먹는 음식 : ");
	fgets(food, strlen(food), stdin);
	fputs("#즐겨먹는 음식 : ", fp);
	fputs(food, fp);

	
	printf("#취미 : ");
	fgets(hobby, strlen(hobby), stdin);
	fputs("#취미 : ", fp);
	fputs(hobby, fp);


	fclose(fp);
}

// 파일 문제3
void FilePractice3()
{
	FILE* fp = fopen("mystroy.txt", "rt");
	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}
	int* ret;
	char str[50];

	while (1)
	{
		ret = fgets(str, sizeof(str),fp);
		if (*ret == EOF)
			break;
		printf("%s", str);
	}
		
	fclose(fp);
}

// 파일 문제4
void FilePractice4()
{
	int size = 0;

	FILE* fp = fopen("mystroy.txt", "rt");
	if (fp == NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}

	size = ByteCal(fp);
	printf("%d", size);

}

int ByteCal(FILE* file)
{
	long fPos = ftell(file);

	fseek(file, 0, SEEK_END);
	int size = ftell(file);
	fseek(file, fPos, SEEK_SET);

	return size;
}