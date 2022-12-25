#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	public:
		int n;
		void input()
		{
			cout<<"Enter the value of n:"<<endl;
			cin>>n;
		}
	void show()
	{
		cout<<"N="<<n<<endl;
	}
};
class Derived1:public Base
{
	public:
		int m;
		void input2()
		{
			cout<<"Enter the value of m:"<<endl;
			cin>>m;
		}
		void show2()
		{
			cout<<"M="<<m<<endl;
		}
};
class Derived2:public Derived1
{
	public:
		int total;
		void show_total()
		{
			total=m+n;
			cout<<"The total is:"<<total<<endl;
		}
};

int main()
{
	Derived2 der;
	der.input();
	der.show();
	der.input2();
	der.show2();
	der.show_total();
}