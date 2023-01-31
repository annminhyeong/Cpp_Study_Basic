#include <iostream>

using namespace std;


int main()
{
    //�Ʒ��� ����
    //int var;
    //var = 7;

    //int ������(4byte) ũ���� �޸𸮸� OS���� �޾� �� ����
    //�� �޸� �ּҸ� ��ȯ��
    //int* ptr = new int;
    //*ptr = 7;
    

    //�Ҵ�� �ʱ�ȭ ���ÿ� �ϴ� ��1
    //int* ptr = new int(7);

    //�Ҵ�� �ʱ�ȭ ���ÿ� �ϴ� ��2
    //int* ptr = new int{ 7 };

    //OS���� �޸𸮸� �Ҵ� ���� ���� ��� ���� �����ϱ�
    int* ptr = new (std::nothrow) int{ 7 };

    if (ptr)
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }
    else
    {
        cout << "Could not allcate memory" << endl;
    }
    //OS���� �Ҵ���� �޸� ��ȯ
    delete ptr;
    
    //c style
    //ptr = 0; 
    //ptr = NULL;

    ptr = nullptr;
    cout << "After Delete" << endl;
    if (ptr != nullptr)
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }

    return 0;
}