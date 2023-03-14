#include<iostream>
using namespace std;

class person1
{
    public:
    void showperson1()
    {
        cout<<"person1 show"<<endl;
    }
};

class person2
{
    public:
    void showperson2()
    {
        cout<<"person2 show"<<endl;
    }
};

template<class T>
class myclass
{
    public:
    T obj;
    void fun1(){ obj.showperson1();}
    void fun2(){ obj.showperson2();}
};

void test01()
{
    myclass<person1> m;
    m.fun1();
    //m.fun2();
}

int main()
{
    test01();
    system("pause");
    return 0;
}