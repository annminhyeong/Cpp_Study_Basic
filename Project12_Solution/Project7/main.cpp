#include <iostream>

using namespace std;


class Base
{
    //Base VTable
    //fun1() //pointer
    //fun2() //pointer
    
    //vptr�� Base VTable�� ã�´�.
    //FunctionPointer *_vptr;
    virtual void fun1() {}
    virtual void fun2() {}
};

class Der : public Base
{
    //Der VTable
    //fun1() //pointer
    //�θ� Ŭ������ �Լ��� ����Ŵ
    //fun2() //pointer

    //FunctionPointer *_vptr;
    virtual void fun1() {}
    //void fun3() {}
};

int main()
{
    cout << sizeof(Base) << endl;
    cout << sizeof(Der) << endl;

    return 0;
}