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
void fun(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->head<<" ";
        temp=temp->next;
    }
}
void insart(node* head,int poss,int valu){
    node*newnode=new node(valu);
        node*temp=head;
        for(int i=1;i<=poss-1;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;

        cout<<endl;
    }
    

int main(){
  node*head= new node(10);
  node*b= new node(20);
  node*c= new node(30);
  node*d= new node(40);
  head->next=b;
  b->next=c;
  c->next=d;
  fun(head);
  //int valu,poss; cin>>valu>>poss;
  insart(head,3,100);
          cout<<endl<<endl;
        fun(head);

return 0;
}