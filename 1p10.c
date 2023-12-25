#include<stdio.h>
int main()
{
    int i;
    int l = 1189;
    int b = 841;
    for(i=0;i<=8;i++)
    {
        if(l>b)
        {
            l=l/2;
        }
        else 
        {
            b=b/2;
        }
        printf("printing l,b %d %d\n",l,b);
    }
}
//it divides the max page size into half and repeats upto 8 times