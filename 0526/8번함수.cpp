#include <iostream>
#include "Func.h"
using namespace std;

void BestComImp1::SimpleFunc(void)
{
	cout << "BestCom�� ������ �Լ�" << endl;
	PrettyFunc();
	ProgComImp1::SimpleFunc();
}

void BestComImp1::PrettyFunc(void)
{
	cout << "So Pretty!!" << endl;
}

void ProgComImp1::SimpleFunc(void)
{
	cout << "ProgCom�� ������ �Լ�" << endl;
}