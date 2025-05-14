# include<stdio.h>
int main(){
    int x,y;
    printf("enter the two values");
    scanf("%d%d",&x,&y);
    printf("sum=%d\n",x+y);
    printf("diffrence=%d\n",x-y);
    printf("product=%d\n",x*y);
    if(y!=0)
    printf("quotient=%d\n",x/y);
    else
    printf("division by 0 is not possible\n");
    return 0;
}
