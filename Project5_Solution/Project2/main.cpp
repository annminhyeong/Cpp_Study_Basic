#include <iostream>

using namespace std;


int main()
{
    int x, y;
    cin >> x >> y;
    
    //if (x > 0 && y > 0)
    //    cout << "both numbers are positive" << endl;
    //else if(x > 0 || y > 0)
    //    cout << "one of the numbers is positive" << endl;
    //else
    //    cout << "Neither number is positive" << endl;


    if (x > 10)
        cout << "A" << endl;
    else if (x == -1)
        return 0; //exit(0);
    else if(x < 0)
        cout << "B" << endl;
    cout << "Hello" << endl;


    //null statement : if���� ;������ ���� ��
    if (x > 10);
    {
        x = 1;
    }

    if (x = 0) // x�� 0�� ���Եǰ� if(x)
        cout << x << endl;
    cout << x << endl;


    return 0;
}