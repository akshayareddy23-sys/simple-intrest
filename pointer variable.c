# include<stdio.h>
int main()
{
    int x=17;
    int *ptr=&x;
    printf("before a is:%d\n",x);
    *ptr=*ptr+10;
    printf("after a is:%d\n",*ptr);
    return 0;
}

out put
before a is:17
after a is:27


=== Code Execution Successful ===
