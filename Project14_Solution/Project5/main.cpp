#include <iostream>
#include <exception>
#include <string>

using namespace std;

//std::exception Ŭ���� ��� �ޱ�
class CostomException : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Costom Exception";
	}
};

int main()
{
	try
	{
		//std::string s;
		//s.resize(-1);

		//std::exception ���̺귯���� �̿��� ���� ������
		//throw std::runtime_error("Bad thing happened");
		
		throw CostomException();
	}
	catch (const std::length_error& exception)
	{
		cout << "Length_Error" << endl;
		cerr << exception.what() << endl;
	}
	catch (const std::exception& exception)
	{
		//���� ������ ��Ȯ�� ���� Ÿ������ Ȯ��
		cout << typeid(exception).name() << endl;
		cerr << exception.what() << endl;
	}
	
	return 0;
}