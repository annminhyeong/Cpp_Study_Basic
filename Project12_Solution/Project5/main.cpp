#include <iostream>

using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "~Base()" << endl;
    }
};

class Derived : public Base
{
private:
    int* m_array;

public:
    Derived(int length)
    {
        m_array = new int[length];
    }

    //�θ� Ŭ���� �Ҹ��ڿ��� virtual �����ϸ� override �ȵ�
    ~Derived() override
    {
        cout << "~Derived()" << endl;
        delete[] m_array;
    }

};

int main()
{
    //Derived derived(5);

    Derived* derived = new Derived(5);
    Base* base = derived;
    //�θ� �Ҹ��ڿ� virtual�� �� �ٿ��� ���� �θ� �Ҹ��ڸ� ȣ����
    //�θ� �Ҹ��ڿ� virtual�� ���̸� �θ� �Ҹ��ڿ� �ڽ� �Ҹ��ڵ� �Ѵ� ȣ�� ��
    delete base; 

    return 0;
}