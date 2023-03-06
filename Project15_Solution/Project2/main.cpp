#include <iostream>

using namespace std;

void doSometing(int& lref)
{
    cout << "L-value ref" << endl;
}

void doSometing(int&& ref)
{
    cout << "R-value ref" << endl;
}

int getResult()
{
    return 100 * 100;
}

int main()
{
    int x = 5;
    int y = getResult();

    const int cx = 6;
    const int cy = getResult();


    //L-value references : L-value�� ���� �� ����
    int& lr1 = x;    //const�� �ƴ� L-value
    //int& lr2 = cx; //const�� L-value
    //int& lr3 = 6;  //R-value

    const int& lr4 = x;  //const�� �ƴ� L-value
    const int& lr5 = cx; //const�� L-value
    const int& lr6 = 6;  //R-value������ ���� �������� �ʱ� ������ ��� ����


    //R-vaule refereces : R-value�� ���� �� ����
    //int&& rr1 = x;  //const�� �ƴ� L-value
    //int&& rr2 = cx; //const�� L-value
    int&& rr3 = 5;    //R-value

    cout << rr3 << endl;
    rr3 = 10;
    cout << rr3 << endl;

    
    //const int&& rr4 = x;  //const�� �ƴ� L-value
    //const int&& rr5 = cx; //const�� L-value
    const int&& rr6 = 5;    //R-value

    doSometing(x);           //L-value
    doSometing(5);           //R-value
    doSometing(getResult()); //R-value

    return 0;
}
