#include <iostream>

using namespace std;


int main()
{
    int fixedArray[] = { 1, 2, 3, 4, 5 };

    //�����Ҵ� �迭�� �迭ũ�⸦ �־�� ��
    int* array = new int[3] { 1, 2, 3 };
    
    delete[] array;
    return 0;
}