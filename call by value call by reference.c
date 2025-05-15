# include<stdio.h>
int main(){
    int a =7;
    int *b=&a;
    *b=*b+10;
    printf("a= %d\n",a);
    printf("akshi=%d\n",*b);
    return 0;
}
