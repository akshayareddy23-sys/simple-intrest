#include <stdio.h>
int main() {
    int marks;
    printf("enter student's marks:");
    scanf("%d",&marks);
    if (marks >= 40)
{
    printf("student passed with %d marks.\n",marks);
} else {
    printf("studenty failed with%d marks.\n",marks);
}
return 0;
}
