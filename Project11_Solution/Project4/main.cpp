#include <iostream>

using namespace std;

class Mother
{
private:
    int m_i;

public:
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
    //int m_temp; //�е� �߻�
public:
    Child()
        :m_d(1.0), Mother(1024)
    {
        cout << "Child Construction" << endl;
    }
};

class A
{
public:
    A(int a)
    {
        cout << "A: " << a << endl;
    }

    ~A()
    {
        cout << "Destructor A" << endl;
    }
};

class B : public A
{
public:
    B(int a, double d)
        :A(a)
    {
        cout << "B: " << d << endl;
    }

    ~B()
    {
        cout << "Destructor B" << endl;
    }
};

class C : public B
{
public:
    C(int a, double d, char c)
        :B(a, d)
    {
        cout << "C: " << c << endl;
    }

    ~C()
    {
        cout << "Destructor C" << endl;
    }
};

int main()
{
    //cout << sizeof(Mother) << endl;
    ////��� ���� Ŭ������ �޸� ũ�⸸ŭ �߰��� �Ҵ� ��
    //cout << sizeof(Child) << endl;

    //�Ҹ��ڴ� �ڽĺ��� �����
    C c(1024, 3.14, 'a');

    return 0;
}