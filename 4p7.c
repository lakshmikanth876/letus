#include<stdio.h>
int main()
{
 int n;
 printf("enter the weight of the boxer: ");
 scanf("%d",&n);
 if(n<115){
    printf("flyweight");
 }
 else if(n>115 && n<=121){
    printf("bantamweight");
 }
 else if(n>=122 && n<=153)
 {
    printf("featherweight");
 }
 else if(n>=154 && n<=189)
 {
    printf("middleweight");
 }
 else if(n>=190){
    printf("heavyweight");
 }
}

