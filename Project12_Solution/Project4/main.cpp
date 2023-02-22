#include <iostream>

using namespace std;

class A
{
public:
    void print() { cout << "A" << endl; }
    //�Ϲ������δ� ����Ÿ���� �ٸ��� �������̵��� �ȵ�����
    //�ڽ��� Ŭ���� Ÿ�� �����͸� �����ϸ� �������̵� ����
    virtual A* getThis() 
    { 
        cout << "A::getThis()" << endl;
        return this; 
    }
};

class B : public A
{
public:
    void print() { cout << "B" << endl; }
    virtual B* getThis() 
    { 
        cout << "B::getThis()" << endl;
        return this; 
    }
};


int main()
{
    A a;
    B b;

    A& ref = b;


    //b�� getThis()�� �����
    b.getThis()->print();   //B

    //b�� getThis()�� ����� (A�� virtual getThis()�� B�� ���)
    //B�� ������ �����ص� ref�� Ÿ���� A�̱� ������ A �����͸� ������
    ref.getThis()->print(); //A

    cout << typeid(b.getThis()).name() << endl; 
    cout << typeid(ref.getThis()).name() << endl; 


    return 0;
}