#include <iostream>

using namespace std;

struct Employee // 2 + (2) + 4 + 8 = 16 bytes (�е�)
{
    short id;    //2bytes
    int age;     //4bytes
    double wage; //8bytes

};

int main()
{
    Employee emp1;
    cout << sizeof(Employee) << endl; //16byte, �е��� �Ͼ(short 2byte�� �߰��ؼ�)

    return 0;
}