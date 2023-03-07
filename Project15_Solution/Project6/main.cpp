#include "Resource.h"

using namespace std;


void doSomething(std::unique_ptr<Resource> res)
{

}

int main()
{

    //�������, �Լ� ���ڿ� ��ü ������ ���� �־� ���� �߻� ���ɼ� ����
    //doSomething(std::unique_ptr<Resource>(new Resource(10000000)));
    
    //�Լ� �Ķ���ͷ� �����Ҷ� make_unique<>() ��� ����
    //doSomething(std::make_unique<Resource>(10000000));

    Resource* res = new Resource(3);
    res->setAll(1);
    {
        //�������� ������������ ��������, ������� �����ϰ� �ִ��� ������
        //std::shared_ptr<Resource> ptr1(res);

        //shared_ptr ���� �� make_shared<>() ��� ����
        auto ptr1 = make_shared<Resource>(3);
        
        ptr1->setAll(1);
        ptr1->print();
        {
            
            //ptr1�� ptr2�� ���� ���� ���� �����Ϳ� �����߱� ������
            //ptr1�� ptr2�� �������� ������ �ִ��� �� �� ����,
            //std::shared_ptr<Resource> ptr2(res); //X

            //std::shared_ptr<Resource> ptr2(ptr1);
            auto ptr2 = ptr1;

            ptr2->setAll(3);
            ptr2->print();

            cout << "Going out of the block" << endl;
        }

        ptr1->print();
        cout << "Going out of the outer block" << endl;
    }
    return 0;
}