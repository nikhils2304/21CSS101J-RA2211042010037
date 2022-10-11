#include<stdio.h>
main()
{
  printf("RA2211042010037\n");
  float gp,da;
  int bp;
  printf("enter bp&da\n");
  scanf("%d %f",&bp,&da);
  gp=bp+(bp*da);
  printf("gross pay=%f",gp);
}
