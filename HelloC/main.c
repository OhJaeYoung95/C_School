#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	printf("���� 02 - 1\n");
	printf("���� 1\n");
	printf("ȫ�浿\nȫ �� ��\nȫ  ��  ��");

	printf("���� 2\n");
	printf("���翵\n");
	printf("���� ������ õ�߷� xx�� xx\n");
	printf("010-8923-9520\n");
	
	printf("���� 02 - 2\n");
	printf("���� 1\n");
	printf("�� �̸��� ȫ�浿 �Դϴ�.\n");
	printf("�� ���̴� %d\n", 20);
	printf("���� ��� ���� �������� %d-%d�Դϴ�.\n",123, 456);


	printf("���� 2\n");
	printf("%d X %d = %d\n", 4, 5, 4 * 5);
	printf("%d X %d = %d\n", 7, 9, 7 * 9);

	printf("���� 03 - 1\n");
	printf("���� 1\n");
	int input1, input2;
	scanf("%d", &input1);
	scanf("%d", &input2);
	printf("%d - %d = %d\n",input1, input2, input1 - input2);
	printf("%d * %d = %d\n",input1, input2, input1 * input2);

	printf("���� 2\n");
	int input3, input4, input5;
	scanf("%d %d %d", &input3, &input4, &input5);
	printf("%d x %d + %d = %d\n", input3, input4, input5, input3 * input4 + input5);

	printf("���� 3\n");
	int input6;
	scanf("%d", &input6);
	printf("%d�� ���� = %d\n", input6, input6 * input6);

	printf("���� 4\n");
	int input7, input8;
	scanf("%d %d", &input7, &input8);
	printf("%d�� %d�� ������ �� : %d ������ :%d\n", input7, input8, input7 / input8, input7 % input8);

	printf("���� 5\n");
	int input9, input10, input11;
	scanf("%d %d %d", &input9, &input10, &input11);
	int sum = (input9 - input10)*(input10 + input11)*(input11 % input9);
	printf("(%d - %d)(%d + %d)(%d ������ %d) = %d \n", input9, input10, input10, input11, input11, input9, sum);

	return 0;
}