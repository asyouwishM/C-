#include<iostream>
using namespace std;
#include<string>

template<class nametype , class agetype = int>
class person
{
public:
    person(nametype name , agetype age)
    {
        this->mname = name;
        this->mage = age;
    }
    void showperson()
    {
        cout<<"name: "<<this->mname<<"age: "<<this->mage<<endl;
    }
    public:
    nametype mname;
    agetype mage;
};

void test01()
{
    person<string , int>p("÷Ì∞ÀΩ‰", 999);
    p.showperson();
}

void test02()
{
    person<string>p("÷Ì∞ÀΩ‰",999);
    p.showperson();
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}