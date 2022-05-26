#include <iostream>

class Student {
public:
	char name[30];
	int grade;
};

Student stu[100];

int main()
{
	int n;
	std::cin>>n;
	
	for (int i=0;i<n;i++)
	{
		std::cin>>stu[i].name;
		std::cin>>stu[i].grade;
	}
	
	for (int i=0;i<n;i++)
	{
		std::cout<<stu[i].name<<" ";
		std::cout<<stu[i].grade<<"\n";
	}
	return 0;
}