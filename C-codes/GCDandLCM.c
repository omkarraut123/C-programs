#include<stdio.h>
int main()
{
     int a,b,x,y,r;
     printf("Enter the numbers a and b : ");
     scanf("%d%d",&a,&b);
     x=a;
     y=b;

     while (b!=0)
     {
         r=a%b;
         a=b;
         b=r;
     }
     int lcm=(x*y)/a;
     printf("\nGCD of %d and %d is %d",x,y,a);
      printf("\nLCM of %d and %d is %d ",x,y,lcm);
     

    return 0;
}