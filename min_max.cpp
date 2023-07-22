/*Problem Statement

You need to take a singly linked list of integer value as input and print the maximum and minimum value of the singly linked list.

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output the maximum value then the minimum value.
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
void input(node * &head,node* &tail,int valu){
    node* newnode=new node(valu);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int large( class node * head){
    int max=INT_MIN;
    node * tmp=head;
    while(head!=NULL){
        if(max<head->head){
            max=head->head;
        }
        head=head->next;
    }
    return max;
}
int minimum(class node* head){
    int min=INT_MAX;
    node * tmp=head;
    while(tmp!=NULL){
        if(min>tmp->head){
            min=tmp->head;
        }
        tmp=tmp->next;
    }
    return min;
}
int main(){
   node * head=NULL;
    node* tail=NULL;
   int valu;
    while(true){  
        cin>>valu;
        if(valu==-1)
        break;
         input(head,tail,valu);
    }
    cout<<large(head)<<" "<<minimum(head);
    return 0;
}