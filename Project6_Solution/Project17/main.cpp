#include <iostream>

using namespace std;


int main()
{
    ////int value = 5;
    ////
    ////int* ptr = nullptr;
    ////ptr = &value;

    //////���������� ��������(ref)�� value�� ���� ����(�޸𸮸�)����ϴ� �� ó�� �۵�
    //////��������(����) : �� ������ �� �ٸ� �̸�
    ////int& ref = value;

    ////cout << ref << endl;

    ////ref = 10;

    ////cout << value << " " << ref << endl;
    ////cout << &value << endl;
    //////���������� �ڱ� �ڽ��� ������ �ּҸ� ������ �ִ� ���� �ƴ�
    //////����Ű�� �ִ� ���� �ּҸ� ������ ����
    ////cout << &ref << endl; 
    ////cout << ptr << endl;
    ////cout << &ptr << endl;


    //int x = 5;
    //// ���������� �ݵ�� �ʱ�ȭ �Ǿ�� ��, ���ͷ� ��� �Ұ�
    ////int& ref;
    ////int& ref = 10;

    //const int y = 8;
    ////������������ ���� ������� �ٲ� �� �ֱ� ������ 
    ////const�� ����� ������ �������� Ÿ�� �տ� const�� ���̸� ��� ����
    ////int& ref = y;
    //const int& ref = y;

    int value1 = 5;
    int value2 = 10;

    //���������� ���Ҵ� ���� (�տ� const �� �پ��� ��)
    int& ref1 = value1;
    cout << ref1 << endl;

    ref1 = value2;
    cout << ref1 << endl;

    return 0;
}