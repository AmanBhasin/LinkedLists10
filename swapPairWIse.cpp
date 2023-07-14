// target is to swap the element of given ll pair wise
#include "bits/stdc++.h"
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
   
};

//operation to end at back of list
void insertEndi(node* &head, int x)
{
    node* nn = new node(x);
    if(head == NULL) head = nn;

    node* curr = head;
    while(curr->next != NULL)
    {
         curr = curr->next ;
    }curr->next = nn;

}
// funtion to display the ll
void display(node* head)
{
    node * curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<"->";
        curr = curr->next;
    }
}
//  make a funnction to swap pair wise
// simple algorithm --> just don't try  to play with links and just swap the nymber in them na..


void pairwiseSwap(node* head)
{
    node* temp = head;
    while(temp != NULL && temp->next != NULL)
    {
        swap(temp->data, temp->next->data);
        temp = temp->next->next;
    }
}

int main()
{
    node* head = NULL;
    insertEndi(head, 1);
    insertEndi(head, 21);
    insertEndi(head, 211);
    insertEndi(head, 2211);
    insertEndi(head, 22331);
    insertEndi(head, 98);
    insertEndi(head, 12);

    pairwiseSwap(head);
    display(head);
}