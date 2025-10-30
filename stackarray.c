#include<stdio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(int item)
{
if(top==MAX-1)
{
printf("\n Stack Overflow");
return;
}
stack[++top]=item;
printf("\n%d Pushed to stack.",item);
}
void pop()
{
if(top==-1)
{
printf("\n Stack Underflow");
return;}
printf("\n%d popped from stack.",stack[top--]);
}
void peek()
{
if(top==-1)
{
printf("\n Stack is empty");
return;
}
printf("\nTop element is %d",stack[top]);
}
void display()
{
if(top==-1)
{
printf("\n Stack is empty");
return;
}
printf("\nStack elements are:");
for(int i=top;i>=0;i--)
{
printf("%d ",stack[i]);
}}
int main()
{
int choice,value;
while(1){
printf("\n\nStack operations Menu:");
printf("\n1. Push");
printf("\n2. Pop");
printf("\n3. Peek");
printf("\n4. Display");
printf("\n5. Exit");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\nEnter value to push:");
scanf("%d",&value);
push(value);
break;
case 2: pop();
break;
case 3: peek();
break;
case 4: display();
break;
case 5:printf("\nExiting program.");
return 0;
default : printf("\nInvalid choice!");
}}
return 0;
}


