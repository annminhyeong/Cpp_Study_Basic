#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
    int m_i = 0;

    virtual void print()
    {
        cout << "I'm Base" << endl;
    }
};

class Derived1 : public Base
{
public:
    int m_j = 1024;

    virtual void print()
    {
        cout << "I'm Derived1" << endl;
    }
};

class Derived2 : public Base
{
public:
    string m_name = "Dr. Two";

    virtual void print()
    {
        cout << "I'm Derived2" << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.m_j = 2048;

    Base* base = &d1;
    
    auto* base_to_d1 = dynamic_cast<Derived1*>(base);
    cout << base_to_d1->m_j << endl;
    base_to_d1->print();

    //base_to_d1->m_j = 256;
    //cout << d1.m_j << endl;

    //dynamic_cast�� ��Ÿ�ӿ� ������ �߻��ϸ� üũ�������� static_cast�� üũ ������
    auto* base_to_d2 = dynamic_cast<Derived2*>(base);

    if (base_to_d2 != nullptr)
    {
        cout << base_to_d2->m_name << endl;
    }
    else
        cout << "Failed" << endl;





    return 0;
}