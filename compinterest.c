#include <stdio.h>
#include <math.h>
main()
{
    printf("RA2211042010037\n");
    float pa,t;
    float r,ci,si;
    printf("enter a principal,rate,time\n");
    scanf("%f %f %f",&pa,&r,&t);
    ci=(pa*(pow((1+r/(100))),t)-pa;
    printf("compound interest=%f",ci);
}
