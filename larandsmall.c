#include <stdio.h>
void main() {
  printf("RA2211042010037\n");
  int x,y;
  printf("Enter two numbers : ");
  scanf("%d %d", &x, &y);
  if(x>y) {
    printf("The largest number : %d\nThe smallest number : %d\n", x, y);
  }
  else {
      printf("The largest number : %d\nThe smallest number : %d\n", y, x);
    } 
}
