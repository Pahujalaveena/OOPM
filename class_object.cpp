#include<iostream>
#include<conio.h>
using namespace std;
class home
{
	private:
	int length=0,breadth=0;
	public:
	void setdata(int x,int y)
	{
		length=x;
		breadth=y;
	}
	void area()
	{
		cout<<"Area of house:"<<length*breadth<<endl;
	}
};

int main()
{
	home h;
	h.setdata(9,4);
	h.area();
}