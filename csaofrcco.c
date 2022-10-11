#include <stdio.h>

int main()
{
  printf("RA2211042010037\n");
  int radius, length, CSA;
  printf("Radius: ");
  scanf("%d", &radius);
  printf("Length: ");
  scanf("%d", &length);
  
  CSA = 3.14*radius*length;
  printf("%d", CSA);
}
