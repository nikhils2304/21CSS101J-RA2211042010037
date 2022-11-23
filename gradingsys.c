#include <stdio.h>  
int main()
    
{  
    printf("RA2211042010037\n");
    int marks;   
    printf("Enter your marks : ");  
    scanf("%d",&marks);   
    if(marks > 85 && marks <= 100)  
      printf("Grade A ");   
     
    else if (marks > 60 && marks <= 85)   
      printf("Grade B ");  
      
    else if (marks > 40 && marks <= 60)   
    printf("Grade C ");  
      
    else if (marks > 30 && marks <= 40)   
     printf("Grade D ");   
      
    else   
        printf("You have failed ");   
    
}  
