#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int a[20],top=-1;
void push(int ele)
{
  ++top;
  a[top]=ele;
}
int pop()
{
  int n=a[top];
  --top;
  return n;
}
int main()
{
  int i;
  int post[100];
  char c;
  char x;
  int result;
  printf("enter an expression");
  scanf("%s",&post);
  while(post[i]!='\0')
  {
    x=post[i];
    if(x=='(')
    {
      push(x);
    }
    else if(x==')')
    {
      while(a[top]==')')
      {
        pop();
      }
      pop();
    }
    i++;
  }
  c=pop();
  if(c==')'|| c=='(')
  {
    printf("not a balanced paranthesis");

  }
  else
  {
    printf("balanced paranthesis");
  }
}
