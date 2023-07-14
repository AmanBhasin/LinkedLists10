/*

limitations of array
-fixed size
-inserting and deletion in arrays are costly
-contagious memory

linked list composition
--n0de--
#data
#pointer to  next

head is the pointer point to the first element of list


*/

//node is not built in ...you have to make
#include "bits/stdc++.h"
using namespace std;

 class node{
    public :
        int data;
        node* next;
        node(int x){
            data = x;
            next = NULL;
        }
    };

// function to insert element at end
void insertEndi(node* &head, int x)
{
    // ponter pointing to head is put as argument in function because we need to call by reference not by value
    // because we need to modify our linked list ... we took it by reference
    node* nn = new node(x);
    node* curr = head;
    if(head == NULL){ head = nn;
    return;
    }
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = nn;
    nn->next = NULL;
}
// function to display the list
// since we just want to display we will take it by value
void display(node* head)
{
    node* curr = head;
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
// deletion in linkedlist
void deletion(node* &head, int val)
{
    node* curr = head;
    while(curr->next->data != val)
    {
        curr =  curr->next;
    }
    node* deleted = curr->next;
    curr->next = curr->next->next;
}



int main()
{
   node* head = NULL;
   insertEndi(head, 1);
    insertEndi(head, 2);
     insertEndi(head, 4);
      insertEndi(head, 6);
    deletion(head, 4);
      display(head);

}