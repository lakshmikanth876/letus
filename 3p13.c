#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("enter the values of x and y");
    scanf("%d%d",&x,&y);
    if(x==0)
    {
        printf("point lies on the x axis ");
    }
        if(x==0 && y==0)
        {
            printf("the point lies on the origin");
        }
        if(y==0)
        {
            printf("the point lies on the y axis ");
        }
        if(x !=0 && y!=0)
        {
            printf("it stands in between the plane");
        }
    

}