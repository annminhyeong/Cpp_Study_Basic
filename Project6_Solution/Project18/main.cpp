#include <iostream>

using namespace std;

//��������(&)�� ����ϸ� ������ �ּ� �״�� �ѱ��
//������� ������ ���� �����ؼ� �����Ѵ�
void doSomething(int& n)
{
    n = 10;
    cout << "In doSomething() " << n << " " << (intptr_t)&n << endl;
}

int main()
{
    int n = 5;

    cout << "In main() " << n << " " << (intptr_t)&n << endl;
    
    doSomething(n);

    cout << "In main() " << n << " " << (intptr_t)&n << endl;
    return 0;
}