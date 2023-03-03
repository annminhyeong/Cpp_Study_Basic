#include <iostream>

using namespace std;


class A
{
private:
	int m_x;

public:
	A(int x) 
		: m_x(x)
	{
		if (x <= 0)
			throw 1;
	}
};

class B : public A
{
public:
	//B(int x)
	//	:A(x)
	//{}

	//�����ڿ��� ����ó���ϰ� ���� ��
	B(int x)
	try :A(x)
	{
		//do initalization
	}
	catch (...)
	{
		cout << "Catch in B constructor" << endl;
		
		//�����ڿ��� ������ �ȴ����ִ��� ������ ȣ���� ���� ������ ������
		//throw;
	}
};


//�Լ� ��ü ��ȣ �����ѵ� try-catch�� ���� ����
//void doSomething()
//try
//{
//	throw - 1;
//}
//catch (...)
//{
//	cout << "Catch in doSometing()" << endl;
//}


int main()
{
	try
	{
		//doSomething();
		B b(0);
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}

    return 0;
}