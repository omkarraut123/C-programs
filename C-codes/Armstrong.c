#include<stdio.h>
#include<math.h>
int main()
{
   int num,copy,count=0,rem;
   int result=0;
   printf("Enter number :");
   scanf("%d",&num);
   copy=num;
   while (num!=0)
   {
     num=num/10;
     ++count;
   }
   num=copy;
   while (num!=0)
   {
       rem=num%10;
       result+=pow(rem,count);
       num/=10;
   }
   if (result==copy){
        printf("Given number is Armstrong");
   }
   else{
       printf("Not a armstrong number");
   }
    return 0;
}
