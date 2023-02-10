#include <iostream>

using namespace std;



class Fruit
{
public:
    //Ŭ���� �ȿ� ���Ե� �ڷ��� nested types
    enum class FruitType
    {
        APPLE, BANANA, CHERRY,
    };

    class InnerClass
    {

    };

    struct InnderStruct
    {

    };
private:
    FruitType m_type;

public:
    Fruit(FruitType type)
        :m_type(type)
    {}

    FruitType getType()
    {
        return m_type;
    }

};


int main()
{
    Fruit apple(Fruit::FruitType::APPLE);

    if (apple.getType() == Fruit::FruitType::APPLE)
    {
        cout << "Apple" << endl;
    }

    return 0;
}