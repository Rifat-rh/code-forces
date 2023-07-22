/*
Problem Statement

You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

If X is 0 that means you will insert the value V to the head of the linked list.
And if X is 1 then you will insert the value V to the tail of the linked list.
After that for each query you need to print the value of the head and tail of the list.
Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain Q.
Next Q lines will contain X and V.
Constraints

1 <= Q <= 10^6;
0 <= X <= 1;
0 <= V <= 10^9
Output Format

For each query ouput the value of head and tail of the linked list.
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_head(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void insert_tail(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print_list(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    while(q--){
        int x,val;
        cin>>x>>val;
        if(x){
            insert_tail(head,tail,val);
            cout<<head->val<<" "<<tail->val<<endl;
        } 
        else{
            insert_head(head,tail,val);
            cout<<head->val<<" "<<tail->val<<endl;
       
        } 
    }  
   return 0;
}