#include<stdio.h>
int main()
{
    int fact=0,f1=1,f2=0,count=10;
    for(int i = 0; i < count; i++)
    {  
        fact=f2+f1;
        f1=f2;
        f2=fact;
        

        printf("\t%d",fact);

        
    }
    

    return 0;
}

