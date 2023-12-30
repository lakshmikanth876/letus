#include<stdio.h>
int main()
{
    char dm;
    printf("enter the input from the keyboard");
    scanf("%c",&dm);
    if(dm<=90 && dm >= 65)
    {
        printf("%c the entered input  is capital word",dm);
    }
    else if(dm>=97 && dm<=122)
    {
        printf("%c the entered input is a small word",dm);
    }
    else if(dm>=48 && dm<=57)
    {
        printf("%c the entered input is a number ",dm);
    }
    
}