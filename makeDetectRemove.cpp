// target is to make cycle , detect it and remove it
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
//function to make cycle inn ll
void makeCycle(node* &head, int pos)
{
    node* temp =  head;
    node* joint;
    while(temp->next!=NULL ){
        pos--;
        if(pos == 1){
            joint = temp;
        }
        temp->next = temp;
    }
    temp->next = joint;

}
// detect cycle
void detectCycle (node* &head)
{
    // fast and slow  pointer approach
    node* fast= head;
    node* slow = head;
    while(fast!=NULL || fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            cout << "there is a loop in the list"<<endl;
            return;
        }
    }
}

//remove the loop
void removeLoop(node* &head)
{
    node* fast = head;
    node* slow = head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (slow != fast);

    fast = head;
    while(fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
    
}


int main()
{
   node* head = NULL;
   insertEndi(head, 1);
    insertEndi(head, 2);
     insertEndi(head, 4);
      insertEndi(head, 6);
    insertEndi(head, 12);
    insertEndi(head, 62);
    insertEndi(head, 16);
    insertEndi(head, 9);
    insertEndi(head, 13);
    deletion(head, 40);
      display(head);
    makeCycle(head, 5);
    detectCycle(head);
    removeLoop(head);
    display(head);

}