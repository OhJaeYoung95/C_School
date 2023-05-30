#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

// ����1
void Add(int& ref)
{
	ref++;
}
void SignChange(int& ref)
{
	ref *= -1;
}
void Practice1()
{
	int num1 = 1;
	Add(num1);
	SignChange(num1);
	cout << num1 << endl;
}

// ����2
void Practice2()
{
	// ����� �Ѱܼ� ������ �߻��Ѵ�.
}

// ����3
void SwapPointer(int* (&ptr1), int* (&ptr2))
{
	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}
void Practice3()
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout << "ptr1�� �� : " << *ptr1 << endl;
	cout << "ptr2�� �� : " << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << "ptr1�� �� : " << *ptr1 << endl;
	cout << "ptr2�� �� : " << *ptr2 << endl;
}

// ����4
void Practice4()
{
	const int num = 12;
	const int* ptr = &num;
	const int* ref = ptr;

	cout << *ref << endl;
}

// ����5
typedef struct
{
	int xPos;
	int yPos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* result = new Point;
	result->xPos = p1.xPos + p2.xPos;
	result->yPos = p1.yPos + p2.yPos;

	return *result;
}
void Practice5()
{
	Point* p1 = new Point;
	Point* p2 = new Point;

	p1->xPos = 1;
	p1->yPos = 5;

	p2->xPos = 3;
	p2->yPos = 3;

	Point* result;
	result = &PntAdder(*p1, *p2);
	cout << "xPos �հ� : " << result->xPos << endl;
	cout << "yPos �հ� : " << result->yPos << endl;

	delete p1;
	delete p2;
	delete result;
}

// ����6
void Practice6()
{
	char words1[20] = "C";
	char words2[30] = "++";
	char words3[20] = "C#";
	cout << "���ڿ� ���� : " << strlen(words1) << endl;
	strcat(words1, words2);
	cout << "���ڿ� ���� : " << words1 << endl;
	strcpy(words1, words3);
	cout << "���ڿ� ���� : " << words1 << endl;
	if (strcmp(words1, words2))
		cout << "���ڿ� 1 : "<<words1 << endl<<"���ڿ� 2 : " << words3 <<endl<< "���ڿ�1 ���ڿ�2�� ����" << endl;
	else
		cout << "���ڿ�1�� ���ڿ�2�� �ٸ���" << endl;
}

// ����7
void Practice7()
{
	int num;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++)
	{
		num = rand() % 100;
		cout << i+1<<"��° ���� : " << num << endl;
	}
}

int main()
{
	Practice5();

	return 0;
}