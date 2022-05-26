#include <stdio.h>
#include <string.h>

class Student{ //大寫學生
public: //可以在廚了main函式外使用
    char name[30];
    int grade;
};

Student student[100]; //大寫學生中有100個學生

int main()
{
    FILE * fin = fopen("input.txt", "r");
    int n;
    fscanf(fin,"%d",&n);
    
    for (int i=0;i<n;i++)
    {
        fscanf(fin, "%s %d",student[i].name,&student[i].grade);
                            //學生的名字        //學生的分數
    }
    
    for (int k=0;k<n-1;k++)
    {
        for(int i=0;i<n-1;i++)
        {
            if (student[i].grade<student[i+1].grade)
            {
                Student temp=student[i];
                student[i]=student[i+1];
                student[i+1]=temp;
            }
        }
    }

    for (int i=0;i<n;i++)
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
