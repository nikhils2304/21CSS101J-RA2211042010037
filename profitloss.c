#include <stdio.h>

int main()
{
    printf("RA2211042010037\n");
    printf("enter sales price and cost price");
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        int p=a-b;
        printf("profit=%d",p);
    }
    else
    {
        int l=b-a;
        printf("loss=%d",l);
    }
}
