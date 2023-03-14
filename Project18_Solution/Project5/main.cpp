#include <iostream>
#include <regex>
#include <string>

using namespace std;


int main()
{
    //regex re("\\d"); //�ѱ��ڰ� �������� �Ǻ�
    //regex re("\\d*"); //�Է��� �ȹްų� �Ѱ� �̻��� �������� �Ǻ�
    //regex re("\\d+"); //�Ѱ� �̻��� ���ڰ� �������� �Ǻ�
    //regex re("[ab]"); //a, b �� ����
    //regex re("[[:digit:]]{3}"); //���ڸ� �������� �Ǻ�
    //regex re("[A-Z]+"); //�빮������ �Ǻ�
    //regex re("[A-Z]{1,5}"); //�ּ� �ѱ��� �ִ� 5������ �빮������ �Ǻ�
    
    //0~9���� �ѱ��ڸ� �Է¹ް� -�� �־ �ǰ� ��� �ǰ�
    //0~9���� �ּ� 1���ڿ��� �ִ� 4���ڸ� �Է¹޴��� �Ǻ�
    regex re("([0-9]{1})([-]?)([0-9]{1,4})"); 
    
    string str;

    while (true)
    {
        getline(cin, str);

        if (std::regex_match(str, re))
            cout << "Match" << endl;
        else
            cout << "No match" << endl;

        //print matches
        {
            auto begin = std::sregex_iterator(str.begin(), str.end(), re);
            auto end = std::sregex_iterator();
            for (auto itr = begin; itr != end; ++itr)
            {
                std::smatch match = *itr;
                cout << match.str() << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}