#include<stdio.h>
#include<math.h>
int main()
{
    float t,v,wcf;
    printf("enter the values of t and v");
    scanf("%d %d");
    wcf = 35.74+0.6215*t+(0.4275*t - 35.75)*pow(v,0.16);
    printf("the final value for the %d",wcf);
}