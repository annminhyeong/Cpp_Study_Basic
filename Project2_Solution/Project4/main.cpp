#include <iostream>

using namespace std;


void my_function(void)
{

}

int main()
{
    //void�� �޸𸮸� �������� �ʱ⶧���� Ÿ�� ���� �Ұ���
    //void my_void;

    int i = 123;
    float f = 123.456f;

    //������ Ÿ���� �ٸ����� �ּҸ� ǥ���ϴ� ������ũ��� ������
    void* my_void;

    my_void = (void*)&i;
    my_void = (void*)&f;

    return 0;
}