#include <iostream>

using namespace std;

//& �Ⱦ��� �Լ� �Ķ���� ��ü�� �ּҰ� ���ڷ� ���� ���� ������ ��ü�� �ּҿ� ��ġ���� �ʰ� ��
void foo(int*& ptr)
{
    cout << ptr << " " << &ptr << endl;
}

int main()
{
    int x = 5;
    int* ptr = &x;
    
    cout << ptr << " " << &ptr << endl;
    foo(ptr);

    return 0;
}