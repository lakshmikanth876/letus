#include<stdio.h>
int main()
{
    int a , b = 0;
    printf("enter the five digit number:\n");
    scanf("%d",&a);
    while(a!=0)
    {
        int n = a%10;
        b = b + n;
        a = a/10;
    }
    printf("\nThe Sum: %d",b);
    return 0;
}
// adding each digit of the 5 digit number 