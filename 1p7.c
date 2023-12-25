#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    float g;
    printf("enter the marks in different subjects :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f = a+b+c+d+e;
    printf("the total marks of the student is %d", f);
    g = f/5;
    printf("the percentage obtained by the student is %f:",g);
}
//it takes input from the user and sums it up to find the aggregate and shows the percentage of the specific user