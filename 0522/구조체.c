#include <stdio.h>

struct employee
{
	char name[20];
	char id[20];
	int pay;
};

int main()
{
	struct employee man1;

	printf("������ �̸� �Է� : ");
	scanf("%s", man1.name);
	while (getchar() != '\n');
	printf("������ �ֹε�Ϲ�ȣ �Է� : ");
	fgets(man1.id, sizeof(man1.id), stdin);
	if (man1.id[(strlen(man1.id) - 1)] == '\n')
		man1.id[(strlen(man1.id) - 1)] = '\0';
	printf("������ ���� �Է� : ");
	scanf("%d", &man1.pay);


	printf("�̸� ��� : %s \n", man1.name);
	printf("�ֹε�Ϲ�ȣ ��� : %s \n", man1.id);
	printf("���� ��� : %d \n", man1.pay);
	return 0;
}