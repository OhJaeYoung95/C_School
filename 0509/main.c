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
	//printf("����1\n");
	//scanf("%d", &num1);
	//printf("%d\n", ~num1 + 1);

	//printf("����2\n");
	//printf("%d\n", 3 << 3 >> 2);

	//printf("����3\n");
	//unsigned int num, d;
	//printf("���� �Է�: ");
	//scanf("%x", &num);

	//char buffer[33];
	//IntToBinary(num, buffer);
	//printf("%s\n", buffer);

	//printf("��� ȸ��?");
	//scanf("%u", &d);

	//unsigned int result = num<<32-d | num>>d;
	//IntToBinary(result, buffer);
	//printf("%s\n", buffer);
	
	//printf("���� 05 - 1\n");
	//printf("����1\n");
	//
	//int inputX1, inputY1, inputX2, inputY2;

	//printf("�� ����� x, y ��ǥ�� �Է��ϼ���\n");
	//scanf("%d %d", &inputX1, &inputY1);

	//printf("�� �ϴ��� x, y ��ǥ�� �Է��ϼ���\n");
	//scanf("%d %d", &inputX2, &inputY2);

	//int area = (inputX2 - inputX1) * (inputY2 - inputY1);

	//printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n", area);

	//printf("����2\n");

	//float input1, input2;
	//
	//scanf("%f %f", &input1, &input2);

	//printf("%f + %f = %f\n", input1, input2, input1 + input2);
	//printf("%f - %f = %f\n", input1, input2, input1 - input2);
	//printf("%f x %f = %f\n", input1, input2, input1 * input2);
	//printf("%f / %f = %f\n", input1, input2, input1 / input2);


	//printf("����3\n");
	//printf("����1 : 0~127 \n");
	//printf("����2 : 1�� �����Ѵ�\n");
	//printf("����3 : a�� A ���̿��� %d���� ���ڰ� �ִ�! \n", 'a'-'A');

	//printf("����4\n");
	//int input3;
	//printf("����� ���� �Է� :\n");
	//scanf("%d", &input3);
	//printf("���� ��� : %c\n", input3);

	//printf("����5\n");
	//char input4;
	//printf("����� ���� �Է� :\n");
	//scanf(" %c", &input4);
	//printf("���� ��� : %d\n", input4);

	int dan = 0, num = 1;
	printf("�� �� ? ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %2d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}