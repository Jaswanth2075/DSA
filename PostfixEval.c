#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int i,a[20],top=-1;
void push(int ele)
{
  ++top;
  a[top]=ele;
}
int pop()
{
  int x=a[top];
  --top;
  return x;
}
int operation(int a,int b,char c)
{
  switch(c)
  {

    case '^':
      return pow(a,b);
        break;
    case '*':
      return a*b;
      break;
    case '/':
      return a/b;
      break;
    case '+':
      return a+b;
      break;
    case '-':
      return a-b;
      break;
  }

}
int main()
{
  int post[100];
  char c,op1,op2;
  int result;
  printf("enter a postfix expression");
  scanf("%s",post);
  while(post[i]!='\0')
  {
    c=post[i];
    if(isdigit(c))
      push(c-'0');
    else
    {
      op2=pop();
      op1=pop();
      result=operation(op1,op2,c);
      push(result);
    }
    i++;
  }
  printf("the result of the expression is %d",a[top]);
}
