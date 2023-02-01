#include <iostream>
#include <array>
#include <algorithm>


using namespace std;

//�迭�� ũ�Ⱑ ū ��� ������ �� �����ɸ� -> & �������� Ÿ�� ���� �ذ� ����
void printLength(const array<int, 5>& my_arr)
{
    cout << my_arr.size() << endl;

}

int main()
{
    array<int, 5> my_arr = { 1, 21, 3, 40, 5 };
    //my_arr = { 0, 1, 2, 3, 4 };
    //my_arr = { 0, 1, 2, };

    //cout << my_arr[0] << endl;
    //cout << my_arr.at(0) << endl;
    
    //cout << my_arr.size() << endl;
    //printLength(my_arr);

    //for-each ����
    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;

    //�������� ����
    //std::sort(my_arr.begin(), my_arr.end());
    
    //������������
    std::sort(my_arr.rbegin(), my_arr.rend());
    
    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;

    return 0;
}