// Find the even or odd number without using '/' operator
#include<stdio.h>
int main()
{  
    int num,half;
    printf("Enter number:");
    scanf("%d",&num);
    half=num/2;

    if (num==half*2)
      printf("Given number is Even number");
    else
        printf("Given number is odd number");
    
    return 0;
}