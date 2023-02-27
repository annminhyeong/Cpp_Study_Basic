#include <iostream>
#include <vector>
#include <functional>

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

class Derived : public Base
{
public:
    int m_j = 1;

    virtual void print() override
    {
        cout << "I'm Derived" << endl;
    }
};

//void doSomething(Base& b)
//{
//    b.print();
//}

void doSomething(Base b)
{
    b.print();
}

int main()
{
    Derived d;
    
    //������ �����͸� ����ϸ� ������ ��������
    //b1�� d�� �ּҸ� �����ϹǷ� Base�κ��� ��� ���� ���� ���� ���� ���� 
    Base& b1 = d;
    b1.print();

    //b2�� d�� �ּҸ� �������� �����Ƿ� (���� �����)
    //Base�κ��� ��� �ޱ� �Ұ���, ��ü �߸� �߻�
    Base b2 = d;
    b2.print();

    //doSomething(d);

    //std::vector<Base> my_vec;
    //my_vec.push_back(b);
    //my_vec.push_back(d); //��ü �߸� �߻�

    //for (auto& ele : my_vec)
    //    ele.print();


    //std::vector<Base*> my_vec;
    //my_vec.push_back(&b1);
    //my_vec.push_back(&d);

    //for (auto& ele : my_vec)
    //    ele->print();


    //vector<Ŭ����&>�� �Ұ����ϱ� ������ Base�� ���������� ��� ���� �� ���
    std::vector<std::reference_wrapper<Base>> my_vec;
    my_vec.push_back(b1);
    my_vec.push_back(d);

    for (auto& ele : my_vec)
        ele.get().print();

    return 0;
}