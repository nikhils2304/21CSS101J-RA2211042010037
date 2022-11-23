#include <stdio.h>
int main () {
  printf("RA2211042010037\n");
  int marks[5];
  int sum = 0, avg = 0, i;
  printf("Enter marks of subjects : \n");
  for (i=0;i<5;++i) {
    scanf("%d",&marks[i]);
    sum=sum+marks[i];
    )
      printf("Sum is =%d\n",sum);
    avg=sum/5;
    printf("The average marks is %d\n",avg);
}
