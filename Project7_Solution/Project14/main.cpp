#include <iostream>

using namespace std;

int func(int x)
{
    return 5;
}

int goo(int y)
{
    return 10;
}

int main()
{
    //�Լ��� �ּҸ� ������ ����
    cout << func << endl;

    
    //�Լ� ������ ���� �ϴ� ��� : ����Ÿ��(*�Լ��������̸�)(�Ű�����)
    int(*fcnptr)(int) = func;
    
    //�Լ� ������ �������ϴ� ���
    cout << fcnptr(1) << endl;
    
    fcnptr = goo;

    cout << fcnptr(1) << endl;
    

    return 0;
}