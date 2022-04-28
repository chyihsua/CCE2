#include <stdio.h>
#include <vector> //C++
#include <algorithm> //C++>>std::sort直接排序

class Student{ //大寫學生（形狀）
public: //可以在廚了main函式外使用
    char name[30];
    int grade;
};

bool compare(Student a,Student b)
{
    return(a.grade>b.grade);
}

int main()
{
    FILE * fin = fopen("input.txt", "r");
    int n;
    fscanf(fin,"%d",&n);
    
    std::vector<Student> student(20);//C++>>準備大小為20的student
    for (int i=0;i<n;i++)
    {
        fscanf(fin, "%s %d",student[i].name,&student[i].grade);
    }
    
    std::sort(student.begin(),student.end(),compare);
                //開始位置      //結束位置

    for (int i=0;i<n;i++)
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
