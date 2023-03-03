#include <iostream>

using namespace std;

//�ش� Ÿ�� ���ܸ� ���� �� �ִ� ���ɼ��� �ִٴ� throw (Ÿ�Ը�)
void last() throw (int)
{
    cout << "last" << endl;
    cout << "Throws exception" << endl;

    //int ���� �߻� : catch�� ã��
    throw - 1;

    //���� �߻��� ���� �ڵ� ���� �ȵǰ� �Լ� ����
    cout << "End last" << endl;
}

void third()
{
    cout << "Third" << endl;

    last();
    //�Լ��� ����ǵ� ���� �߻��� ���� �ڵ� ���� �ȵ�
    cout << "End Third" << endl;
}

void second()
{
    cout << "Second" << endl;
    try
    {
        third();
        //�Լ��� ����ǰ� catch���� ã������ double Ÿ�Կ� ���� ���� ó��
        //catch���̿��� �Ʒ��� �ִ� �ڵ� ���� �ȵǰ� �Լ� ����
    }
    catch (double)
    {
        cerr << "Second caught int exception" << endl;
    }

    cout << "End second" << endl;
}

void first()
{
    cout << "first" << endl;
    try
    {
        second();
        //�Լ��� ����ǰ� ����ó���ϱ� ���� catch���� ã��
        //int Ÿ���� ����ó�� �ϴ� catch���� �߰��ϸ� �ش� catch���� �����ϰ�
        //������ �ڵ带 ������ �� �Լ� ����
    }
    catch (int)
    {
        cerr << "first caught int exception" << endl;
    }

    cout << "End first" << endl;
}

int main()
{
    cout << "Start" << endl;

    try
    {
        first();
    }
    catch (int)
    {
        cerr << "main caught int exception" << endl;
    }
    catch (...) //��� ���� �� �ޱ�
    {
        cerr << "main caught ellipses exception" << endl;
    }

    cout << "End main" << endl;

    return 0;
}