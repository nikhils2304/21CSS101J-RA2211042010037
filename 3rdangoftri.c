#include <stdio.h>
int main()  
{  
    int ang1, ang2, ang3; 
  ang1 = 50, ang2 = 70;

    printf("RA2211042010037\n");
    printf("Input two angles of triangle  : ");  
    scanf("%d, %d", &ang1, &ang2);  

     ang3 = 180 - (ang1 + ang2); 

    printf("Third angle of the triangle :  %d\n", ang3);  

    return 0;  
}  
