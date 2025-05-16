#include <stdio.h>
struct student{
    char name[50];
    int marks;
};
int main(){
    struct student s[4];
    float total=0,avg;
    for(int i=0;i<4;i++){
    printf("enter name of the student:\n",i+1);
    scanf("%s",&s[i].name);
    printf("enter marks of %s:",s[i].name);
    scanf("%d",&s[i].marks);
    total+=s[i].marks;
}
avg=total/4;
printf("\n student details:\n");
for(int i=0;i<4;i++){
    printf("name:%s,marks:%d\n",s[i].name,s[i].marks);
}
printf("average marks=%.2f\n",avg);
}

