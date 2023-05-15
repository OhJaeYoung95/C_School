#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	printf("문제 02 - 1\n");
	printf("문제 1\n");
	printf("홍길동\n홍 길 동\n홍  길  동");

	printf("문제 2\n");
	printf("오재영\n");
	printf("서울 강동구 천중로 xx길 xx\n");
	printf("010-8923-9520\n");
	
	printf("문제 02 - 2\n");
	printf("문제 1\n");
	printf("제 이름은 홍길동 입니다.\n");
	printf("제 나이는 %d\n", 20);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n",123, 456);


	printf("문제 2\n");
	printf("%d X %d = %d\n", 4, 5, 4 * 5);
	printf("%d X %d = %d\n", 7, 9, 7 * 9);

	printf("문제 03 - 1\n");
	printf("문제 1\n");
	int input1, input2;
	scanf("%d", &input1);
	scanf("%d", &input2);
	printf("%d - %d = %d\n",input1, input2, input1 - input2);
	printf("%d * %d = %d\n",input1, input2, input1 * input2);

	printf("문제 2\n");
	int input3, input4, input5;
	scanf("%d %d %d", &input3, &input4, &input5);
	printf("%d x %d + %d = %d\n", input3, input4, input5, input3 * input4 + input5);

	printf("문제 3\n");
	int input6;
	scanf("%d", &input6);
	printf("%d의 제곱 = %d\n", input6, input6 * input6);

	printf("문제 4\n");
	int input7, input8;
	scanf("%d %d", &input7, &input8);
	printf("%d를 %d로 나누면 몫 : %d 나머지 :%d\n", input7, input8, input7 / input8, input7 % input8);

	printf("문제 5\n");
	int input9, input10, input11;
	scanf("%d %d %d", &input9, &input10, &input11);
	int sum = (input9 - input10)*(input10 + input11)*(input11 % input9);
	printf("(%d - %d)(%d + %d)(%d 나눈값 %d) = %d \n", input9, input10, input10, input11, input11, input9, sum);

	return 0;
}