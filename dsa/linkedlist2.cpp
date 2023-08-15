#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
     
    //constructor
    node(int data){
        this->data=data;
        this->next=0;
    }
};
void insertathead(node* &head,int d){
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}
 
 void printhead(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
 }



int main()
{ 
    //creaated a new node
    node*node1=new node(10);
    //headed pionted to new node
    node*head=node1;
    insertathead(head,12);
   // printhead(head);
    insertathead(head,15);
    printhead(head);
    
    return 0;
}
