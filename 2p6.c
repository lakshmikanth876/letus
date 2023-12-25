#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2,d;
    printf("enter the latitudes l1,l2");
    scanf("%f %f", &l1,&l2);
    printf("enter the longitudes g1,g2");
    scanf("%f %f", &g1,&g2);
    d = 3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("%d",d);
}