#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    //sum of two sides are greater than 3rd or largest side 
    if(a+b>c || b+c>a || a+c>b)
    {
        printf("than it is a valid triangle ");
    }
    else{
        printf("it is not a valid triangle ");
    }
}