#include <iostream>
#include <vector>

using namespace std;


int main()
{
    std::vector<int> v{ 1, 2, 3 };

    //v.resize(2);
    
    //�޸� �뷮 Ȯ���ϰڴٴ� �ǹ�
    v.reserve(1024); 

    for (unsigned int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    cout << v.size() << " " << v.capacity() << endl;
    
    //data() : vector �ּҰ� ��������
    int* ptr = v.data(); 
    cout << ptr[2] << endl;

    return 0;
}