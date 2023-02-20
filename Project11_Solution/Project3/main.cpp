#include <iostream>

using namespace std;

class Mother
{
//private:
public:
    int m_i;

    Mother(const int& i_in = 0)
        :m_i(i_in)
    {
        cout << "Mother Construction" << endl;
    }
};

class Child : public Mother
{
public:
    double m_d;
public:
    Child()
        //�θ� ������ ���� ������� �θ� �����ڿ��� ���� �ʱ�ȭ �ϰ�
        //���� �ڽ� �����ڰ� �ʱ�ȭ ��
        :m_d(1.0), Mother(1024)
    {
        //this->m_i = 10; //�θ� Ŭ���� public, protected �϶� ����
        //this->Mother::m_i = 1024;
        cout << "Child Construction" << endl;
    }
};

class A
{
public:
    A()
    {
        cout << "A constructor" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B constructor" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C constructor" << endl;
    }
};
int main()
{
    //�θ� �����ڰ� ȣ��Ǽ� �ʱ�ȭ �� ���� �ڽ� �����ڰ� �ʱ�ȭ��
    //Child c1; 

    //����� ������ �� ���� �ֻ��� �θ� �����ں��� ȣ�� ��
    C c;
    return 0;
}