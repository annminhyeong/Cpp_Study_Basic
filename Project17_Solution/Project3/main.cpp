#include <iostream>
#include <string>

using namespace std;


int main()
{
    string my_str("01234567");

    cout << std::boolalpha;
    //cout << my_str.empty() << endl;

    cout << my_str.size() << endl;
    cout << my_str.length() << endl;

    cout << my_str.capacity() << endl;
    my_str.reserve(1000); //���ڿ� �뷮 ����
    cout << my_str.capacity() << endl;

    cout << my_str.max_size() << endl;

    return 0;
}