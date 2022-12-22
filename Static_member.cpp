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
			b=4;
			stat++;
		}
	static int stat;
};
int Alpha::stat=0;

int main()
{
	Alpha a1;
	Alpha a2;
	cout<<"Value using a1 object :"<<a1.stat<<endl;
	cout<<"Value using a2 object :"<<a2.stat<<endl;
	cout<<"Value using class name :"<<Alpha::stat<<endl;
}