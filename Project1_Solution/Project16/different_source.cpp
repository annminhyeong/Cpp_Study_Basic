#include <iostream>


void doSomething()
{
using namespace std;

#ifdef LIKE_APPLE
    //LIKE_APPLE �ޱ׷ΰ� ���� �Ǿ� ������ ����
    cout << "Apple" << endl;
#else
    //LIKE_APPLE �ޱ׷ΰ� ���� �Ǿ� ���� ������ ����
    cout << "Orange" << endl;
#endif
}