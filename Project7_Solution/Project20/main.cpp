#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const std::array<int, 5>& my_array, const int& ix)
{
    assert(0 <= ix);
    assert(ix <= my_array.size() - 1);

    cout << my_array[ix] << endl;
}

int main()
{
    //int number = 5;

    ////assert() : ��Ÿ�ӿ� ������������, ����� ��忡�� �۵�, �������忡���� �۵� ����
    //assert(number == 5);


    std::array<int, 5> my_array{ 1, 2, 3, 4, 5 };
    
    //printValue(my_array, 100);


    const int x = 10;
    
    //static_assert() : ������ Ÿ�ӿ� ������ ���� ���� �������� ����
    //�ι�° ���ڿ� ������ ���� �� ����
    //static_assert(x == 5, "should be 5");

    return 0;
}