#include <iostream>

using namespace std;

class A
{
public:
    //�Լ��� �Ķ���Ͱ� �ٸ��� �������̵� �Ұ���
    virtual void print() const { cout << "A" << endl; }
};

class B : public A
{
public:
   //�θ� Ŭ���� �Լ� �������̵� �Ҷ� override Ű���� ����ϱ�
    void print() const override final { cout << "B" << endl; }
};

class C : public B
{
public:
    //�θ� Ŭ�������� final Ű���� ����ϸ� �ڽ� Ŭ�������� �������̵� �Ұ���
    //virtual void print() const { cout << "C" << endl; }
};

int main()
{
    A a;
    B b;
    C c;

    A& ref = b;
    ref.print();

    return 0;
}