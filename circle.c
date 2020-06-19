//circlular linked list creation # clllist.c # //
#include<stdio.h>
// #include <sys/conio.h>
// #include <sys/alloc.h>
#include <sys/malloc.h>

struct cllist{
  int info;
  struct cllist *next;
};
typedef struct cllist node;
node* makenode(int);
node* insertbeg(node*);
void insertmid(node*);
void insertend(node*);
void disp(node*);
main()
{
node *head,*p, *z;
int x; char c='y';
clrscr();
printf("\nEnter the number");
scanf("%d", &x);
head=makenode(x);
p=head;
printf("\nDo you want to continue");
fflush(stdin);
scanf("%c", &c);
while(c!='n')
{
printf("\n\nEnter the number");
scanf("%d", &x);
z=makenode(x);
p->next=z;
p=z;
printf("\n\nDo you want to continue");
fflush(stdin);
scanf("%c", &c);
}
p->next=head;
printf("\n\nYour inserted elements are :");
disp(head);
head=insertbeg(head);
printf("\n\nAfter beg insertion");
disp(head);
insertmid(head);
printf("\n\nAfter insert mid");
disp(head);
insertend(head);
printf("\n\nAfter insert end");
disp(head);
getch();
return 0;
}
node* makenode(int x)
{node *z;
z=(node*) malloc(sizeof(node));
z->info=x;
z->next=NULL;
return(z);
}
node* insertbeg(node *head)
{
node *p, *q;
int x;
printf("\nEnter number to insert");
scanf("%d", &x);
p=makenode(x);
for(q=head; q->next!=head; q=q->next);
p->next=head;
q->next=p;
return (p);
}
void insertmid(node *head)
{
node *p, *q;
int x, y;
printf("\nEnter the previous number");
scanf("%d", &x);
for (p=head; p->info!=x; p=p->next);
printf("\nEnter the new information for  middle");
scanf("%d", &y);
q=makenode(y);
q->next=p->next;
p->next=q;
}
void insertend(node *head)
{
node *p, *q;
int x;
for (p=head; p->next!=head; p=p->next);
printf("\nEnter the new value to insert at end");
scanf("%d", &x);
q=makenode(x);
p->next=q;
q->next=head;
}
void disp(node *head)
{
node *p;
p=head;
//clrscr();
printf("\n\n");
while(p->next!=head)
{printf("\t%d", p->info);
p=p->next;
}
printf("\t%d", p->info);
}
//end of program//