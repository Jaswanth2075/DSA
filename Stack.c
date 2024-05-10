#include<stdio.h>
#include<stdlib.h>
struct node
{
  int val;
  struct node *next;
};
struct node *top=NULL;
struct node *createnode(int v)
{
  struct node *newn;
  newn=(struct node*)malloc(sizeof(struct node));
  newn->val=v;
  newn->next=NULL;
  return newn;
}
void push(int ele)
{
  struct node *newn;
  newn=createnode(ele);
  newn->next=top;
  top=newn;
}
int pop()
{
  if(top==NULL)
    printf("stack empty");
  else 
  {
    struct node *temp=top;
    top=top->next;
    printf("%d",temp->val);
    free(temp);
    return temp->val;
  }
}
void display()
{
  struct node *temp=top;
  while(temp!=NULL)
  {
    printf("%d->",temp->val);
    temp=temp->next;
  }
}
int main()
{
  push(10);
  push(20);
  push(30);
  int i=pop();
  printf("%ls -",&i);
  display();
}
