#include <iostream>
#include <limits>


int main()
{
    using namespace std;
    
    //char c1(65);
    //char c2('A');

    ////c style ����ȯ
    //cout << (char)65 << endl;
    //cout << (int)'A' << endl;

    ////c++ style ����ȯ
    //cout << char(65) << endl;
    //cout << int('A') << endl;

    ////static_cast�� �̿��� ����ȯ
    //cout << static_cast<char>(65) << endl;
    //cout << static_cast<int>('A') << endl;


    //char ch(97);
    //cout << ch << endl;
    //cout << static_cast<int>(ch) << endl;
    //cout << ch << endl;

    //char c1(65);

    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;

    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;

    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;

    //char c1(65);

    //cout << sizeof(unsigned char) << endl;
    //cout << (int)std::numeric_limits<unsigned char>::max() << endl;
    //cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;


    char c1(65);
    // \n�� endl�� ������
    // \n�� �׳� �ٹٲ�������, endl�� �ٹٲް� ���ÿ� ������ ���� ���� ����Ѵ�
    cout << int('\n') << endl;
    cout << "This is first line\nsecond line\n";
    cout << "This is first line" << endl;
    cout << "second line" << std::flush; //�ٹٲ� ���ϰ� ������ ������ ���� ����Ѵ�

    wchar_t c; //window �� char
    char32_t c1; //�����ڵ��
    return 0;
}