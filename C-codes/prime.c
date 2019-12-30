#include<stdio.h>
int main()
{
   int num,flag=1;
   printf("Enter number : \n");
   scanf("%d",&num);
  for (int i = 2; i <num; i++)
  {
    if(num%i==0){
        flag=0;
        break;
    }else
    {
      continue;
    }
    
  }
  if (flag==1)
  {
    printf("Not a prime number");
  }
  else
  {
      printf("prime number");
  }
     return 0;
}