//  target ti reverse linked list 
#include "bits/stdc++.h"
using namespace std;

// node structure
class node{
public:
int data;
node* next;
//constructor
node(int x)
{
    data = x;
    next = NULL;
}
};
// insert at the end of the  list
void insertAtEnd(node* &head, int x)
{
    node* n = new node(x);
    node* temp = head;
    if(head == NULL)
    {
        head = n;
        return;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

//insert at the starting of the list
void insertAtstart(node* &head, int x){

node* n = new node(x);
if(head == NULL)
{
    head = n;
    return;
}
n->next = head;
head = n;
}
// function to reverse the list
/*void reverselist(node* &head)
{
    node* p1 = head;
    node* p2 = head->next;
    node* nxt;
    while(p1->next != NULL || p2!=NULL)
    {
        nxt = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = nxt;
    }
}*/
void reverselist(node* &head)
{
    node* prev = NULL;
    node* curr = head;
    node* nextp;

    while(curr!=NULL)
    {
        nextp = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextp;
    }
    
}


//function to display list
void displaylist(node* head)
{
    node* curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
int main()
{
    node* head = NULL;
    insertAtEnd(head, 22);
    insertAtEnd(head, 2);
    insertAtEnd(head, 43);
    insertAtEnd(head,7);
    insertAtEnd(head, 18);
    insertAtstart(head, 12);
    insertAtstart(head, 3);
    insertAtstart(head, 5);
    insertAtstart(head, 9);
    reverselist(head);
    displaylist(head);


}