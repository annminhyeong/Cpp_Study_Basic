#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;


int main()
{
    //writting
    if (true)
    {
        ofstream ofs("my_first_file.dat"); //ios::app, ios::binary
        //ofs.open("my_first_file.dat");
        
        if (!ofs)
        {
            cerr << "couldn't open file" << endl;
            exit(1);
        }

        //ASCII ���
        ////���� ����
        //ofs << "Line 1" << endl;
        //ofs << "Line 2" << endl;


        //binary ���
        //const unsigned num_data = 10;
        //ofs.write((char*)&num_data, sizeof(num_data));

        //for (int i = 0; i < num_data; i++)
        //    ofs.write((char*)&i, sizeof(i));


        //sstream�� ��Ƽ� ����
        stringstream ss;
        ss << "Line 1" << endl;
        ss << "Line 2" << endl;
        string str = ss.str();

        unsigned str_length = str.size();
        ofs.write((char*)&str_length, sizeof(str_length));
        ofs.write(str.c_str(), str_length);
        ofs.close();
    }

    if (true)
    {
        ifstream ifs("my_first_file.dat");

        if (!ifs)
        {
            cerr << "Cannot open file" << endl;
            exit(1);
        }

        //ASCII ���
        //while (ifs)
        //{
        //    std::string str;
        //    getline(ifs, str);
        //    cout << str << endl;
        //}


        //binary ���
        //unsigned int num_data = 0;
        //ifs.read((char*)&num_data, sizeof(num_data));

        //for (int i = 0; i < num_data; i++)
        //{
        //    int num;
        //    ifs.read((char*)&num, sizeof(num));
        //    cout << num << endl;
        //}

        //sstream�� ��Ƽ� �б�
        unsigned str_len = 0;
        ifs.read((char*)&str_len, sizeof(str_len));

        string str;
        str.resize(str_len);
        ifs.read(&str[0], str_len);

        cout << str << endl;
        ifs.close();
    }

    return 0;
}