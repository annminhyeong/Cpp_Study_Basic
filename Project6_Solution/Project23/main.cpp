#include <iostream>

using namespace std;

enum Type
{
    INT,
    FLOAT,
    CHAR,
};


//void pointer, generic pointer

int main()
{
    int i = 5;
    char c = 'a';
    float f = 3.0;

    void* ptr = nullptr; //���� �ڷ��� �����͸� ���� �� ����

    ptr = &i;
    ptr = &c;
    ptr = &f;

    //cout << ptr + 1 << endl; //�ڷ����� ũ�⸦ �� �� ��� ������ ���� �Ұ���
    cout << &f << " " << ptr << endl;

    //int* ptr_i = &i; //�Ϲ� �����ʹ� ������ ���� ��밡��
    //cout << ptr_i << endl;
    //cout << ptr_i + 1 << endl;

    //cout << *ptr << endl; //void �����ʹ� �������Ҷ� ����ȯ �ؾ���
    cout << *static_cast<float*>(ptr) << endl;
    
    Type type = FLOAT;

    if(type == FLOAT)
        cout << *static_cast<float*>(ptr) << endl;
    else if(type == INT)
        cout << *static_cast<int*>(ptr) << endl;
    else if(type == CHAR)
        cout << *static_cast<char*>(ptr) << endl;

    return 0;
}