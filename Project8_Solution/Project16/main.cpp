#include <iostream>

using namespace std;

//Ŭ���� ���� ����
class B;

class A
{
private:
    int m_value = 1;

    //friend�� �Լ��� Ŭ������ �����ϸ� private �ɹ��� ���� ����
    //Ŭ���� B�� �Ʒ� �־ B�� ���縦 ���� ���� ���� �߻��� ��� Ŭ���� ���� �����ϱ�
    friend void doSomething(A& a, B& b);
};

class B
{
private:
    int m_value = 2;
    friend void doSomething(A& a, B& b);
};

void doSomething(A& a, B& b)
{
    cout << a.m_value << " " << b.m_value << endl;
}

int main()
{
    A a;
    doSomething(a);

    return 0;
}