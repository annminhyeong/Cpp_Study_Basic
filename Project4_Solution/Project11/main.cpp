#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    using namespace std;

    //�ڷ��� ����
    typedef double distance_t;

    std::int8_t i(97);

    double my_distance;
    distance_t home2work;
    distance_t home2school;
    
    //�ڷ��� ��Ī ���� ���1
    //typedef vector<pair<string, int>> pairlist_t;

    //�ڷ��� ��Ī ���� ���2
    using pairlist_t = vector<pair<string, int>>;

    pairlist_t pairlist1;
    pairlist_t pairlist2;
    
    return 0;
}