#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%4==0 )
    {
        printf("the year you entered is new year");
    }
    else{
        printf("that is not a new year");
    }
}