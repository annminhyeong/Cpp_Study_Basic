#include <iostream>

using namespace std;

//inline : �ζ��� �Լ��� ȣ��� �� �Ϲ����� �Լ��� ȣ�� ������ ��ġ�� �ʰ�,
//�Լ��� ��� �ڵ带 ȣ��� �ڸ��� �ٷ� �����ϴ� ����� �Լ�
inline int min(int x, int y)
{
    return x < y ? x : y;
}

int main()
{
    cout << min(6, 5) << endl;
    cout << min(3, 2) << endl;
    

    return 0;
}