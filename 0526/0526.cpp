#include <iostream>
#include "Func.h"

using namespace std;

void Practice1()
{
	int num = 0;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		sum += num;
	}
	cout << sum;
}
void Practice2()
{
	char name[20];
	char telNum[20];

	cout << "�̸� �Է� : ";
	cin >> name;
	cout << "��ȭ��ȣ �Է� : ";
	cin >> telNum;
	//cin >> telNum;
	cout << "�̸� : " << name << endl;
	cout << "��ȭ��ȣ: " << telNum << endl;

}

void Practice3()
{
	int num = 0;
	cout << "�� �Է� : ";
	cin >> num;
	cout << num << "�� ���" << endl;
	for (int i = 1; i < 10; i++)
	{
		cout << num << " X " << i << " = " << num * i << endl;
	}
}


void Practice4()
{
	int sale = 0;
	while (sale != -1)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> sale;
		if(sale != -1)
			cout << "�̹� �� �޿� : " << 50 + sale * 0.12 << "����" << endl;
	}
	cout << "���α׷��� �����մϴ�.";
}

void Swap(int& num1, int num2)
{

	int temp = num1;
	num1 = num2;
	num2 = temp;

}
void Swap(char* word1, char* word2)
{
	cout << *word1 << " " << *word2 << endl;

	int temp = *word1;
	*word1 = *word2;
	*word2 = temp;

	cout << *word1 << " " << *word2 << endl;

}
void Swap(double* num1, double* num2)
{
	cout << *num1 << " " << *num2 << endl;

	double temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	cout << *num1 << " " << *num2 << endl;
}

void Practice5()
{
	int num1 = 20;
	int num2 = 30;
	char word1 = 'A';
	char word2 = 'Z';
	double d1 = 1.111;
	double d2 = 5.555;
	cout << num1 << " " << num2 << endl;
	Swap(num1, num2);
	cout << num1 << " " << num2 << endl;
	Swap(&word1, &word2);
	Swap(&d1, &d2);
}
int BoxVolume(int length)
{
	return length;
}
int BoxVolume(int length, int width)
{
	return length * width;
}
int BoxVolume(int length, int width, int height )
{
	return length * width * height;
}

void Practice6()
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	//	std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;  
}

void Practice7()
{
	// �Ѵ� ���ڸ� �ȳѱ��� � �Լ��� ������� ��ȣ�ϴ�
	// SimpleFunc(); a = 11? , a = 10?
}

void Practice8()
{
	BestComImp1::SimpleFunc();
}

int main(void)
{ 
	Practice5();
	return 0;
}