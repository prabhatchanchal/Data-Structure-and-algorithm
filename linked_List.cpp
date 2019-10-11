#include<iostream>
using namespace std;
struct node{
    int data; 
    struct node * next;
}*head=NULL;
typedef struct node N;
void insert(int num){
     N *temp; 
     temp=(N *)malloc(sizeof(N*));
     temp->data=num;
     temp->next=NULL;  
     if(head==NULL)
       head=temp;
     else{
         N *t;
         t=head;
         while(t->next!=NULL)
            t=t->next;
         t->next=temp; 
         cout<<t->data<<" Num : "<<num<<endl;
     }
    }
void insert_at_begin(int num){
     N *temp; 
     temp=(N *)malloc(sizeof(N*));
     temp->data=num;
     if(head==NULL)
     temp=head;
     else
     temp->next=head;
     head=temp;
}
void insert_at_end(int num){
    insert(num);
}
int main(){ 
          
         insert(4);
         insert(7);
         insert(8);
         insert_at_begin(6);
         insert_at_end(7);
         N *t;
        
         t=head;
         cout<<"list\n";
         while(t!=NULL){
         cout<<t->data<<" --> ";
         t=t->next;
         }
         cout<<"NULL";
}
