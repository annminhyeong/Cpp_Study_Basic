#include <iostream>

using namespace std;


class Base
{
public:
    Base() {}
    
    //��� �����ڴ� �������̵��� �Ұ����ϹǷ� ���ϰ���
    //�ٸ� �Լ����� �����ϰ� ���Լ��� virtual ��Ű�� �������̵� ����
    friend std::ostream& operator << (std::ostream& out, const Base& b)
    {
        return b.print(out);
    }

    virtual std::ostream& print(std::ostream& out) const
    {
        out << "Base";
        return out;
    }
};

class Derived : public Base
{
public:
    Derived() {}

    virtual std::ostream& print(std::ostream& out) const override
    {
        out << "Derived";
        return out;
    }
};

int main()
{
    Base b;
    cout << b << endl;

    Derived d;
    cout << d << endl;

    Base& bref = d;
    cout << bref << endl;

    return 0;
}