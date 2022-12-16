#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
	base()
	{
		cout<<"Default of base class"<<endl;
	}
	base(int a)
	{
		cout<<"Parametrized of base class"<<endl;
	}
};
class derived:public base
{
	public:
	derived()
	{
		cout<<"Default of derived class"<<endl;
	}
	derived(int b)
	{
		cout<<"Parametrized of derived class"<<endl;
	}
};

int main()
{
	derived d1;
	derived d2(7);
}


