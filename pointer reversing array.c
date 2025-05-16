#include<stdio.h>
int main(){
    int arr[10]={9,7,8,5,6,3,4,2,1},n=4,i,temp,*start,*end;
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

out put
5879

=== Code Execution Successful ===
