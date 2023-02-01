#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>


using namespace std;


int main()
{
    int fibonacci[] = { 0, 1, 1, 2, 300, 5, 8, 13,
                            21, 34, 55, 89 };
    
    ////change array
    ////for (int number : fibonacci)
    ////number�� ���� �����ؼ� �����ϹǷ� �������� Ÿ���� �ٿ��� ���� ������ �� ����
    //for (auto& number : fibonacci)
    //    number *= 10;

    ////output array
    //for (const auto& number : fibonacci)
    //    cout << number << " ";
    //cout << endl;

    int max_number = std::numeric_limits<int>::lowest();

    for (const auto& n : fibonacci)
        max_number = std::max(max_number, n);

    cout << max_number << endl;

    
    
    //�����Ҵ� �迭�� for-each ��� �Ұ�
    int* test = new int[5]{1, 2, 3, 4, 5};
    //for (int x : test) cout << x << endl; 


    vector<int> fibonacci2 = { 0, 1, 1, 2, 300, 5, 8, 13,
                    21, 34, 55, 89 };
    
    for (int x : fibonacci2)
        cout << x << endl;


    return 0;
}