#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number)
{
    int n = my_number;
    cout << n << endl;
}

int main()
{
    //printNumber(123);
    //const double gravity{ 9.8 };

    ////gravity = 1.2; //����� ���Ҵ� �Ұ���

    
    //constexpr int my_const(123); //������ ���

    //int number;
    //cin >> number;
    //const int special_number(number); //��Ÿ�� ���
    

    //int num_item = 123;
    //const int price_per_item = 30;
    //int price = num_item * price_per_item;

    double radis;
    cin >> radis;
    double circumference = 2 * radis * constants::pi;
    cout << circumference << endl;

    return 0;
}