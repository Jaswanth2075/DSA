#include<stdio.h>
#include<stdlib.h>
struct node
{
  int val;
  struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *createnode(int v)
{
  struct node *newn;
  newn=(struct node*)malloc(sizeof(struct node));
  newn->val=v;
  newn->next=NULL;
  return newn;
}
void enq(int ele)
{
  struct node *newn;
  newn=createnode(ele);
  if(front==NULL)
  {
    front=newn;
    rear=newn;
    return ;
  }
  rear->next=newn;
  rear=newn;
}
int deq()
{
  struct node *temp=front;
  front=front->next;
  free(temp);
  return temp->val;
}
void display()
{
  struct node *temp=front;
  while(temp!=rear)
  {
    printf("%d->",temp->val);
    temp=temp->next;
  }
  printf("%d->",temp->val);
}
int main()
{
  enq(10);
  enq(11);
  deq();
  display();
}
