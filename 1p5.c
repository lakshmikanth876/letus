#include<stdio.h>
int main()
{
    int a;
    int d; //d is the total salary
    float b,c;// allowances are 40% and 20%
    printf("enter the salary of ramesh : ");
    scanf("%d",&a);
    b = a*40/100;
    c = a*20/100;
    d = a+b+c;
    printf("the total salary is : %d",d);
}
// the salary is 35000 allowences are 14000 and 7000 so the total salary is 56000