#include <iostream>
#include <sstream>

using namespace std;


int main()
{
    stringstream os;
    
    //os << "Hello, World!"; //���ۿ� �ϳ��� �߰�
    //os << "Hello, World!2" << endl;
    ////os.str("Hello, World!\n"); //���۸� ���� ���ڿ��� ���ۿ� ��ü�� ����

    ////string str;
    ////str = os.str();

    //cout << os.str() << endl;

    //int i = 12345;
    //double d = 67.89;

    //os << i << " " << d;
    os << "12345 67.89";

    //string str1, str2;
    //os >> str1 >> str2;
    //cout << str1 << "|" << str2 << endl;

    int i2;
    double d2;

    os >> i2 >> d2;
    cout << i2 << "|" << d2 << endl;

    //string stream ����
    os.str("");
    os.str(string());
    os.clear(); //state���� �����

    return 0;
}