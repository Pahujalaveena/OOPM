#include<iostream>
#include<conio.h>
using namespace std;
class Display
{
	public:
		void show(int a)
		{
			cout<<"The value of a :"<<a<<endl;
		}
		void show(int a ,int b)
		{
			cout<<"The value of a:"<<a<<" and b:"<<b<<endl;
		}
		void show(double a,double b)
		{
			cout<<"The value of a:"<<a<<" and b:"<<b<<endl;
		}
		void show(int a, double b)
		{
			cout<<"The value of a:"<<a<<" and b:"<<b<<endl;
		}
};

int main()
{
	Display dis;
	dis.show(4);
	dis.show(2,3);
	dis.show(2.5,5.7);
	dis.show(3,3.5);
	getch();
}