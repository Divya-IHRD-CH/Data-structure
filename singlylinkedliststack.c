#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
};
struct node*top=NULL;
void push()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nNo space available");
return;
}
newnode->link=NULL;
printf("\n Enter the element to insert\n");
scanf("%d",&newnode->data);
if(top==NULL)
{
top=newnode;}
else{
newnode->link=top;
top=newnode;
}
printf("\n %d Inserted successfully",newnode->data);
}
void pop()
{
struct node*temp=top;
if(top==NULL)
{
printf("\n%d is popped",temp->data);
top=temp->link;
free(temp);
}
}
void display()
{
struct node*temp=top;
if(top==NULL)
{
printf("\nNO ELEMENTS");
return;
}
printf("\nElements in stack are:\n");
while(temp!=NULL)
{
printf("%d ", temp->data);
temp=temp->link;}}
void peek()
{
struct node*temp=top;
if(top==NULL)
{printf("\nSTACK UNDERFLOW");
return;
}
printf("Top element id %d",temp->data);
}
void search()
{
struct node*temp=top;
int key, found=0;
if(top==NULL)
{
printf("\nSTACK UNDERFLOW\n");
return;
}
printf("\nEnter the element tosearch\n");
scanf("%d",&key);
while(temp!=NULL)
{if(temp->data==key)
{
printf("\n%d element founded\n",temp->data);
found=1;
}
temp=temp->link;
}
if(!found){
printf("\nElement not found");
}}
void main()
{
int choice;
do{
printf("\n******STACK******\n");
printf("1.Push()\n2.Pop()\n3.Peek()\n4.Display()\n5.Search()\n6.Exit");
printf("\nEnter the choice\n");
scanf("%d",&choice);
switch(choice){
case 1:push();
break;
case 2:pop();
break;
case 3:peek();
break;
case 4:display();
break;
case 5:search();
break;
case 6:printf("\nEXIT\n");
break;
default :printf("Enter a valid choice");
break;
}}
while(choice!=6);
}

