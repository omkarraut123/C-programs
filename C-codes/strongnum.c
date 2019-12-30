/// WAP for find given number is strong number or not ex: 1!+4!+5!=145 is strong number
#include<stdio.h>
int main()
{
   int num,copy,rem;
   int result=1,sum=0;
    printf("Enter number :");
    scanf("%d",&num);
    copy=num;
    while (num!=0)
    {
        rem=num%10;
       while (rem!=0)
       {
         result*=rem;
         rem--;
       }
     sum+=result;
     result=1;
     num/=10;
    }
    if (sum==copy)
    {
      printf("strong number");
    }
    else
    {
        printf("not a strong number");
    }
    
    return 0;
}