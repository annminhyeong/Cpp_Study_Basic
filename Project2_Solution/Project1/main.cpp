#include <iostream>



int main()
{
    using namespace std;

    bool bValue = false;
    char chValue = 65;
    float fValue = 3.141952f;
    double dValue = 3.141952;
    
    //���ԵǴ� rValue�� ���缭 �������Ҷ� Ÿ���� �ڵ����� ������ �ڷ���
    auto aValue = 3.141592;
    auto aValue2 = 3.141592f;

    cout << sizeof(bool) << endl;
    cout << sizeof(bValue) << endl;


    //cpp ���� �ʱ�ȭ ��� 3����
    int a1 = 123;  //copy initalization
    int a2(123);   //direct initalization
    int a3{ 123 }; //uniform initalization


    return 0;
}