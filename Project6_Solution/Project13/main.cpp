#include <iostream>

using namespace std;


int main()
{
    //int* ptr = new (std::nothrow) int(7);
    //int* ptr2 = ptr;

    //delete ptr;
    //ptr = nullptr;
    //ptr2 = nullptr; //ptr2�� nullptr�� �ʱ�ȭ �ؾ� ��
    

    //memory leak
    while (true)
    {
        //�޸𸮸� �ݳ����ϸ� �޸� ���� �߻�
        int* ptr = new int;
        cout << ptr << endl;
        
        //delete ptr;
    }

    return 0;
}