#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
    string my_str("abcdefg");

    //cout << my_str[0] << endl;
    //cout << my_str[3] << endl;

    //my_str[3] = 'Z';
    //cout << my_str << endl;

    //try
    //{
    //    //string���� ���ȣ �����ڴ� ���� ������ ����ó�� ������
    //    //my_str[100] = 'X';

    //    my_str.at(100) = 'X';
    //}
    //catch (std::exception& e)
    //{
    //    cout << e.what() << endl;
    //}

    ////string�� c ��Ÿ�� ���ڿ��� ��������, �����Ҷ� ���� \0 �ٿ���
    //const char* arr = my_str.c_str();
    //const char* arr = my_str.data();

    //cout << my_str.c_str() << endl;
    //cout << (int)arr[6] << endl;
    //cout << (int)arr[7] << endl;
    
    //string�� c ��Ÿ�� ���ڿ��� �����ϱ�
    char buf[20];
    my_str.copy(buf, 5, 0); // \0 �ȳ־���
    buf[5] = '\0';

    cout << buf << endl;

    return 0;
}