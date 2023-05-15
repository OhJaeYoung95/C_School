#include <stdio.h>

int main(void)
{
	// 문제 07 - 1

	//printf("문제1 \n");
	//printf("반복 횟수 입력 : \n");
	//int input1 = 0;
	//scanf("%d", &input1);
	//printf("%d번 반복\n", input1);
	//for (int i = 0; i < input1; i++)
	//	printf("Hello World!\n");

	//printf("\n");
	//printf("문제2 \n");
	//printf("3의 배수 몇번 반복할지 입력 : \n");
	//int input2 = 0;
	//scanf("%d", &input2);
	//printf("3의 배수 %d번까지 출력\n", input2);
	//for(int i=0; i < input2; i++)
	//	printf("%d\n", 3 * (i+1));
	//printf("\n");

	//printf("문제3 \n");
	//int input3 = 0;
	//int result = 0;
	//printf("0이 나오면 종료\n");
	//do
	//{
	//	scanf("%d", &input3);
	//	result += input3;
	//} while (input3 != 0);

	//printf("합계 : %d \n", result);

	//printf("\n");
	//printf("문제4 \n");
	//int input4 = 0;

	//printf("구구단 역순으로 출력\n");
	//printf("몇 단 ? :");
	//scanf("%d", &input4);
	////for (int i = 9; i > 0; i--)
	////{
	////	printf("%d x %d = %2d\n", input4, i, input4 * i);
	////}
	//int i = 9;
	//while (i > 0)
	//{
	//	printf("%d x %d = %2d\n", input4, i, input4 * i);
	//	i--;
	//}


	//printf("\n");
	//printf("문제5 \n");
	//printf("몇 개의 정수를 입력 받을것인가? :");
	//int input5 = 0;
	//int input5_1 = 0;
	//int tryNum = 0;
	//int sum = 0;
	//scanf("%d", &input5);
	//printf("%d개의 정수 입력 : ", input5);
	//tryNum = input5;
	//while (1 <= input5)
	//{
	//	scanf("%d", &input5_1);
	//	sum += input5_1;
	//	input5--;
	//} 
	//printf("평균 : %lf \n", (double)sum/tryNum);

	// 문제 07 - 2

	//printf("\n");
	//printf("문제 6 \n");
	//printf("5개의 정수 입력 : ");
	//int input6 = 0;
	//int tryNum6 = 5;
	//int sum6 = 0;
	//while (tryNum6 > 0)
	//{
	//	scanf("%d", &input6);
	//	while (input6 >= 1)
	//	{
	//		sum6 += input6;
	//		input6 = 0;
	//		tryNum6--;
	//	}
	//}
	//printf("%d\n", sum6);
	//printf("\n");

	//printf("문제 7\n");
	//int star = 0;
	//int circle = 0;
	//while (star < 5)
	//{
	//	circle = 0;
	//	while (circle < star)
	//	{
	//		printf("O");
	//		circle++;
	//	}
	//	star++;

	//	printf("*");
	//	printf("\n");
	//}

	// 문제 07 - 3

	//printf("\n");
	//printf("문제 8-1\n");
	//int total = 0, num = 1;
	//while (num != 0)
	//{
	//	printf("정수 입력(0 to quit): ");
	//	scanf_s("%d", &num);
	//	total += num;
	//}
	//printf("합계: %d \n", total);

	//printf("\n");
	//printf("문제 8-2\n");
	//int total1 = 0, num1 = 0;
	//printf("정수 입력(0 to quit): ");
	//scanf_s("%d", &num1);
	//printf("정수 합계시작\n");
	//while (num1 != 0)
	//{
	//	printf("정수 입력(0 to quit): ");
	//	scanf_s("%d", &num1);
	//	total1 += num1;
	//}
	//printf("합계: %d \n", total1);

	//printf("\n");
	//printf("문제 9\n");
	//printf("짝수의 합을 출력하는 프로그램\n");

	//int sum9 = 0;
	//do
	//{
	//	sum9 += 2;
	//} while (sum9 <2550);
	//printf("%d\n", sum9);

	//printf("\n");

	//printf("문제 10\n");
	//int cur = 2;
	//int is = 0;

 //   // 2단부터 9단까지 반복
	//do
	//{
	//	is = 1;    // 새로운 단의 시작을 위해서
	//	while (is < 10)    // 각 단의 1부터 9의 곱을 표현
	//	{
	//		printf("%d×%d＝%d \n", cur, is, cur * is);
	//		is++;
	//	}
	//	cur++;    // 다음 단으로 넘어가기 위한 증가
	//	printf("\n");
	//}while (cur < 10);

// 문제 07-4

	//printf("\n");
	//printf("문제 11\n");
	//int input10_1 = 0;
	//int input10_2 = 0;
	//scanf("%d %d", &input10_1, &input10_2);

	//for (int i = input10_1+1; i <= input10_2; i++)
	//{
	//	input10_1 += i;
	//}
	//printf("합계 : %d", input10_1);

	//printf("\n");
	//printf("문제 12\n");
	//int input11 = 0;
	//int factorial = 1;
	//scanf("%d", &input11);
	//printf("%d factorial\n", input11);

	//for (int i = 1; i < input11+1; i++)
	//{
	//	factorial *= i;
	//}

	//printf("%d", factorial);


	return 0;
}