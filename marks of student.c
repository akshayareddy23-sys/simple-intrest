# include <stdio.h>
int main()
{
    int i,j,k=1,mark[3][3];
    printf("enter the marks of students:");
    for (i=0;i<3;i++)
      for(j=0;j<3;j++)
          scanf("%d",&mark[i][j]);
      for(i=0;i<3;i++)
      {
        printf("\nmarks of student %d is:",k);
        for(j=0;j<3;j++)
            printf("%4d",mark[i][j]);
        k=k+1;
    }
    return 0;
}
