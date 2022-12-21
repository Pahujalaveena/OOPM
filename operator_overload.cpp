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
	friend bool operator>(person x,person y);
	friend bool operator<(person x,person y);
};

bool operator<(person x,person y)
{
	return x.weight<y.weight;
}
bool operator>(person x,person y)
{
	return x.weight>y.weight;
}
int main()
{
	int w1,w2;
	cout<<"Enter John's weight"<<endl;
	cin>>w1;
	
	cout<<"Enter Peter's weight"<<endl;
	cin>>w2;
	
	person John(w1);
	person Peter(w2);
	
	if(John>Peter)
	{
		cout<<"John heavier"<<endl;
	}
	else if(Peter>John)
	{
		cout<<"Peter is heavier"<<endl;
	}
	else
	{
		cout<<"Both have same weight"<<endl;
	}
	
	
}