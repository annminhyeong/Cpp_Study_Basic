#include <iostream>

using namespace std;


int main()
{
    int length;
    cin >> length;

    //int array[length];

    //�����Ҵ� �迭 ����
    //int *array = new int[length];

    //�����Ҵ� �迭 0���� �ʱ�ȭ
    //int *array = new int[length]();
    //int *array = new int[length]{};
    
    //���� �Ҵ� �迭 �ʱ�ȭ
    //�ʱ�ȭ �� �ε��� ���̰� �������� �Ҵ� ���� �迭 ���̺��� ��� �޸� ħ�� ���� �߻�
    int *array = new int[length]{11, 22, 33, 44, 55, 66};

    array[0] = 1;
    array[1] = 2;
    
    for (int i = 0; i < length; ++i)
    {
        cout << (uintptr_t) & array[i] << endl;
        cout << array[i] << endl;
    }
    
    delete[] array; //���� �Ҵ� �迭 �޸� �ݳ�
    
    return 0;
}