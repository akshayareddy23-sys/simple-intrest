# include <stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("enter 10 elements to array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("summ of all array elements is:%",sum);
    return 0;
}
enter 10 elements to array:2 3 4 5 6 7 8 9 10
sum of all array element is 54
