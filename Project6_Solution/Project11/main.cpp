#include <iostream>

using namespace std;

const char* getName()
{
    return "Jackjack";
}

int main()
{
    //char name[] = "Jack Jack";
    
    //const char* name = "Jack Jack";
    //const char* name2 = "Jack Jack2";
    //cout << (uintptr_t)name << endl;
    //cout << (uintptr_t)name2 << endl;

    //int int_arr[5] = { 1, 2, 3, 4, 5 };
    //char char_arr[] = "Hello World";
    //const char* name = "Jack Jack";

    //cout << int_arr << endl;
    //cout << char_arr << endl; //�����Ϸ��� ���ڿ��� �ּҰ� �ƴ϶� ���ڿ��� ����ϵ��� ������
    //cout << name << endl;

    char c = 'Q';
    cout << &c << endl; //���ڿ��� �ν��ؼ� ������ �� ���

    return 0;
}