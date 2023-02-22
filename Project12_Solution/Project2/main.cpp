#include <iostream>

using namespace std;

class A
{
public:
    //virtual : �����Լ�
    virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
    /*virtual*/ void print() { cout << "B" << endl; }
};

class C : public B
{
public:
    /*virtual*/ void print() { cout << "C" << endl; }
};

class D : public C
{
public:
    /*virtual*/ void print() { cout << "D" << endl; }
};

int main()
{
    A a;
    B b;
    C c;
    D d;

    //�θ� Ŭ������ virtual �� ���� �� : ��� �θ� Ŭ���� �Լ� ȣ��
    //A& ref = b; //a�� ��� 
    //A& ref = c; //b�� ���� a�� ���
    //A& ref = d;   //c�� ���� a�� ���

    //�θ� Ŭ������ virtual �� �� : �ڽ� Ŭ���� �Լ� ȣ��
    //A& ref = b;
    //ref.print(); //B

    //�κθ� Ŭ������ virtual, �θ� Ŭ���� virtual �Ƚ��� �� :
    //�θ� Ŭ������ virtual�� �ƴϿ��� �ڽ� Ŭ���� �Լ� ȣ��
    //A& ref = c;
    //ref.print(); //C


    //���� ���� �θ� virtual�̸� �� �Ʒ� �θ�鵵 ���� virtual ���� ��ó�� �۵���
    //�κθ� Ŭ������ virtual, �θ� Ŭ���� virtual �Ƚ��� �� :
    //�θ� Ŭ������ virtual�� �ƴϿ��� �ڽ� Ŭ���� �Լ� ȣ��
    B& ref = c;
    ref.print(); //C

    return 0;
}