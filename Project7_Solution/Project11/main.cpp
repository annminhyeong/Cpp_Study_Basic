#include <iostream>
#include <string>

using namespace std;

//�����ε� : ����� ����� �Լ��� �Ű����� Ÿ��, ������ �ٸ� �Լ�

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

typedef int my_int;

//typedef�� �����ص� �Ű����������� Ÿ���� ������ �ȵ�
//void print(my_int x) {} 
//void print(int x) {}

//Ÿ���� ��ȣ�� ��� �����߻�
//void print(/*const*/ char* value) {}
//void print(int value){}

void print(unsigned int value){}
void print(float value){}

int main()
{
	//add(1, 2);
	//add(3.0, 4.0);

	//print(0);
	//print("a");

	//print('a'); //Ÿ���� ��ȣ�ؼ� ���� �߻� 
	print(0u); 
	print(3.14f);

	return 0;
}