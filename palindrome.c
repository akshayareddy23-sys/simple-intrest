# include<stdio.h>
int main(){
int num,reversed=0,rem,original;
printf("enter the number int");
scanf("%d",&num);
original = num;
while(num!=0){
    rem=num%10;
    reversed=reversed*10+rem;
    num/=10;
}
if (reversed==original){
    printf("the number is  palinr");
}
else{
    printf("the number is not  palinr");
}
}
out/put
enter the number int232
the number is  palinr

=== Code Execution Successful ===
