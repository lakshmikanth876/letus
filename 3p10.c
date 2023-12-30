#include<stdio.h>
#include<stdlib.h>
int main()
{
  int l,b;
  float area,per;
  printf("enter the length and breadth:");
  scanf("%d%d",&l,&b);
  area = l*b;
  per = 2*(l+b);
  if(area<per)
  {
    printf("area is greater ");
  }  
  else{
    printf("per is greater");
  }
}