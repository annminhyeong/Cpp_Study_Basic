#include <iostream>

auto add(int x, int y) -> int //auto�� ����Ÿ���� -> Ÿ�Ը����� ����� �� ����
{
    return x + y;
}

auto add(double x, double y) -> double //auto�� ����Ÿ���� -> Ÿ�Ը����� ����� �� ����
{
    return x + y;
}

int main()
{
    using namespace std;

    //auto : �����Ϸ��� Ÿ���� �ڵ����� �Ҵ���

    auto a = 123;
    auto d = 123.0;
    auto c = 1 + 2.0;
    auto res = add(1, 2);

    return 0;
}