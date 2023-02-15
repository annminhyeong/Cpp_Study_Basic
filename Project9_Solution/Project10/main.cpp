#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(int num = 0, int den = 1)
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

Fraction doSomething()
{
    Fraction temp(1, 2);
    cout << &temp << endl;
    return temp;
}

int main()
{
    //Fraction frac(3, 5);

    ////Fraction fr_copy(frac);
    //Fraction fr_copy = frac;

    //cout << frac << " " << fr_copy << endl;
    
    Fraction result = doSomething();
    //����� ��忡����  ���� �����ڸ� ����ؼ� �ּҰ��� �ٸ�����
    //������ ��忡���� �����Ϸ��� ����ȭ�ؼ� �ּҰ� ����
    cout << &result << endl;
    cout << result << endl;
    return 0;
}