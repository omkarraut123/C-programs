#include<stdio.h>
int factorial(int);
int main()
{
   int num, fact;
   printf("\nEnter any integer number:");
   scanf("%d",&num);
 
   //Calling our user defined function
   fact =factorial(num);
 
   //Displaying factorial of input number
   printf("\nfactorial of %d is: %d",num, fact);
   return 0;
}
int factorial(int num)
{
   //Factorial of 0 is 1 
   if(num==0)
      return(1);
 
   //Function calling itself: recursion
   return(num*factorial(num-1));
}