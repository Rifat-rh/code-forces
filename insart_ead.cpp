#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int head;
    node* next;
    node(int valu){
        this->head=valu;
        this->next=NULL;
    }
};
void insert_head(node* &head,int valu){
    node * newnode=new node(valu);
    node * temp=head;
    if(head==NULL){
        head=newnode;
    }
    else {
        newnode->next=head;
        head=newnode;
    }
}
void print(node * head){
     node* tepm=head;
   while(tepm !=NULL){
    cout<<tepm->head<<" ";
    tepm=tepm->next;
   }
}
int main(){
   node* head= new node(10);
   node* a= new node(10);
   node* b= new node(10);
   node* c= new node(10);
   head->next=a;
   a->next=b;
   b->next=c;
  print(head);
  int valu; cin>>valu;
  insert_head(head,valu);
  print(head);
    return 0;
}