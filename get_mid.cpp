/*
Problem Statement

You need to take a singly linked list of integer value as input. Then you need to sort the linked list in descending order and print the middle element of it. If there are multiple values in the middle, print both.

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output the value/values of the middle element.
*/
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
void print(node* head, int count){
node* tmp= head;
if(count%2!=0){
for(int i=1;i<(count/2)+1;i++){
tmp=tmp->next;
}
cout<<tmp->head;
}
else{
for(int i=1;i<(count/2);i++){
tmp=tmp->next;
}
cout<<tmp->next->head<<" "<<tmp->head;
}
}


int main(){
     node * head=NULL;
    node * tail=NULL;
    int valu;
    int count=0;
    while (true)
    {  
        cin>>valu;
        if(valu==-1)
        break;
        input(head,tail,valu);
        count++;

        
    }
    for(node * i=head; i->next!=NULL;i=i->next){
        for(node *j=i->next;j!=NULL;j=j->next){
            if(i->head > j->head){
                swap(i->head,j->head);
            }
        }
    }
    print(head,count);
    return 0;
}