#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"Default of base class:";
		}
	    base(int b)
	    {
	    	cout<<"Parameterized of base class:"<<b<<endl;
		}
};
class derived:public base
{
	public:
		derived()
		{
			cout<<"Default of default class:";
		}
	    derived(int d)
	    {
	    	cout<<"Parameterized of derived class:"<<d<<endl;
		}
};

int main()
{
	derived d1;
	derived d2(9);
}