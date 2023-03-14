#include<iostream>
using namespace std;

template<class T>
class base
{
    T m;
}; 

class son :public base<int>
{

};
void test01()
{
    son c;
}

template<class T1, class T2>
class son2 :public base<T2>
{
    public:
    son2()
    {
         cout<<typeid(T1).name()<<endl;
         cout<<typeid(T2).name()<<endl;
     }
    son2(T1 name, T2 age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	T1 mName;
	T2 mAge;
};

void test02()
{
    son2<int, char>child1;
    //son2<int, char>Q(10,"ABCD");

}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}