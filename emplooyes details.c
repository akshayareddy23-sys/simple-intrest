#include<stdio.h>
struct employee{
    int id;
    char name[40];
    float salary;
};
int main(){
    struct employee employees[3];
    printf("enter information for 4 employees:\n");
    for(int i=0;i<3;i++){
        printf("\nemployee %d:\n",i+1);
        printf("ID:");
        scanf("%d",&employees[i].id);
        printf("name:");
        scanf("%[^\n]",&employees[i].name);
        printf("salary:");
        scanf("%f",&employees[i].salary);
    }
}

out put
enter information for 4 employees:

employee 1:
ID:56
name:salary:anu 34000

employee 2:
ID:name:salary:34 rami 45000

employee 3:
ID:name:salary:67


=== Code Execution Successful ===
