#include <iostream>

using namespace std;


class Base
{
public:
    int m_public;

protected:
    int m_protected;

private:
    int m_private;
};

//Ŭ���� ��� ���� ������
class Derived : private Base
{
public:
    Derived()
    {
        //Ŭ���� �ȿ����� ��� ���� �����ں��� ������ ū ���� �����ڿ� ���� ����
        Base::m_public;    //����
        Base::m_protected; //����
        //Base::m_private; //�Ұ���
    }
};

class GrandChild : public Derived
{
public:
    GrandChild()
    {
        //�θ� Ŭ������ ���� �����ڰ� private�� ���� �Ұ���
        //Derived::Base::m_public;
        //Derived::Base::m_protected;
        //Derived::Base::m_private;
    }
};


int main()
{
    //Base base;

    //base.m_public = 123; //����
    ////base.m_protected = 123; //�Ұ���
    ////base.m_private = 123; //�Ұ���


    Derived derived;

    //Ŭ���� ��� ���� �����ں��� ������ ū ���� �����ڿ����� ���� �Ұ���
    //derived.m_public = 1024;

    return 0;
}