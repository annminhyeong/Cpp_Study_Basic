#include <iostream>

int getPrice(bool onSale)
{
    if (onSale) return 10;
    else return 100;
}

int main()
{
    using namespace std;

    //float a;
    //cout << sizeof(float) << endl;
    //cout << sizeof a << endl; //������ ��ȣ �������� 


    //int x = 3;
    //int y = 10;
    //
    ////�޸� ������ : ���� ���� ���ǰ��� ����ѵ� �ڿ����� ����
    //int z = (++x, ++y);
    ////++x;
    ////++y;
    ////z = y; 

    //cout << x << " " << y << " " << z << endl;


    //int a = 1, b = 10;
    //int z;

    ////�޸� �����ڴ� ���Կ����ں��� �켱������ ���⶧���� ��ȣ�� ������� ��
    //z = (++a, a + b++);
    //cout << z << endl;


    ////���Ǻ� ������
    //bool onSale = true;
    //
    ////������� ���ǿ� ���� ���� �ʱ�ȭ �Ҷ� ������
    //const int price = (onSale == true) ? 10 : 100;
    ////const int price = getPrice(true);

    ////if (onSale) price = 10;
    ////else price = 100;

    //cout << price << endl;
    

    int x = 5;
    cout << ((x % 2 == 0) ? "even" : "odd") << endl;
    return 0;
}