#include <iostream>

using namespace std;

class Second
{
public:
    Second()
    {
        cout << "Class Second constructor()" << endl;
    }
};

class First
{
    Second sec;
public:
    First()
    {
        cout << "Class First constructor()" << endl;
    }
};


int main()
{
    //Ŭ�����ȿ� �ٸ� Ŭ���� �ν��Ͻ��� �����ϸ�
    //������ �ν��Ͻ� �����ڰ� ���� �����ǰ� �� ���� �ڽ��� �ν��Ͻ��� �����ȴ�.
    First fir;


    return 0;
}