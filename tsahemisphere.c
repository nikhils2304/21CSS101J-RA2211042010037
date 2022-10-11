#include <stdio.h>

int main()
{
  printf("RA2211042010037\n");
  float radius, TSA;
  printf("Radius: ");
  scanf("%f", &radius);
  
  TSA = 3*3.14*radius*radius;
  printf("TSA=%f", TSA);
}
