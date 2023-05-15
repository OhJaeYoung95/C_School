#include <stdio.h>

void IntToBinary(int n, char* binary) {
	int i;
	for (i = 31; i >= 0; i--) {
		binary[31 - i] = (n & (1 << i)) ? '1' : '0';
	}
	binary[32] = '\0';
}

int main()
{
	//int num1;
	//printf("문제1\n");
	//scanf("%d", &num1);
	//printf("%d\n", ~num1 + 1);

	//printf("문제2\n");
	//printf("%d\n", 3 << 3 >> 2);

	//printf("문제3\n");
	//unsigned int num, d;
	//printf("정수 입력: ");
	//scanf("%x", &num);

	//char buffer[33];
	//IntToBinary(num, buffer);
	//printf("%s\n", buffer);

	//printf("몇번 회전?");
	//scanf("%u", &d);

	//unsigned int result = num<<32-d | num>>d;
	//IntToBinary(result, buffer);
	//printf("%s\n", buffer);
	
	//printf("문제 05 - 1\n");
	//printf("문제1\n");
	//
	//int inputX1, inputY1, inputX2, inputY2;

	//printf("좌 상단의 x, y 좌표를 입력하세여\n");
	//scanf("%d %d", &inputX1, &inputY1);

	//printf("우 하단의 x, y 좌표를 입력하세여\n");
	//scanf("%d %d", &inputX2, &inputY2);

	//int area = (inputX2 - inputX1) * (inputY2 - inputY1);

	//printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", area);

	//printf("문제2\n");

	//float input1, input2;
	//
	//scanf("%f %f", &input1, &input2);

	//printf("%f + %f = %f\n", input1, input2, input1 + input2);
	//printf("%f - %f = %f\n", input1, input2, input1 - input2);
	//printf("%f x %f = %f\n", input1, input2, input1 * input2);
	//printf("%f / %f = %f\n", input1, input2, input1 / input2);


	//printf("문제3\n");
	//printf("질문1 : 0~127 \n");
	//printf("질문2 : 1씩 증가한다\n");
	//printf("질문3 : a와 A 사이에는 %d개의 문자가 있다! \n", 'a'-'A');

	//printf("문제4\n");
	//int input3;
	//printf("사용자 숫자 입력 :\n");
	//scanf("%d", &input3);
	//printf("문자 출력 : %c\n", input3);

	//printf("문제5\n");
	//char input4;
	//printf("사용자 문자 입력 :\n");
	//scanf(" %c", &input4);
	//printf("숫자 출력 : %d\n", input4);

	int dan = 0, num = 1;
	printf("몇 단 ? ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %2d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}