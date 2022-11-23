#include <stdio.h>
void main() {
  
  printf("RA2211042010037\n");
  int a, b, c, d, e;
  printf("Enter marks for 5 subjects : ");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  float s = a + b + c + d + e, avg = s/5.0;
  printf("total marks : %f\n", s);
  printf("average of marks : %f\n",avg);
  
}
