#include <iostream>

using namespace std;

class Student {
public:
	char name[30];
	int grade;
};

Student stu[100];

int main()
{
	int n;
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		cin>>stu[i].name;
		cin>>stu[i].grade;
	}
	
	for (int i=0;i<n;i++)
	{
		cout<<stu[i].name<<" ";
		cout<<stu[i].grade<<endl;
	}
	return 0;
}