#include <iostream>

using namespace std;

class Something
{
public:

    int m_value = 0;
    
    //�Լ� �Ķ������ �ν��Ͻ� ������ ��������(&) Ÿ���� �ƴ� ��쿡�� 
    //�ν��Ͻ��� ���� ���� ���� �����ؼ� �Լ����� ������ (�ּҰ� �޶���)
    //default copy contructor (������ �����Ϸ��� �ڵ����� �߰�����, ��������)
    Something(const Something& st_in)
    {
        cout << "Copy Constructor" << endl;
        m_value = st_in.m_value;
    }

    Something()
    {
        cout << "Constructor" << endl;
    }

    void setValue(int value)
    {
        m_value = value;
    }
    
    //�ɹ� �Լ� const�� �����, �ɹ������� ���� �ȹٲ۴ٴ� �ǹ�
    int getValue() const
    {
        return m_value; 
    }

};

//�Լ� �Ķ������ �ν��Ͻ� ������ �������� Ÿ���� ���
//���� �ν��Ͻ��� �ּҰ��� �����ؼ� �Լ����� ������ (�ּҰ� ����)
void print(const Something& st)
{
    cout << &st << endl;
    cout << st.getValue() << endl;
}

int main()
{
    //Ŭ������ ���� ������� �ν��Ͻ��� ���� ����� ����
    //const Something something;

    //�� ���� X
    //something.setValue(3);

    //�ν��Ͻ��� ����� ����������� const member function()�� ��밡��
    //cout << something.getValue() << endl;

    Something something;
    
    //cout << &something << endl;
    //print(something);


    return 0;
}