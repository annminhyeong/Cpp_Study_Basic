#include <iostream>
#include <cmath> //sin(), cos()

using namespace std;

//������ ���� ����
void addOne(int& y)
{
    cout << y << " " << &y << endl;
    y = y + 1;
}

//�� �ΰ� �����ϰ� ���� �� ���������� �̿���
void getCinCos(const double& degrees, double& sin_out, double& cos_out)
{
    static const double pi = 3.141952 / 180.0;
    const double radians = degrees * pi;
    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
}

//const ���� ���ͷ� ��밡��
void foo(int& x)
{
    cout << x << endl;
}

int main()
{
    //int x = 5;
    //cout << x << " " << &x << endl;
    //
    //addOne(x); //���� ��ü�� �ѱ�� ������ ���� �����
    //cout << x << " " << &x << endl;
    

    //double sin(0.0);
    //double cos(0.0);

    //getCinCos(30.0, sin, cos);
    //cout << sin << " " << cos << endl;


    //foo(6); //���ͷ��� �ּҰ� ��� ����


    return 0;
}