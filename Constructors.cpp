#include<iostream>
#include<conio.h>
using namespace std;
class home
{
	private:
	int length,breadth;
	public:
	home()                             //Default constructor
	{
		lenght=0;
		breadth=0;
	}	
	
	home(int x,int y)                 //Parametrized constructor
	{
		length=x;
		breadth=y;
	}
	
	home(home h1)                      //copy constructor
	{
		length=h.lenght;
		breadth=h.breadth;
	}
	void area()
	{
		cout<<"Area of house:"<<length*breadth<<endl;
	}
};

int main()
{
	home h,h1(9,4),h3(h1);
	h.area();
	h1.area();
	h3.area();
}