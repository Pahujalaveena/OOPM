#include<iostream>
#include<conio.h>
using namespace std;
class person
{
	private:
		int weight;
	public:
		person(int w=0)
		{
			weight=w;
		}
	void printweight()
	{
		cout<<"Weight is "<<weight<<endl;
	}
	void operator++(int)
	{
		weight++;
	}
};
int main()
{
	person Jon(78);
	Jon++;
	Jon.printweight();
}