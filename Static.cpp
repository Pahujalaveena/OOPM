#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student
{
	private:  int roll_no,marks;
	          char name[20];
	          static int count;
	public:   student()
	            {
	            	count++;
				}
				void getdata()
				{
					cout<<"Enter your name"<<endl;
					gets(name);
					cout<<"Enter your roll no."<<endl;
					cin>>roll_no;
					cout<<"Enter your marks"<<endl;
					cin>>marks;
				}
				void setdata()
				{
					cout<<"student's name:"<<name<<endl;
					cout<<"student's roll_no:"<<roll_no<<endl;
					cout<<"Student's marks:"<<marks<<endl;
				}
	            static int setcount();
};
int Student::setcount()
{
	cout<<"Number of objects are:"<<endl;
	return count;
}
int Student::count=0;

int main()
{
	Student s1,s2;
	s1.getdata();
	s1.setdata();
	s2.getdata();
	s2.getdata();
	cout<<Student::setcount();
	getch();
}
	           
