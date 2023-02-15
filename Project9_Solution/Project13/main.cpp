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
    
    //���� ������ ����� ������ �� ��������� ������ ó���ϱ�
    //MyString(const MyString& source) = delete;

    //���� ������
    MyString(const MyString& source)
    {
        cout << "Copy constructor" << endl;

        m_length = source.m_length;

        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];

            for (int i = 0; i < m_length; i++)
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;
    }

    //���� ������ �����ε�
    MyString& operator = (const MyString& source)
    {
        //���� ����
        //this->m_data = source.m_data;
        //this->m_length = source.m_length;

        cout << "Assignment operator" << endl;
        
        //�ڱ� �ν��Ͻ��� �ڽſ��� �����Ҷ��� �ڽ��� �����ϰ� ����
        if (this == &source)
            return *this;
        
        //�����Ҵ� �� �޸𸮰� �� �޸𸮰� ���� �� �����Ƿ� �ݳ�
        delete[] m_data;

        //���� ����
        m_length = source.m_length;

        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];

            for (int i = 0; i < m_length; i++)
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;

        return *this;
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
    //MyString hello("Hello");
    //cout << (int*)hello.m_data << endl;
    //cout << hello.getString() << endl;

    //{
    //    //hello�� �ν��Ͻ��� ���� ����
    //    MyString copy = hello;
    //    cout << (int*)copy.m_data << endl;
    //    cout << copy.getString() << endl;
    //}

    //cout << (int*)hello.m_data << endl;
    //cout << hello.getString() << endl;


    MyString hello("Hello");
    
    //Copy constructor
    //MyString str1 = hello; 
    MyString str1(hello); 
    
    MyString str2; 
    //Assignment operator
    str2 = hello;

    return 0;
}