#include <iostream>

using namespace std;

//��������
//int a = 1;

void dosomething()
{
    //��������
    //�Ź� ���������ӿ� �ö󰡼� ȣ��ɶ����� �ʱ�ȭ��
    //int a = 1; 
     
    //�ʱ�ȭ(�޸� �Ҵ�)�� �ѹ��ǰ� �� ���� �ȿ��� ������ ���� �� ���� �޸𸮸� ����Ѵ�
    //���� ����������
    static int a = 1;
    
    ++a;
    cout << a << endl;
}

int main()
{
    int a = 10;

    dosomething();
    dosomething();
    dosomething();
    dosomething();

    return 0;
}