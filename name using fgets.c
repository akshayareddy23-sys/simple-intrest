# include<stdio.h>
int main(){
   char name[9];
   printf("enter your name:");
   fgets(name,9,stdin);
   printf("your name is:%s",name);
   return 0;
}
