#include<iostream>
#include<conio.h>
using namespace std;
class home
{
	private:
	int length,breadth;
	public:
	home(int x,int y)                 //Parametrized constructor
	{
		length=x;
		breadth=y;
    }
	void area();
	
};
int home::area()
{
		cout<<"Area of house:"<<length*breadth<<endl;
}

int main()
{
	home h1(9,4);
	h1.area();
}