#include <stdio.>
int main() {
  printf("RA2211042010037\n");
  char string1[80], string2[80];
  int i;
  printf("Enter a string\n");
  printf("?");
  scanf("%s", string2);
  for( i=0; string2[i] != '\0'; i++)
    string1[i] = string2[i];
  string1[i] = '\0';
  printf("\n");
  printf("%s\n", string1);
  printf("Number of characters = %d\n", i);
}
