#include <iostream>

using namespace std;

class Something
{
public:
    static int s_value1 /*= 1*/; //Ŭ���� ������ ���� ���� �ʱ�ȭ �Ұ���
    
    //constexpr : ������ Ÿ�ӿ� ���� �����Ǵ� ��� ���
    static constexpr int s_value2 = 3; //����� ��� Ŭ���� �ȿ��� �ʱ�ȭ ����
};

//definded in cpp
int Something::s_value1 = 1; //Ŭ���� �ۿ��� ���� ���� �ʱ�ȭ ����

//int Something::s_value2 = 1; //����� ��� Ŭ���� �ۿ��� �ʱ�ȭ �Ұ��� 


int generateID()
{
    static int s_id;
    return ++s_id;
}

int main()
{
    cout << &Something::s_value1 << " " << Something::s_value1 << endl;

    Something st1;
    Something st2;

    st1.s_value1 = 2;

    cout << &st1.s_value1 << " " << st1.s_value1 << endl;
    cout << &st2.s_value1 << " " << st2.s_value1 << endl;

    Something::s_value1 = 1024;
    cout << &Something::s_value1 << " " << Something::s_value1 << endl;


    //Ŭ���� �����̹Ƿ� �Ұ���
    //Something::s_value2 = 3;

    return 0;
}