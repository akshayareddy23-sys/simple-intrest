# include<stdio.h>
int n,size;
int evenarray(int arr[],int size)
{
    printf("even elements ofd array are:");
    for(int i=0;i<n;i++)
      if(arr[i]%2==0)
        printf("%d",arr[i]);
}
int main()
{
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array\n:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    evenarray(arr,n);
    return 0;
}

