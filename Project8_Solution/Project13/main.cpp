#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
    string m_value = "default";

    //const reference ����
    const string& getValue() const 
    { 
        cout << "const version" << endl;
        return m_value; 
    }

    //non-const reference ����
    string& getValue() 
    {
        cout << "non-const version" << endl;
        return m_value;
    }
};


int main()
{
    Something something;
    something.getValue() = 10; //�Լ��� ���ϰ��� non-const referece ������ ����

    const Something something2;
    something2.getValue() /*= 10*/; //�Լ��� ���ϰ��� const referece �̹Ƿ�  ������ �Ұ���

    return 0;
}