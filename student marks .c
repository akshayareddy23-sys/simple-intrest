#include <stdio.h>
struct student{
    char name[100];
    int rollno;
    float marks;
};
int main(){
    struct student s;
    printf("enter name:");
    scanf("%s",&s.name);
    printf("enter rollno:");
    scanf("%d",&s.rollno);
    printf("enter marks scored in exam out of 625:");
    scanf("%f",&s.marks);
    printf("=================================\n");
    scanf("name:%s\nrollno:%d\nmarks scored:%f\n",s.name,s.rollno,s.marks);
    }
