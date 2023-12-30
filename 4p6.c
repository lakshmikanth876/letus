#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter the sides of the triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("this is a equilateral triangle");
    }
    if(a==b && b != c || a != b && b==c)
    {
        printf("this is an isosceles triangle ");
    }
    if(sqrt(pow(a+b,2))==c || sqrt(pow(b+c,2))==a || sqrt(pow(a+c,2))==b)
    {
        printf("it is a right angle trianle ");
    }
    else {
        printf("scalene triangle ");
    }

}