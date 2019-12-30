#include<stdio.h>
int main(){
    int copy,num,rem=0,result=0;
    printf("Enter number for reverse:");
    scanf("%d",&num);
    copy=num;
    while (num!=0)
    {
        rem=num%10;
        result=result*10+rem;
        num/=10;
        /* code */
    }
    printf("Reverse number is:%d",result);
    if (copy==result)
    {
    printf("\nGiven number is palindrome\n");
    }
    else
    {
        printf("\nGiven number is not a palindrome");
    }
    
    
    return 0;
}