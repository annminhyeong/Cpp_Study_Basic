#include <iostream>

using namespace std;

class Simple
{
private:
    int m_id;

public:
    //������
    Simple(const int& id_in)
        :m_id(id_in)
    {
        cout << "Contructor " << m_id << endl;
    }

    //�Ҹ��� : �ν��Ͻ��� �޸𸮿��� ������� �ڵ����� ȣ���
    //�Ҹ��ڴ� �Ķ���Ͱ� ����
    ~Simple()
    {
        cout << "Destructor " << m_id << endl;
    }
};

int main()
{
    //Simple s1(0);
    
    //Ŭ���� ��������, �����Ҵ����� ������� ��쿡�� ������ ����� �޸𸮿��� �ڵ�����
    //�������� �ʱ� ������ delete�� �Ⱦ��� �Ҹ��� ȣ�� �ȵ� (���� ����)
    Simple* s1 = new Simple(0);
    Simple s2(1);


    delete s1;
    return 0;
}