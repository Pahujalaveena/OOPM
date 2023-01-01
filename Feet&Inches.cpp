#include<iostream>
#include<conio.h>
using namespace std;
struct Distance
{
	int feet;
	int inches;
}d1,d2,sum;

int main()
{
	cout<<"Enter first distance:";
	cout<<"Enter feets:";
	cin>>d1.feet;
	cout<<"Enter inches:";
	cin>>d1.inches;
	
	cout<<"Enter second distance:";
	cout<<"Enter feets";
	cin>>d2.feet;
	cout<<"Enter inches:";
	cin>>d2.inches;
	
	sum.feet=d1.feet+d2.feet;
	sum.inches=d1.inches+d2.inches;
	
	if(sum.inches>12)
	{
		int extra=sum.inches/12;
		sum.feet=sum.feet+extra;
		sum.inches=sum.inches-(extra*12);
	}
	
	cout<<"Sum of distances="<<sum.feet<<"feets:"<<sum.inches<<"inches"<<endl;
}