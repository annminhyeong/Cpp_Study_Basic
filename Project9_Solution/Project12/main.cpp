#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
//private:
public:
    char* m_data = nullptr;
    int m_length = 0;

public:
    MyString(const char* source = "")
    {
        assert(source);
        m_length = std::strlen(source) + 1; // +1 : �������� �߰�
        m_data = new char[m_length];

        for (int i = 0; i < m_length; ++i)
            m_data[i] = source[i];
        
        m_data[m_length - 1] = '\0';
    }

    ~MyString()
    {
        delete[] m_data;
    }

    char* getString() { return m_data; }
    int getLength() { return m_length; }


};

int main()
{
    MyString hello("Hello");
    cout << (int*)hello.m_data << endl;
    cout << hello.getString() << endl;

    {
        //hello�� �ν��Ͻ��� ���� ����
        MyString copy = hello;
        cout << (int*)copy.m_data << endl;
        cout << copy.getString() << endl;
    }

    //hello �ν��Ͻ��� copy �ν��Ͻ��� ���� �޸� �ּҸ� ����ϰ� �־��µ�
    //copy �ν��Ͻ��� ������鼭 �Ҹ��ڸ� ȣ���� delete�� �����ؼ� ��Ÿ�� ���� �߻�
    cout << hello.getString() << endl;

    return 0;
}