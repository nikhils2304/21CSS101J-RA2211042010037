#include <stdio.h>
int main()
{
    printf("RA2211042010037\n");
    int alvqntoffood,messcnt,dividedqnt,remfood;
    scanf("%d",&alvqntoffood);
    scanf("%d",&messcnt);
    dividedqnt=alvqntoffood/messcnt;
    remfood=alvqntoffood%messcnt;
    printf("%d",dividedqnt);
    printf(" ");
    printf("%d",remfood);
    return 0;
}
