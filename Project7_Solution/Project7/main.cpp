#include <iostream>

using namespace std;


int* getValue(int x)
{
    int value = x * 2;
    return &value;
}

int* allocateMemory(int size)
{
    return new int[size];
}

int main()
{
    ////�Լ��� ȣ��ǰ� ���ÿ��� �縮���� ���� �������ϴ� ���� ������ (���� ����)
    ////int value = *getValue(3);
    ////�Լ��� ���ÿ��� ������� �ǹ̾��� �ּҰ� ����Ǳ� ������ �� ������ (���� ����)
    //int* value = getValue(3);

    //cout << *value << endl;


    int* array = allocateMemory(100);


    delete[] array;

    return 0;
}