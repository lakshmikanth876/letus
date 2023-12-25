#include<stdio.h>
int main()
{
    float a,b;
    printf("enter the temperature in farenheat : ");
    scanf("%f",&a);
    b = (a-32)*5/9;
    printf("the temperature in celciusis %f: ",b);
}
// farenheat is 89 then later it converted into 31.66666