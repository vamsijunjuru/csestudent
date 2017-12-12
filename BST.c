#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *leftchild;
struct node *rightchild;
};
struct node *root=NULL,*parent,*current,*pnew;
 void insert(int);
void main(){
int x,ch,count;
while(1){
printf("enter your choice");
printf("1.insert");
scanf("%d",&ch);
switch(ch){
case 1:
 printf("enter the elements to insert");
 scanf("%d inserted",&x);
 insert(x);
 break;
 case 2:exit(0);
 }
 }
 }
 void insert(int x){
pnew=(struct node*)malloc(sizeof(struct node*));
pnew->data=x;
pnew->leftchild=NULL;
pnew->rightchild=NULL;
current=root;
parent=NULL;
while(1){
parent=current;
if(current->data < root->data){
current=current->leftchild;
}
if(current==NULL){
parent->leftchild=pnew;
return;
}
else{
current=current->rightchild;
}
}
}
  
 
 

 
