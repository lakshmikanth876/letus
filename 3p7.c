#include<stdio.h>
int main()
{
    int ra,sa,aa;
    printf("enter the ages of ram shyam and ajay");
    scanf("%d%d%d", &ra,&sa,&aa);
    if(ra<sa && ra<aa)
    {
        printf("ra is the youngest ");
        if(sa<ra && sa<aa)
        {
            printf("sa is the youngest ");
        }
    }   
    else 
    {
        printf("aa is the youngest ");
    }

}