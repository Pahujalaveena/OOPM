#include<iostream>
#include<conio.h>
using namespace std;

class person
{
	public:
		virtual void give()=0;
};
class boy:public person
{
	public:
		void give()
		{
			cout<<"Brown bun!"<<endl;
		}
};

int main()
{
	boy b;
	b.give();
}