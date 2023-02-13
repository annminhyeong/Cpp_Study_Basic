#include <iostream>

using namespace std;


class Cents
{
private:
    int m_cnets;

public:
    Cents(int cents = 0) { m_cnets = cents; }
    int getCents() const { return m_cnets; }
    int& getCents() { return m_cnets; }
    
    //firend : private �ɹ��� �ܺο��� �������
    //��� �����ڴ� �����ε��ص� ������ �켱������ ������ ����
    //friend Cents operator + (const Cents& c1, const Cents& c2);
    //{
    //    return Cents(c1.m_cnets + c2.m_cnets);
    //}

    //friend Ű���� ����� �ɹ� �Լ��� ������ �� (this ���)
    //�ɹ� �Լ������� ��� ������ �����ε��� ������ ������ : =, [], (), ->
    Cents operator + (const Cents& c1)
    {
        return Cents(this->m_cnets + c1.m_cnets);
    }
};

//��� ������ �����ε�(firend�� �Լ� �����ؼ� m_cent�� ���� ���� ����)
//Cents operator + (const Cents& c1, const Cents& c2)
//{
//    return Cents(c1.m_cnets + c2.m_cnets);
//}

void add(const Cents& c1, const Cents& c2, Cents &c_out)
{
    c_out.getCents() = c1.getCents() + c2.getCents();
}

Cents add(const Cents& c1, const Cents& c2)
{
    return Cents(c1.getCents() + c2.getCents());
}


int main()
{
    Cents cents1(6);
    Cents cents2(8);

    Cents sum;
    //add(cents1, cents2, sum);
    //cout << sum.getCents() << endl;

    //cout << add(cents1, cents2).getCents() << endl;

    cout << (cents1 + cents2 + Cents(6) + Cents(10) + Cents(100)).getCents() << endl;
    
    //��� ������ �����ε� �Ұ���
    // ?:������, ::������, sizeof������, .������, .* ������
    // ^ �����ڴ� ������ �켱������ ���� ������ �����ε� ���� X

    return 0;
}