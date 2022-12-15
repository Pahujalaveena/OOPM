#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	base()
	{
		cout<<"Default of base class"<<endl;
	}
	base(int b)
	{
		cout<<"Parameterized of base class:"<<b<<endl;
	}
};
class derived:public base
{
	
};

int main()
{
	derived d1;
	derived d2(7);
}
