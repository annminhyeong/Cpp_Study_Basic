#include <iostream>


using namespace std;


struct MyStruct
{
    int array[5] = { 9, 7, 5, 3, 1 };
};

void doSomething(MyStruct *ms)
{
    cout << sizeof((*ms).array) << endl;
}

//void printArray(int *array)
void printArray(int array[])
{
    //�Լ� �Ķ���Ϳ��� �迭�� �������̹Ƿ� ������ ũ���� 8�� ��µ�
    //�Ķ���ͷ� ����� �迭�� ����� ���� �迭�� ù��° �ּҰ��̰�
    //�Ķ���ͷ� ����� �迭 ���� ��ü�� �ּҰ��� �迭�� ���� ���� �ּҰ��̴� 
    cout << sizeof(array) << endl;
    cout << *array << endl;
    *array = 100;
}

int main()
{
    //int array[5] = { 9, 7, 5, 3, 1 };
    //
    ////cout << array[0] << " " << array[1] << endl;
    ////cout << array << endl;
    ////cout << &(array[0]) << endl;
    ////cout << *array << endl;
    ////
    ////int* ptr = array;
    ////cout << ptr << endl;
    ////cout << *ptr << endl;

    ////char name[] = "jackjack";
    ////cout << *name << endl;

    //cout << sizeof(array) << endl; //20

    //int* ptr = array;
    ////cout << sizeof(ptr) << endl; //8

    ////printArray(array);
    ////cout << array[0] << " " << *array << endl;

    ////cout << *ptr << " " << * (ptr + 1) << endl;

    MyStruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl;
    
    //�迭�� ����ü�� Ŭ������ ��� �ִ� ���� �����ͷ� ���� ��ȯ���� ����
    doSomething(&ms);

    return 0;
}