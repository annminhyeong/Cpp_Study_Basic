#include <iostream>
#include <string>
#include <vector>


using namespace std;

//Friend : name, address, age, height, weight, ...
//         print()

//struct�� �����͸� ������ ��� (��ɵ� ���� �� ������ �������),
//stuct�� ���� �����ڸ� ���� ������
//�����Ϳ� ��ɵ� ���� ���� ���� class ���

//struct Friend
class Friend
{
public: //public, private, protected
    string m_name; //���� �ɹ����� ���� ��Ÿ��
    string address_; //�ɹ����� ���� ���۽�Ÿ��
    int _age; //���� �ɹ����� ���� ��Ÿ��
    double height;
    double weight;

    void print()
    {
        cout << m_name << " " << address_ << " " << _age << " " << height << " "
            << weight << endl;
    }
};

void print(const Friend& fr)
{
    cout << fr.m_name << " " << fr.address_ << " " << fr._age << " " << fr.height << " "
        << fr.weight << endl;
}

void print(const string& m_name, const string& address, const int& age, 
    const double& height, const double& weight)
{
    cout << m_name << " " << address << " " << age << " " << height << " "
        << weight << endl;
}

int main()
{
    //string name = "";
    //string address = "";
    //int age = 0;
    //double height = 0.0;
    //double weight = 0.0;
    //print(name ,address , age, height, weight);


    //vector<string> name_vec;
    //vector<string> addr_vec;
    //vector<int> age_vec;
    //vector<double> height_vec;
    //vector<double> weight_vec;
    //print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);


    Friend jj{ "Jack Jack", "Uptown", 2, 30, 10 }; //�ν��Ͻ�
    print(jj.m_name, jj.address_, jj._age, jj.height, jj.weight);
    print(jj);
    jj.print();
    
    vector<Friend> my_friends;
    my_friends.resize(2);

    for (auto& ele : my_friends)
        ele.print();

    return 0;
}