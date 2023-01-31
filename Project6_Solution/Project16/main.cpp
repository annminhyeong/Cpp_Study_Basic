#include <iostream>



int main()
{
    using namespace std;

    {
        //����
        int value = 5;
        const int* ptr1 = &value;       //������ X, ���Ҵ� O
        int* const ptr2 = &value;       //������ O, ���Ҵ� X
        const int* const ptr2 = &value; //������ X, ���Ҵ� X
    }
    

    {
        //�б� (value �� ���� �Ұ���, value �� �ּ� ���� ����)
        const int value = 5;
        const int* ptr = &value;
    
        //������ �Ұ���
        //*ptr = 6; //�Ұ���
        //value = 6; //�Ұ���

        cout << ptr << endl;
        cout << *ptr << endl;
    }

    {
        //�б� (value �� ���� �Ұ���, value �� �ּ� ���� ����)
        int value = 5;
        const int* ptr = &value;

        //������ �Ұ���
        //*ptr = 6; //�Ұ���
        value = 6; //����

        cout << ptr << endl;
        cout << *ptr << endl;
    }

    {
        int value1 = 5;
        const int* ptr = &value1;

        //const�� ������Ÿ�� �տ� ���̸� �������� �Ұ����ϰ�
        //������ ������ ���ο� �ּҰ� ���Ҵ� ����
        //*ptr = 6; //�Ұ���
        int value2 = 6; //����
        ptr = &value2; //����

        cout << ptr << endl;
        cout << *ptr << endl;
    }

    {
        int value = 5;
        int* const ptr = &value;

        //const�� ������ Ÿ�� �ڿ� ���̸� �������� �����ϰ�
        //������ ������ ���ο� �ּҰ� ���Ҵ� �Ұ���
        
        *ptr = 10; //����
        
        int value2 = 8;
        //ptr = &value2; //�Ұ���
        
        cout << ptr << endl;
        cout << *ptr << endl;
    }

    {
        int value = 5;
        const int* const ptr = &value;

        //const�� ������ Ÿ�� �� �ڿ� �Ѵ� ���̸� �������� �Ұ����ϰ�
        //������ ������ ���ο� �ּҰ� ���Ҵ� �Ұ���
        int value2 = 6;
        //ptr = &value2;
        //*ptr = 10;

        cout << ptr << endl;
        cout << *ptr << endl;
    }
    return 0;
}