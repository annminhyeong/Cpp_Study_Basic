#include <iostream>
#include <array>


using namespace std;

int& getValue(int x)
{
    int value = x * 2;
    return value;
}

//my_array ó�� �޸𸮰� ������� �ʴ� ��쿡�� ����ص� ��
int& get(std::array<int, 100>& my_array, int ix) 
{
    return my_array[ix];
}

int main()
{
    //�Լ��� ȣ�⳪�� ���� �ּ��� ���� ������ �����Ƿ� ������
    //int& value = getValue(5);

    //cout << value << endl;
    //cout << value << endl;

    
    std::array<int, 100> my_array; 
    my_array[30] = 10;

    //my_array[30]�� ����
    get(my_array, 30) *= 10;
    cout << my_array[30] << endl;

    return 0;
}