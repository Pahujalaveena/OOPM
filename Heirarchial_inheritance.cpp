#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	public :
		int one;
		void getone()
		{
			cout<<"Enter the value="<<endl;
			cin>>one;
		}
};
class Derived1:public Base
{
	public:
		int two;
		void gettwo()
		{
			cout<<"Enter the value="<<endl;
			cin>>two;
		}
};
class Derived2:public Base
{
	public:
		int three,total;
		void getthree()
		{
			cout<<"Enter the value="<<endl;
			cin>>three;
		}
		void total()
		{
			total=one+two+three;
			cout<<"The total is="<<total<<endl;
		}
};

int main()
{
	Derived1 d1;
	d1.getone();
	Derived2 d2;
	d2.getthree();
	d2.total();
}