#include <iostream>

using namespace std;

class Something
{
public:
    //���������� �����ڿ��� static ���� �ʱ�ȭ ���
    class _init
    {
    public:
        _init()
        {
            s_value = 9876;
        }
    };

private:
    static int s_value;
    int m_value;
    static _init s_initalizer;

public:
    Something()
        //Ŭ���� ������ �ν��Ͻ� ������ ���� �����ؾ��ϹǷ� ����
        :m_value(123) //,s_value(1024)
    {
        //�����ڿ��� Ŭ���� ���� �ʱ�ȭ �Ұ���
    }
    static int getValue()
    {
        //Ŭ���� ����, Ŭ���� �Լ��� this �Ұ���
        return /*this->*/s_value;
       
        //Ŭ���� �Լ����� �ν��Ͻ� ���� ��� �Ұ���
        ///return m_value;
    }

    int temp()
    {
        return this->s_value;
    }
};

int Something::s_value = 1024;
//Ŭ���� 
Something::_init Something::s_initalizer;
int main()
{
    //cout << Something::s_value << endl;
    cout << Something::getValue() << endl;

    Something s1, s2;
    cout << s1.getValue() << endl;
    //cout << s1.s_value << endl;

    //�Լ������� �ν��Ͻ� �Լ� ���� ���
    //�ν��Ͻ� �Լ��� �ν��Ͻ��� ������ ������ ����� ���� �ƴ϶� �Լ��� ������
    int (Something:: * fptr1)() = &Something::temp;    
    cout << (s2.*fptr1)() << endl;

    //�Լ������� Ŭ���� �Լ� ���� ���
    int (*fptr2)() = &Something::getValue;
    cout << fptr2() << endl;

    return 0;
}