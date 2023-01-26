#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double height = 3.0; //�⺻��
    float weight = 200;
    int age = 100;
    string name = "Mr. Incredible";

    void print()
    {
        cout << height << " " << weight << " " << age << " " << name << endl;
    }
};

struct Family
{
    //����ü �ȿ� ����ü ��� ����
    Person me, mom, dad;
};

Person getMe()
{
    Person me{ 2.0, 100.0, 20, "Jack Jack" };
    return me;
}


int main()
{
    Person me{ 2.0, 100.0, 20, "Jack Jack" }; //����ü �ʱ�ȭ ���1
    me.print();

    Person me2(me); //����ü �ʱ�ȭ ���2
    me2.print();

    Person me3; //����ü �ʱ�ȭ ���3
    me3 = me; //���Կ����ڴ� ����ü�� ����ü��, Ŭ������ Ŭ������ �����Ѵٴ� ���� ����
    me3.print();

    Person me_from_func = getMe();
    me_from_func.print();

    Person me4; //����ü�� ���� �Ҵ��صθ� �⺻���� �Ҵ��
    me4.print();

    //����ü�� ���� �Ҵ��ϸ� �⺻���� ���� ��
    Person me5{ 2.0, 100.0, 20, "Jack Jack" };
    me5.print();

    return 0;
}