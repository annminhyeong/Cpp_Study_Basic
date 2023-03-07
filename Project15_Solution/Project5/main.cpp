#include <iostream>
#include <memory>
#include "Resource.h"

using namespace std;

auto doSomething()
{
    //auto res1 = std::make_unique<Resource>(5);
    //return res1;

    //return std::unique_ptr<Resource>(new Resource(5));

    return std::make_unique<Resource>(5);
}

//void doSomething2(std::unique_ptr<Resource>& res)
void doSomething2(Resource* res)
{
    res->setAll(10);
}

auto doSomething2(std::unique_ptr<Resource> res)
//void doSomething2(Resource* res)
{
    res->setAll(100);
    res->print();

    return res;
}

int main()
{
    //{
    //    //Resource* res = new Resource(10000000);
    //    
    //    //�ڵ����� �޸𸮸� �ݳ�����
    //    std::unique_ptr<Resource> res(new Resource(10000000));

    //    //early return throw
    //    //delete res;
    //}


    //{
    //    //�⺻ �ڷ��� ����ũ ������ ���
    //    std::unique_ptr<int> upi(new int);
    //    
    //    //auto* ptr = new Resource(5);
    //    //std::unique_ptr<Resource> res1(ptr);

    //    //����
    //    //std::unique_ptr<Resource> res1 = make_unique<Resource>(5);
    //    //auto res1 = make_unique<Resource>(5);

    //    auto res1 = doSomething();
    //    res1->setAll(5);
    //    res1->print();

    //    std::unique_ptr<Resource> res2;
    //    cout << std::boolalpha;
    //    cout << static_cast<bool>(res1) << endl;
    //    cout << static_cast<bool>(res2) << endl;

    //    //����ũ �����ʹ� ���� �Ұ���, �������� �Ѱ����� �����ؾ� ��
    //    //res2 = res1;
    //    res2 = std::move(res1);
    //    cout << std::boolalpha;
    //    cout << static_cast<bool>(res1) << endl;
    //    cout << static_cast<bool>(res2) << endl;

    //    if (res1 != nullptr) res1->print();
    //    if (res2 != nullptr) res2->print(); //(*res).print()

    //}

    //{
    //    auto res1 = std::make_unique<Resource>(5);
    //    res1->setAll(1);
    //    res1->print();

    //    cout << std::boolalpha;
    //    cout << static_cast<bool>(res1) << endl;

    //    //res1�� �������� �Ѱ����� �����ؾ� �ϹǷ� ����
    //    //doSomething2(res1);

    //    //res1 = doSomething2(std::move(res1));
    //    
    //    //����ũ �����Ͱ� ������ ���� �����͸� �Լ����� ����
    //    doSomething2(res1.get());


    //    cout << std::boolalpha;
    //    cout << static_cast<bool>(res1) << endl;
    //    res1->print();
    //}

    //{
    //    Resource* res = new Resource;

    //    //����ũ �����ʹ� �������� �Ѱ����� �ξ�� ��
    //    std::unique_ptr<Resource> res1(res); //X
    //    std::unique_ptr<Resource> res2(res); //X

    //    //�޸𸮸� �ѹ��� �ݳ��ؼ� ����
    //    delete res; //X
    //}

    return 0;
}