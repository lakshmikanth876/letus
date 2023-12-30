#include<stdio.h>
int main()
{
    int h,c,t;
    printf("enter the values of h c and t");
    scanf("%d%d%d",&h,&c,&t);
    if(h>=50 && c<=0.7 && t>=5600)
    {
        printf("the item belongs to 10th grade");
    }
    else if(h>=50 && c<=0.7 || t>=5600)
    {
        printf("the item belongs to 9th grade");
    }
    else if(h>=50  && t>=5600 || c<=0.7)
    {
        printf("the item belongs to 8th grade");
    }
    else{
        printf("the quality is 5");
    }

}