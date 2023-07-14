#include "bits/stdc++.h"
using namespace std;
//make stack from linked list
// class name or declaration do not conntain parenthesis
class point
{
    public:
    // variables of class --> means any object i make from this class
    // could be assigned these variables
    int data;
    point* next; 

    point(int x)
    {
        data = x;
        next = NULL;
    }
};
// make a separate class for linked list also


    // just make function and since above node is public 
    // ig you have to make any object within this class of point class
    void insertAtEnd(point* &head, int x)
    {
      point* nn = new point(x);
      
        
         if(head == NULL) nn = head;
        point* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nn;
        nn->next = NULL;
    }

    void display(point* head)
    {
        point* temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }


// you require to make an object when you my class
// class contains variables and functions
int main()
{
    point* head = NULL;
  
   insertAtEnd(head, 1);
    insertAtEnd(head, 2);
     insertAtEnd(head, 3);
     insertAtEnd(head, 4);
     insertAtEnd(head, 5);

    display(head);

}