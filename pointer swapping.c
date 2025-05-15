# include<stdio.h>
# include<stdio.h>
int main()
{
    int a=5,b=10;
    int *p1=&a;
    int *p2=&b;
    printf("before swap\n");
    printf("a=%d,b=%d\n",a,b);
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after swap\n");
    printf("a=%d,b=%d",a,b);
    return 0;
}

 out put
before swap
a=5,b=10
after swap
a=10,b=5

=== Code Execution Su
