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
void input(node * &head,node *&tail,int valu){
    node *newnode = new node(valu);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_or(node * head){
     node* tepm=head;
   while(tepm !=NULL){
    cout<<tepm->head<<" ";
    tepm=tepm->next;
   }
}
void print (node* valu){
    if(valu==NULL) return;
    
    print(valu->next);
    cout<<valu->head<<" ";

}

int main(){
    node * head=NULL;
    node * tail=NULL;
    int valu;
    while (true)
    {  
        cin>>valu;
        if(valu==-1)
        break;
        input(head,tail,valu);
        
    }
      print(head);
   cout<<endl;
    print_or(head);
    return 0;
}