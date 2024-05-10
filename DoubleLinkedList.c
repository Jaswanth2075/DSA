#include<stdio.h>
#include<stdlib.h>
struct dllnode
{
  int val;
  struct dllnode *next;
  struct dllnode *prev;
};
struct dllnode *createnode(int v)
{
  struct dllnode *newn;
  newn=(struct dllnode*)malloc(sizeof(struct dllnode));
  newn->val=v;
  newn->next=NULL;
  newn->prev=NULL;
  return newn;
}
struct dllnode *createlist(int n)
{
  int v;
  struct dllnode *newn,*h=NULL,*tail=NULL;
  for(int i=0;i<n;i++)
  {
    scanf("%d",&v);
    newn=createnode(v);
    if(h==NULL)
    {
      h=newn;
      tail=newn;
    }
    else
    {
      newn->prev=tail;
      tail->next=newn;
      newn->next=NULL;
      tail=newn;


    }
  }
  return h;
}
void display(struct dllnode *h)
{
  while(h!=NULL)
  {
    printf("%d ->",h->val);
    h=h->next;
  }
}
int main()
{
//	struct dllnode *h;
    struct dllnode *m=NULL;
  int n;
  printf("enter number of elements");
  scanf("%d",&n);
  m=createlist(n);
  display(m);
}
