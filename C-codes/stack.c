#include<stdio.h>
#define max 10

struct stack
{
    int st[max];
    int top;
    
};
typedef struct stack STACK;
STACK s;
void push();
int pop();
void disp();

int main(){
 int choice;
 s.top=-1;
 do{
   printf("\nEnter your choice");
   printf("\n1.push\n2.pop\n3.display stack\n4.exit");
   scanf("%d",&choice);
   switch (choice)
   {
   case 1 : 
            push();
       break;
   case 2:
          printf("\npop element is %d ",pop());
          break;
   case 3:
         disp();
         break;       
   default:
       break;
   } 
      
 }while(choice!=4);

    return 0;
}
void push(){
    int value;
    if (s.top==max-1)
    {
       printf("\nstack is full");
    }else
    {
        printf("\nEnter value to push");
        scanf("%d",&value);
        s.top=s.top+1;
        s.st[s.top]=value;
    }
}
int pop()
{
    if (s.top==-1)
    {
          printf("\nstack is empty");
    }
    else
    {
        int temp=s.st[s.top];
        s.top=s.top-1;
        return temp;
    }  
}
void disp()
{
    if (s.top==-1)
           printf("\nstack is empty");
    else
    {
          printf("\n Elements in stack are ");
        for (int i = s.top; i>=0; i--)
        {
          
            printf("\t%d",s.st[i]);
        }
        
    }
    
}