#include <iostream>
#include "Func.h"
using namespace std;

void BestComImp1::SimpleFunc(void)
{
	cout << "BestCom이 정의한 함수" << endl;
	PrettyFunc();
	ProgComImp1::SimpleFunc();
}

void BestComImp1::PrettyFunc(void)
{
	cout << "So Pretty!!" << endl;
}

void ProgComImp1::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}