#include<stdio.h>
int main()
{
    int a ,b ,c ;
    int rarea,rpere;
    float carea;
    //to find area and peremeter of the rectangle
    printf("enter th elength and breadth of the rectyangle :");
    scanf("%d %d ", &a,&b);
    rarea =  a*b;
    rpere =  2*(a+b);
    printf("rarea & rpere is %d %d",rarea,rpere);
    printf("enter the value of radius :");
    scanf("%d",&c);
    carea = 3.14*c ;
    printf("the area of circle is %f",carea);
}
// it prints the area peremeter of a circle and area and pereneter of a rectange