# include<stdio.h>
int main(){
int num,result=0,remainder,original;
printf("enter the number int");
scanf("%d",&num);
original = num;
while(num!=0){
    remainder=num%10;
    result+=  remainder*remainder*remainder;
    num/=10;
}
if (result==original){
    printf("the number is  anstrome");
}
else{
    printf("the number is not  anstrome");
}
}

out put
enter the number int153
the number is  anstrome

=== Code Execution Successful ===
