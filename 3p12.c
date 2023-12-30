#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    int r=4;
    float dist =0;
    printf("enter the values of x1,y1 ,x2,y2");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    if(dist>r)
    {
        printf("the point is outside the circle ");
        if(dist==r){
            printf("it lies on the  circle");
        }
    }
    else{
        printf("the point is in-side the circle ");
    }
}