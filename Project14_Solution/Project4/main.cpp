#include <iostream>

using namespace std;

//���� Ŭ����
class Exception
{
public:
    void report()
    {
        cerr << "Exception report" << endl;
    }
};

class ArrayException : public Exception
{
public:
    void report()
    {
        cerr << "Array report" << endl;
    }
};

class MyArray
{
private:
    int m_data[5];

public:
    int& operator [] (const int& index)
    {
        //if (index < 0 || index >= index) throw - 1;
        //if (index < 0 || index >= index) throw Exception();
        if (index < 0 || index >= index) throw ArrayException();
        return m_data[index];
    }
};

void doSomething()
{
    MyArray my_array;

    try
    {
        my_array[100];
    }
    catch (const int& x)
    {
        cerr << "Exception " << x << endl;
    }
    //catch (ArrayException& e)
    //{
    //    cout << "doSomething() ";
    //    e.report();

    //    //���� �ٽ� ������
    //    throw e;
    //}
    catch (Exception& e)
    {
        cout << "doSomething() ";
        e.report();

        //ExceptionŸ������ ������ ������ Exception Ÿ�Կ��� ����ó����
        //throw e; 

        //������ �׳� ������ ������ ����Ÿ������ ����ó�� ��
        throw;
    }
}

int main()
{
    try
    {
        doSomething();
    }
    catch (ArrayException& e)
    {
        cout << "main() ";
        e.report();
    }
    catch (Exception& e)
    {
        cout << "main() ";
        e.report();
    }

    return 0;
}