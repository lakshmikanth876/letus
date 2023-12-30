#include<stdio.h>
int main()
{
    int num,rem, rev;
    printf("enter the five digit number");
    scanf("%d", &num);
    while(num !=0)
    {
        rem = num%10;
        int rev = rev*10 + rem;
        num = num/10; 
    }
    printf("%d", rev);
    }