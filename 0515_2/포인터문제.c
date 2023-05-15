#include <stdio.h>
void Practice1();
void Practice2();

int main()
{
	Practice1();
	return 0;
}

void Practice1()
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d\n", num);
}

void Practice2()
{
	int num1 = 10;
	int num2 = 20;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1 : %d  ptr2 : %d", *ptr1, *ptr2);
}

