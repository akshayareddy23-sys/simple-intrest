#include <stdio.h>
int main(){
    struct address{
        char city[50];
        int pin;
    };
    struct person{
        char name[50];
        struct address addr;
    };
    struct person p;
    printf("enter name:");
    scanf("%s",&p.name);
    printf("enter city:");
    scanf("%s",&p.addr.city);
    printf("enter pin:");
    scanf("%d",&p.addr.pin);
    printf("\nperson details:\n");
    printf("name:%s\npin:%d\ncity:%s\n",p.name,p.addr.pin,p.addr.city);
}

out put
enter name:akshaya
enter city:banglore
enter pin:572124

person details:
name:akshaya
pin:572124
city:banglore


=== Code Execution Successful ===
