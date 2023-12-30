#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float ab,bc;
    printf("enter the point values");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    ab = (y2-y1)/(x2-x1);
    bc = (y3-y2)/(x3-x2);
    if(ab==bc)
    {
        printf("they are in straight line ");
    }
    else{
        printf("they are not in straight line");
    }
}