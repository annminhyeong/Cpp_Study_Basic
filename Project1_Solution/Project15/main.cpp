#include <iostream>

namespace MySpace1
{
    //namespace �ȿ� namespace ���� ����
    namespace InnerSpace
    {
        int my_function()
        {
            return 0;
        }
    }

    int doSomething(int a, int b)
    {
        return a + b;
    }
}
namespace MySpace2
{
    int doSomething(int a, int b)
    {
        return a * b;
    }
}

using namespace std;


int main()
{
    //�տ� namespace�̸� �����ϰ� ������ ���
    using namespace MySpace1;
    doSomething(3, 4);

    MySpace1::InnerSpace::my_function();
    
    using namespace MySpace1::InnerSpace;
    my_function();

    //�Լ� �̸� �ߺ� �����ϰ� ������ namespace ���
    //cout << MySpace1::doSomething(3, 4) << endl;
    //cout << MySpace2::doSomething(3, 4) << endl;

    return 0;
}