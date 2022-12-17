#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		void msg()
		{
			cout<<"Base class"<<endl;
		}
};

class derived:public base
{
	public:
		void msg()
		{
			cout<<"Derived class"<<endl;
			base::msg();          //calling (if we don't want to create base class's object
		}
};

int main()
{
	base b;
	b.msg();
	
	derived d;
	d.msg();
}