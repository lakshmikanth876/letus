#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    printf("enter the sides of the triangles");
    scanf("%d %d %d", &a,&b,&c); 
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of the triangle is %f:", area);
}
//it prints the area of the triangle 
