#include <iostream>

using namespace std;


int main()
{
    int* ptr = nullptr;
    int** ptrptr = nullptr;

    int value = 5;
    ptr = &value;
    ptrptr = &ptr;
    //&ptr : ������ ��ü �ּ�, ptr : value�� �ּ�, *ptr : value�� ��
    cout << &ptr << " " << ptr << " " << *ptr << endl;
    
    //&ptrptr : ���� ������ ��ü �ּ�, ptrptr : �������� ��ü �ּ�
    //*ptrptr : value�� �ּ�, **ptrptr : value�� ��
    cout << &ptrptr << " " << ptrptr << " " << *ptrptr << " " << **ptrptr << endl;

    return 0;
}