#define ADD(A, B, C) ((A) + (B) + (C))
#define MULTIPLY(A, B, C) ((A)*(B)*(C))
#define PI (3.14)
#define CIRCLE(R) ((PI)*(R)*(R)) 
#define MAX(A,B) (((A) > (B)) ? (A) : (B))

#include <stdio.h>


void Practice1()
{
	int a = 2;
	int b = 2;
	int c = 3;

	printf("���� : %d, ���� : %d\n", ADD(a, b, c), MULTIPLY(a, b, c));

}
void Practice2()
{
	double rad = 2;
	printf("���� ���� : %g \n", CIRCLE(rad));
}

void Practice3()
{
	int num1 = 10;
	int num2 = 20;
	printf("ū �� : %d\n", MAX(num1, num2));
}
int main()
{
	Practice3();
}