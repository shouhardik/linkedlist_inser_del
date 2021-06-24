#include <iostream>
using namespace std;
struct node{
       int data;
       struct node *next;
   };
struct node *head;
void print(node *head){
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->"<<' ';
        temp=temp->next;
    }cout<<endl;
}
void delete_middle(node *head){int data;
    struct node *t=head,*prev;
    cout<<"Enter the no to be deleted"<<endl;
           struct node *new_nde=(struct node*)malloc(sizeof(node));

    cin>>new_nde->data;
    data=new_nde->data;
    if(head==NULL){
        cout<<"List empty"<<endl;
    }else{
    while(t->data!=data){
        prev=t;
        t=t->next;
    }
    prev->next=t->next;
    }
    //delete(t);
    print(head);
}
int main() {
   int n,i;
   cout<<"Value for n"<<endl;
   cin>>n;
    cout<<"Enter the no"<<endl;
   while(n--){
       struct node *new_node=(struct node*)malloc(sizeof(node));
      
       cin>>new_node->data;
       if(head==NULL){
           head=new_node;
       }else{
           struct node *temp=head;
           struct node *prev;
           while(temp->next!=NULL){
               prev=temp;
               temp=temp->next;
           }
           temp->next=new_node;
         // prev->next=NULL;
       }
   }
   print(head);
   delete_middle(head);
    return 0;
}
