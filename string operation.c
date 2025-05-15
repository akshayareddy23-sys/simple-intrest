# include<stdio.h>
# include<string.h>
int main(){
    char name[10];
    printf("enter the name");
    scanf("%s",&name);
    printf("%s\n",name);
    int length=strlen(name);
    printf("%d\n",length);
    strcpy(name,"akshi");
    printf("%\n",name);
    int cmp=strcmp("bo","boo");
    printf("%d\n",cmp);
    strcat(name,"coder");
    printf("%s\n",name);
}

out put
enter the nameakshi
akshi
5
%
-1
akshicoder


=== Code Execution Successful ===
