#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the distance between two cities :");
    scanf("%d",&a);
    // converting kms to meters 
    b = a*1000;
    c = a*3280;
    printf("the distance in meters %d is ",b);
    printf("the distance in feets %d is ",c);
    return(0);
}
// user gave input as 23 dist in meters is 23000 and dist in feets is 75440