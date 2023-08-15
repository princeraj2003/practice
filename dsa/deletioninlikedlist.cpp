#include<iostream>
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

    //destructor
    ~node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
     cout<<"memory is free"<<value<<endl;
    }
};
void insertattail(node*&tail,int d){
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
void deletenode(int position,node*&head){
//deting the first node
if(position==1){
    node*temp=head;
    temp=head->next;
    //memory free
    delete temp;
}
else{
    
    node*current=head;
    node*previous=NULL;
    int cnt=1;
    while(cnt<=position-1){
        previous=current;
        current=current->next;
        cnt++;
    }
    previous->next=current->next;
    current->next=NULL;
    delete current;
}
}
int main(){
    node*node1=new node(10);
    // cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;
    node*head=node1;
    node*tail=node1;
    print(head);
    insertattail(tail,12);
    print(head);
    insertattail(tail,15);
    print(head);
    deletenode(1,head);
    print(head);
}