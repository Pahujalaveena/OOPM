#include<iostream>
#include<conio.h>
using namespace std;

class Alpha
{
	private:
		int a,b;
	public:
		Alpha()
		{
			a=5;
			b=5;
		}
		static int stat;
		
		static int getStat()
		{
			stat++;
			return stat;
		}
};

int Alpha::stat=0;

int main()
{
	cout<<Alpha::getStat();
	Alpha a1;
	Alpha a2;
	cout<<"Value using class name :"<<Alpha::getStat()<<endl;
	cout<<"Value using a1 object :"<<a1.getStat()<<endl;
	cout<<"Value using a2 object :"<<a2.getStat()<<endl;
}