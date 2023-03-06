#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;


//RAII : resource acquisiton is initialization
void doSomething()
{
    try
    {
        //Resource* res = new Resource; //dull pointer
        AutoPtr<Resource> res(new Resource); //smart pointer

        //�� ��쿡 �޸� �ݳ��� ���ϰ� �Լ��� �����
        if (true)
        {
            return;
            throw - 1;
        }

        //delete res;
    }
    catch (...)
    {

    }

    return;
}

int main()
{
    //doSomething();

    {
        //int i
        AutoPtr<Resource> res1(new Resource); //int* res1(&i)
        AutoPtr<Resource> res2; //int* res2 = nullptr

        //auto_ptr �Ѱ�
        //doSomething(res1) �Լ��� ȣ���Ѵٰ� ������ ��
        //�Լ��� ����� �� �޸𸮸� �ݳ���

        cout << std::boolalpha;
        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;

        //move semantics
        res2 = res1; //res1���� res2�� ����
        
        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
        
        //�Ҹ��� 2�� ȣ���ؼ� ��Ÿ�� ���� �߻�
    }

    return 0;
}