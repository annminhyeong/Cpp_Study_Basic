#include <iostream>
#include <string>

using namespace std;

//����� �μ� Ŀ��Ʈ â���� �Է��ϸ�
//���ڰ���, ���ڰ��� �迭�� ��Ƽ� ������, ó�����ڴ� ���� ��ġ��
int main(int argc, char* argv[])
{
    for (int count = 0; count < argc; ++count)
    {
        std::string argv_single = argv[count];

        if (count == 1)
        {
            int input_nubmer = std::stoi(argv_single);
            cout << input_nubmer + 1 << endl;
        }

        cout << argv_single << endl;
    }

    return 0;
}