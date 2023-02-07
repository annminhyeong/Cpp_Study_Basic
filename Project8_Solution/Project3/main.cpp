#include <iostream>

using namespace std;


class Fraction 
{
private:
    int m_numerator;
    int m_denominator;

public:
    //�����ڰ� �ϳ��� ���� �� default �����ڰ� �ڵ����� �߰���
    //�����ڰ� ������ default �����ڴ� �������� ����
    //Fraction(){} 
    
    Fraction(const int& num_in = 1, const int& den_in = 1)
    {
        m_numerator = num_in;
        m_denominator = den_in;

        cout << "Fraction() constructor" << endl;
    }
    void print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

int main()
{
    //�������� �Ķ���Ͱ� �Ѱ��� �������� ()�� �������
    Fraction frac;
    frac.print();

    //�����ھ��� �ν��Ͻ� �����ϴ� ���1
    //Fraction one_thirds;
    
    //�����ھ��� �ν��Ͻ� �����ϴ� ���2
    //Fraction one_thirds = Fraction{ 1, 3 };
    
    //�����ھ��� �ν��Ͻ� �����ϴ� ���3
    //Ŭ���� �ɹ��� public�� ��� ������ ���� �ʱ�ȭ ����
    //private�� ��� ������ ���� �ʱ�ȭ �Ұ���, Ÿ�Ժ�ȯ ������
    //Fraction one_thirds{ 1.0, 3 };
    
    //�����ھ��� �ν��Ͻ� �����ϴ� ���4
    //Ŭ���� �ɹ��� public, private�� ��� ������ ���� �ʱ�ȭ ����
    //Ÿ�Ժ�ȯ ���
    Fraction one_thirds(1.0, 3);
    one_thirds.print();

    return 0;
}