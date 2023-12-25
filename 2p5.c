#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    float dist,a,ep;
    printf("the co ordinate points are (x,y)");
    scanf("%f %f",&x,&y);
    dist = sqrt((x*x)+(y*y));
    printf("%f",dist);
    a = y/x;
    ep = atan(a);
    printf("print ep value:%f",ep);
}
// it prints the values of the questions 