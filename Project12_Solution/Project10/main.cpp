#include <iostream>

using namespace std;

class PoweredDevice
{
public:
    int m_i;

    PoweredDevice(int power)
    {
        cout << "PoweredDevice : " << power << '\n';
    }

};

class Scanner : virtual public PoweredDevice
{
public:
    Scanner(int scanner, int power)
        :PoweredDevice(power)
    {
        cout << "Scanner : " << scanner << '\n';
    }
};

class Printer : virtual public PoweredDevice
{
public:
    Printer(int printer, int power)
        :PoweredDevice(power)
    {
        cout << "Printer : " << printer << '\n';
    }
};

class Copier : public Scanner, public Printer
{
public:
    Copier(int scanner, int printer, int power)
        :Scanner(scanner, power), Printer(printer, power),
        //���� ���
        PoweredDevice(power) //PoweredDevice �����ڸ� �ϳ��� ����
    {
        
    }
};


int main()
{
    Copier cop(1, 2, 3);

    //Scanner, Printer Ŭ������ virtual Ű���� �� ���̸� 
    //PoweredDevice�� ������ 2�� ȣ�� �ǰ� 
    //Scanner::PoweredDevice::m_i�� Printer::PoweredDevice::m_i �ּҰ� �޶���
    //���� ��� ���� �߻���
    
    //Scanner, Printer Ŭ������ virtual Ű���带 ���̰�
    //PoweredDevice �����ڸ� ���� ȣ���ϸ�
    //�����ڴ� �ѹ��� ȣ��ǰ�
    //Scanner::PoweredDevice::m_i�� Printer::PoweredDevice::m_i �ּҰ� ������
    //���̾Ƹ�� ���
    cout << &cop.Scanner::PoweredDevice::m_i << endl;
    cout << &cop.Printer::PoweredDevice::m_i << endl;

    return 0;
}