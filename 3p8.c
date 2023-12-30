#include<stdio.h>
int main()
{
    int a,b,c;
    int sum =0;
    printf("enter the angles of the triangle ");
    scanf("%d%d%d", &a,&b,&c);
    sum = a+b+c;
    if(sum == 180)
    {
        printf("it is an triangle");
    }
    else{
        printf("it is not a triangle");
    }
}