#include<stdio.h>
int main()
{
    int cp,sp;
    float profit;
    printf("enter the valus of cp and sp:\n");
    scanf("%d%d", &cp,&sp);
    if(cp > sp)
    {
        printf("you are in loss\n");
    }
    else
    {
        printf("you are in profit\n");
        profit = sp - cp;
        printf("the total profit that you got is %f\n", profit);
    }
}