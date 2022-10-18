#include<stdio.h>

int main()
{
  int height, base, area;
  printf("RA2211042010037\n");
  printf("Height of the triangle:");
  scanf("%d", &height);
  printf("Base of the triangle:");
  scanf("%d", &base);
  
  area = 0.5* height * base;
  printf("The area of your triangle is: %d", area);
  
}
