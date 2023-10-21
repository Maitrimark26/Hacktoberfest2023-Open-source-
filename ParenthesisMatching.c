#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
struct stack{
char stack1[MAXSIZE];
 int top;
}s;

void push(int x,struct stack *s)
{
   s-> top++;
    s->stack1[s->top]=x;
}
int pop(struct stack *s)
{
    int x=s->stack1[s->top];
   s-> top--;
    return x;
}
int check(char infix[],int n,struct stack *s)
{
    int i;
    for( i=0;i<n;i++)
    {
        if(infix[i]=='(')
        {
            push(infix[i],s);
        }
        if(infix[i]==')')
        {
            int m=pop(s);
        }
    }
    if(s->top==-1)
    {
        printf("paranthesis matched");
    }
    else
    {
         printf("paranthesis not matched");
    }
}

int main()
{ 
s.top=-1;
char infix[]="(((a+b))*a/b)";
int n=strlen(infix);
check(infix,n,&s);
    return 0;
}


