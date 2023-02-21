#include <iostream>

using namespace std;


class Base
{
protected:
    int m_i;

public:
    Base(int value)
        :m_i(value)
    {}

    void print()
    {
        cout << "I'm base" << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int value)
        :Base(value)
    {}

    //�ܺο��� Base Ŭ������ �ִ� m_i ���� ���
    using Base::m_i;

private:
    //�ܺο��� Base Ŭ������ �ִ� print() ���� ����� ��� 2����
    using Base::print; //do not add ()
    void print() = delete;  //�θ𿡰� ��ӹ��� print() �Լ� ����
};

int main()
{
    Base base(5);
    //base.m_i = 1024;
    base.print();

    Derived derived(7);
    derived.m_i = 1024;
    //derived.print();

    return 0;
}