#include<iostream>
#include<conio.h>
using namespace std;
class Alpha
{
	private:
		int a1;
	public:
		Alpha(int a=0)
		{
			a1=a;
		}
	friend class Beta;
};
class Beta
{
	private:
		int b1;
	public:
		Beta(int b=0)
		{
			b1=b;
		}
	int sum()
	{
		Alpha abc(3);
		int sum=abc.a1+b1;
		return sum;
	}
};

int main()
{
	Beta bcd;
	cout<<"Sum is "<<bcd.sum()<<endl;
}