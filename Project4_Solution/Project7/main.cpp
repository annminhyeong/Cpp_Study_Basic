#include <iostream>
#include <typeinfo>
#include <iomanip>


int main()
{
    using namespace std;

    //numberic conversion
    float f = 3.14;
    int i = f;

    //�Ҽ��� �ڸ��� 12�ڸ� ���
    cout << std::setprecision(12) << i << endl;
    
    cout << 5u - 10u << endl;

    //����� ����ȯ ��� 3����
    //1. int i = int(4.0);
    //2. int i = (int)4.0;
    //3. int i = static_cast<int>(4.0);

    //�ڷ��� Ÿ�� �˷���
    //cout << typeid(a).name() << endl;


    return 0;
}