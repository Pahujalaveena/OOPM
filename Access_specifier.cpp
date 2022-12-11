#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
	private:                        //private data can only be used in the class
	int length=0;
	protected:
	int width=0;                    //protected data can be used in class as well as inherited class 
    public:
    int breadth=0;                  //public data can be accessed from anywhere
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
	home h,h1;
	h.setdata(9,4);
	h.area();
	h1.setdata(3,7);
	h.area();
}