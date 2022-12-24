#include<iostream>
#include<conio.h>
using namespace std;
class base1
{
	private:
		int a,b,c;
	public:
		void input()
		{
			cout<<"Enter value of base 1 class"<<endl;
			cin>>a>>b;
		}
		void show()
		{
			c=a+b;
			cout<<"Sum="<<c<<endl;
		}
};
class base2
{
	private:
		int a,b,c;
	public:
		void input2()
		{
			cout<<"Enter the value of base 2 class"<<endl;
			cin>>a>>b;
		}
		void show2()
		{
			c=a-b;
			cout<<"Subtraction ="<<c<<endl;
		}
};

class Derived:public base1,public base2
{
	private:
		int a,b,c;
	public:
		void input3()
		{
			cout<<"Enter values of derived class"<<endl;
			cin>>a>>b;
		}
		void show3()
		{
			c=a*b;
			cout<<"Multiplication="<<c<<endl;
		}
};

int main()
{
	Derived dev;
	dev.input();
	dev.show();
	dev.input2();
	dev.show2();
	dev.input3();
	dev.show3();
}