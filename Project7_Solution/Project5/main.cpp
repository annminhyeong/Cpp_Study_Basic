#include <iostream>
#include <vector>

using namespace std;

//���������� �迭 �޴� ��� Ÿ�� : (&�迭�̸�)[�迭ũ��]
void printElement(int(&arr)[4])
{

}

void printElement(vector<int>& arr)
{

}

int main()
{
    //int arr[]{ 1, 2, 3, 4 };
    //printElement(arr);
    
    vector<int> arr{ 1, 2, 3, 4 };

    return 0;
}