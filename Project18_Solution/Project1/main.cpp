#include <iostream>
#include <string>
#include <iomanip> //input/output manipulators

using namespace std;


int main()
{
    //char buf[5];

    ////5���ڸ� �޵��� ����
    //cin >> setw(5) >> buf; //abcdefghijk
    //cout << buf << endl; //a b c d \0

    ////���ۿ� �����ִ� ���� ��������
    //cin >> setw(5) >> buf;
    //cout << buf << endl; //e f g h \0

    //cin >> setw(5) >> buf;
    //cout << buf << endl; //i j k \0


    //int i;
    //float f;
    //
    ////cin���� �����ö� ��ĭ ����
    //cin >> i >> f;
    //cout << i << " " << f << endl;


    //char ch;

    //while (cin.get(ch))
    //    cout << ch; //������� ���� ��

    
    //char buff[100];
    ////�ѱ��ھ� �а� ���ۿ� ������ \n�� ���ۿ� ���� ����
    ////cin.get(buff, 5); 
    //
    ////������ �� �а� ���� ���, \n�� ���ۿ� ������
    //cin.getline(buff, 100);
    //
    ////gcount() : ����� �о����� ���
    //cout << cin.gcount() << " " << buff << endl;

    ////���ۿ� �����ִ� ���� �б�
    ////cin.get(buff, 5);
    //cin.getline(buff, 100);
    //cout << cin.gcount() << " " << buff << endl;

    
    ////string �Է� �ޱ�
    //string buf;
    //getline(cin, buf);
    //cout << cin.gcount() << " " << buf << endl;
        

    char buf[1024];
    //cin.ignore(2); //n���� ����

    //���ۿ��� ������ ��µ� ���� Ȯ��
    //cout << (char)cin.peek() << endl; 
    
    cin >> buf;
    cout << buf << endl;

    //cin.unget(); ///�������� ���� ���� �ٽ� ���ۿ� �ֱ�
    cin.putback('A'); //���ۿ� ���ϴ� ���� �ֱ�

    cin >> buf;
    cout << buf << endl;

    return 0;
}