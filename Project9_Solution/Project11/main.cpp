#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    //delte Ű���� : �����ڿ� �� Ÿ�� ���� ����
    //������ char Ÿ�� ��� ����
    Fraction(char) = delete;

    explicit Fraction(int num = 0, int den = 1)
        :m_numerator(num), m_denominator(den)
    {
        assert(den != 0);
    }

    //���� ������ : �ڱ�� Ÿ���� ���� �ν��Ͻ��� ������
    //���� ����ڸ� �ܺο��� �������� ���ϰ� �ϰ� ���� �� ���������ڸ� private�� ����
    Fraction(const Fraction& fraction)
        :m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        cout << "copy constructor called" << endl;
    }

    //��� ������ �����ε�
    friend std::ostream& operator << (std::ostream& out, const Fraction& f)
    {
        out << f.m_numerator << " / " << f.m_denominator << endl;
        return out;
    }
};

//��ȯ ������ : �Լ��Ķ���Ͱ� Ŭ���� Ÿ�� �ۿ� ���� �� �Ķ���ͷ� ���� ����
// �ν��Ͻ��� �ƴ� ��� �ڵ����� �����ڸ� �̿��ؼ� �ν��Ͻ��� �ٲ���
//�����ڿ� explicit Ű���带 ����ϸ� ��ȯ ������ ��� �Ұ�
void doSomething(Fraction frac)
{
    cout << frac << endl;
}

int main()
{
    //Fraction frac(7);

    ////doSomething(7);
    //doSomething(frac);
    

    Fraction frac2('c');


    return 0;
}