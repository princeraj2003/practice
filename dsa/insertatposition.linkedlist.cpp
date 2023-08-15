#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    
    node(int data){
        this->data=data;
        this->next=0;
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
void insertatposition(node*&head,int pos,int d){
    node*temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    node*nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

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
     insertatposition(head,2,22);
    print(head);
}