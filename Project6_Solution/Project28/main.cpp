#include <iostream>
//#include <array>
#include <vector>


using namespace std;


int main()
{
    //ũ�� ���� ���ص� ��  
    //std::vector<int> array;
    //
    //std::vector<int> array2 = { 1, 2, 3, 4, 5 };
    //cout << array2.size() << endl;
    
    int* my_arr = new int[5];

    vector<int> arr = { 1, 2, 3, 4, 5 };

    //�迭 ũ�� ������
    arr.resize(10);

    for (auto& itr : arr)
        cout << itr << " ";
    cout << endl;

    cout << arr[0] << endl;
    cout << arr.at(0) << endl;

    //vector�� delete �Ƚᵵ ��
    //delete[] my_arr;
    return 0;
}