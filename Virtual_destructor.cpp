#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		virtual~base()
		{
			cout<<"Base class destroyed!"<<endl;
		}
};
class derived:public base
{
	public:
		~derived()
		{
			cout<<"Derived class destroyed!"<<endl;
		}
};
int main()
{
	base *b1=new derived;
	delete b1;
}