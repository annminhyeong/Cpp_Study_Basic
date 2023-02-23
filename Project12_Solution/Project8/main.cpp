#include <iostream>
#include <string>

using namespace std;

//�߻� �⺻ Ŭ���� : ���� ���� �Լ��� �ɹ��� ������ �ִ� Ŭ����
class Animal
{
protected:
    string m_name;

public:
    Animal(std::string name)
        :m_name(name)
    {}

    string getName() { return m_name; }

    //���� ���� �Լ� : ���������Լ��� �ڽ� Ŭ�������� �ݵ�� �Լ��� �����ؾ��Ѵ�.
    //�Լ� body�� ����, virtual �Լ���() = 0 ������
    virtual void speak() const = 0;
};

//���� ���� �Լ��� ������ body�� ���� �� �� ����, �Լ� ȣ�� �Ұ��� (���� ����)
//void Animal::speak() const
//{
//    cout << m_name << " ??? " << endl;
//}

class Cat : public Animal
{
public:
    Cat(string name)
        :Animal(name)
    {}

    void speak() const override
    {
        cout << m_name << " Meow " << endl;
    }
};

class Dog : public Animal
{
public:
    Dog(string name)
        :Animal(name)
    {}

    void speak() const override
    {
        cout << m_name << " Woof " << endl;
    }
};

class Cow : public Animal
{
public:
    Cow(string name)
        :Animal(name)
    {}

    //�߻� Ŭ������ ��� �޾����� ���� ���� �Լ� �ݵ�� ���� �ؾ���
    void speak() const override
    {
        cout << m_name << " Moooo " << endl;
    }
};


int main()
{
    //�߻� Ŭ���� : ���� ���� �Լ��� �ϳ��� ��� �ִ� �Լ���
    //�ν��Ͻ� ���� �Ұ�
    //Animal ani("Hi");
    //ani.speak();

    //�߻� Ŭ������ ����ִ� Ŭ������ ��� �޾����� �ݵ��
    //���� ���� �Լ��� �����ؾ���
    Cow cow("Hello");
    cow.speak();

    return 0;
}