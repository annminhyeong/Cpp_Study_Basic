#include <iostream>
//#include <cstdint> //iostream include �Ҷ��� ����� ��


int main()
{
    using namespace std;

    //���� �����Ϸ��� ȣȯ�Ǵ� int Ÿ��
    std::int16_t i(5); //2byte
    std::int8_t myint = 65; //1byte, char

    cout << myint << endl;

    std::int_fast8_t fi(5); //1byte �߿� ���� ���� int
    std::int_least64_t fl(5); //8byte�� ���� int




    return 0;
}