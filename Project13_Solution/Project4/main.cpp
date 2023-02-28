#include <iostream>
#include "Storage.h"
//#include "Storage.cpp" //�����Ϸ� ���̷� ���� ����

using namespace std;

template <typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

//�Լ� ���ø� Ư��ȭ
//char Ÿ������ ������ �� �Լ� ����
template <>
char getMax(char x, char y)
{
    cout << "Warning : comparing chars" << endl;
    return (x > y) ? x : y;

}

int main()
{
    //typename Ÿ���� double�� ����
    //cout << getMax<double>(1, 2) << endl;

    //cout << getMax<int>(1, 2) << endl;
    //cout << getMax('a', 'b') << endl;

    Storage<int> nValue(5);
    Storage<double> dValue(6.7);

    nValue.print();
    dValue.print();

    return 0;
}