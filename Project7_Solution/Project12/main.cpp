#include <iostream>

using namespace std;

//������Ÿ�� ���� default parameter�� �� �� �Ѱ����� ����ؾ� ��
void print(int x = 10, int y = 20, int z = 30);

//default parameter : �Ķ���� �⺻��
//default parameter�� �� �� �� �� �Ķ���ʹ� �� default parameter���� �Ѵ�
void print(int x, int y, int z)
{
    cout << x << " " << y << " " << z << endl;
}

int main()
{
    print();
    print(100);
    print(100, 200);
    print(100, 200, 300);

    return 0;
}