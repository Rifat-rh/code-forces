
/*
Problem Statement

You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain the values of the first singly linked list, and will terminate with -1.
Second line will contain the values of the second singly linked list, and will terminate with -1.
Constraints

1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" or "NO".
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
void same(node *head,node * head1,int count,int count2){
    node * temp=head;
     node * temp1=head1;
     bool flag=0;
     if(count==count2){
        while (count--)
        {
            if(temp->head!=temp1->head){
                flag=1;
                break;
            }
            else flag=0;
            temp1=temp1->next;
            temp=temp->next;
            
        }
        if(flag==0)cout<<"YES";
        else cout<<"NO";        
     }
     else if (count2>count || count>count2){
        cout<<"NO";
     }
}
int main(){
   node * head=NULL;
    node* tail=NULL;
   int valu,count=0;
    while(true){  
        cin>>valu;
        if(valu==-1)
        break;
         input(head,tail,valu);
         count++;
    } 
    int valu2;
    int count2=0;
    node *head1=NULL;
    node *tail1=NULL;
     while(true){  
        cin>>valu2;
        if(valu2==-1)
        break;
         input(head1,tail1,valu2);
         count2++;
    }
    same(head,head1,count2,count);



    return 0;
}