#include<stdio.h>
void main() {
  
  void pop(int s[], int n, int *top);
  void push(int s[],int n,int *top); 

  int top=-1;
  int *t=&top;
  int s[100], i,choice,n;

  printf("Enter size of stack: ");
  scanf("%d",&n);

  do {
    printf("Enter 1 for push.\nEnter 2 for pop\nAny other number to stop.\n");
    scanf("%d",&choice);
    
    switch(choice) {
  
    case 1: push(s,n,t);
      break;
    case 2: pop(s,n,t);
      break;
    default: break;
    }
  }while((choice==1)||(choice==2));
}//main

void push(int s[], int n, int *top) {
  int no,i;
  if(*top==(n-1))
    printf("ERROR: Stack Overflow\n");
  else {
    printf("Enter number to be entered: ");
    scanf("%d",&no);
    *top=*top+1;
    s[(*top)]=no;
    printf("STACK:");
    for(i=0;i<=*top;i++)
      printf("%d ",s[(i)]);
    printf("\n");
  }
}//push

void pop(int s[], int n, int *top) {
  int i;
  if(*top==-1)
    printf("ERROR: Stack Underflow\n");
  else {
    (*top)=(*top)-1;
    printf("STACK: ");
    for(i=0;i<=*top;i++)
      printf("%d ",s[i]);
    printf("\n");
  }
}
