# include<stdio.h>
int main(){
    float length,width,area;
    printf("enter length of rectanglr:");
    scanf("%f",&length);
    printf("enter the width of rectanglr");
    scanf("%f",&width);
    printf("enter the area");
    scanf("%f",&area);
    area=length*width;
    printf("area of rectangle:%.2f\n",area);
    return 0;
}
