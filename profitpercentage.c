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
        float pp=p/b*100.0;
        printf("profit percentage=%f",pp);
    }
    else
    {
        int l=b-a;
        float lp=l/b*100.0;
        printf("loss percentage=%f",lp);
    }
}
