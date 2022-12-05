#include<iostream>
using namespace std;
class two;
class one
{
	private:
		int no1;
	public:
		void get_no1()
		{
			cout<<"Enter 1st number:";
			cin>>no1;
		}
	friend void fun(one obj,two obj2);
};
class two
{
	private:
		int no2;
	public:
		void get_no2()
		{
			cout<<"Enter 2nd number:";
			cin>>no2;
		}
	friend void fun(one obj,two obj2);
};

void fun(one obj,two obj2)
{
	if(obj.no1>obj2.no2)
	{
		cout<<"First no. is greater"<<endl;
	}
	else if(obj.no1<obj2.no2)
	{
		cout<<"Second no. is greater"<<endl;
	}
	else
	{
		cout<<"Both are equal!"<<endl;
	}
}
int main()
{
	one obj;
	two obj2;
	obj.get_no1();
	obj2.get_no2();
	fun(obj,obj2);
}