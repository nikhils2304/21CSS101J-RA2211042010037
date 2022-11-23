#include <stdio.h>
void main() {
  printf("RA2211042010037\n");
  int a, b;
  printf("Enter two integer values : ");
  scanf("%d %d", &a, &b);
  printf("Before swapping the values are a = %d, b = %d\n", a, b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After swapping the values are a = %d, b = %d\n", a, b);
}
