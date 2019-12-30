#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter number for factorial:");
    scanf("%d",&num);
    while (num!=0)
    {
        fact*=num;
        num--;
    }
      printf("Factorial of number is:%d",fact);
    
    return 0;
}