#include <iostream>

using namespace std;


enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,
};

void printColorName(Colors color)
{
    switch (static_cast<int>(color))
    {
    case 0:
        cout << "BLACK" << endl;
        break;
    case 1:
        cout << "WHITE" << endl;
        break;
    case 2:
        cout << "RED" << endl;
        break;
    case 3:
        cout << "GREEN" << endl;
        break;
    case 4:
        cout << "BLUE" << endl;
        break;
    default:
        break;
    }
}

int main()
{
    //printColorName(Colors::WHITE);

    int x;
    cin >> x;

    switch (x)
    {
        int a; //�������� ����, ���� �ʱ�ȭ�� �Ұ���
        int y;

        case 0:
            //int y; //case �ȿ��� ���� �����ص� �ۿ� ������ ��ó�� �۵�
            y = 5; //���� �ʱ�ȭ ����
            break;
        case 1:
            //cout << y << endl;
        case 2:
        { 
            //��� �������� ����ϸ� �� case ������ ���� ������ ��ó�� �۵�
            int y = 123;
            y = y - x;
            cout << y << endl;
            break;
        }

        default:
            cout << "Undefined input " << x << endl;
    }

    return 0;
}