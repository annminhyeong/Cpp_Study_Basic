#include <iostream>

using namespace std;

class Simple
{
private:
    int m_id;

public:
    Simple(int id)
    {
        //��� Ŭ���� �ɹ��� ������ �� this-> �� �����Ǿ� �ִ�
        /*this->*/setID(id);
        /*this->*/m_id = 1; 

        //this : ������ �ν��Ͻ��� �ּҸ� ������ �ְ� ������ �ν��Ͻ���
        //�ּҸ� �˰� ���� �� ��븦 ��
        cout << this << endl;
    }

    void setID(int id) { m_id = id; }
    int getID() { return m_id; }
};

int main()
{
    Simple s1(1), s2(2);
    s1.setID(2);
    s2.setID(4);

    cout << &s1 << " " << &s2 << endl;

    //�ν��Ͻ� �����ɶ����� �޸𸮿� �Լ��� ����� ���� �ƴ϶�
    //�Լ��� ���ڿ� �ν��Ͻ��� �Ѱ��༭ �Լ��� ����Ѵ�. (����������)
    //Simple::setID(&s1, 1);  == s1.setID(1) //�۵��� ����

    return 0;
}