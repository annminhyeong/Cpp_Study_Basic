#include <iostream>
#include <memory>

using namespace std;


class A
{
public:
	~A()
	{
		//�Ҹ��ڿ����� ���ܸ� ���� �� ����
		//throw "error";
	}
};

int main()
{
	try
	{
		//A a;

		int* i = new int[1000000];
		
		//delete�� �޸� �ݳ��� �ʿ� ����, �ڵ����� ����
		//unique_ptr<int> up_i(i); 

		//do someting with i

		//����ó�� ������ �޸� �ݳ� ó���� �� �� �� ����
		throw "error";

		delete[]i;

	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

    return 0;
}