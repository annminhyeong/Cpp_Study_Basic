#include <iostream>
#include "MyConstants.h"

using namespace std;

//extern���� ����� ������ �� �������� �ʱ�ȭ �ؾ� ��
extern int a = 456;

//���� �������� : �ٸ� cpp���Ͽ��� ���� �Ұ���
//static int g_a = 1;

//forward declaration (���� ����)
/*extern*/ void doSomething(); //extern�� ���� �Ǿ� ����

int main()
{
    doSomething();
    cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;
    return 0;
}