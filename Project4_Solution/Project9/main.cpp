#include <iostream>
#include <typeinfo>
#include <string>

enum Color
{
    COLOR_BLACK = -3, //1�� ������
    COLOR_RED, //-2
    COLOR_BLUE = 5,
    COLOR_GREEN = 5,
    COLOR_SKYBLUE, //6
    
    //������ �Ӽ��� ��������ó�� �۵��ϹǷ� �ٸ� enum���� ���� �Ӽ� �̸� ������ ���� �߻�
    //BLUE, 
};

enum Feeling
{
    HAPPY, //�⺻�Ҵ�
    JOY,
    TIRED,
    //BLUE,
};

int main()
{
    using namespace std;

    //if (COLOR_BLUE == COLOR_GREEN)
    //    cout << "Equal" << endl;

    //Color my_color = COLOR_RED;
    //cout << my_color << " " << COLOR_RED << endl;

    //int color_id = COLOR_BLACK;
    ////my_color = color_id; //������ ������ int �Ҵ� �Ұ���
    //
    //my_color = static_cast<Color>(-3);
    //cout << color_id << endl;

    ////cin >> my_color; //cin���� ������ ����� �Է� �ޱ� �Ұ���

    ////��ȸ���
    //int in_number;
    //cin >> in_number;
    //if (in_number == static_cast<Color>(-3)) my_color = static_cast<Color>(-3);

    string str_input;
    getline(cin, str_input);

    //������� (��Ÿ, ��ҹ��� ���� ��� ...)
    if (str_input == "COLOR_BLACK") str_input = static_cast<Color>(-3);
    return 0;
}