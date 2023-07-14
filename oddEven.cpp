#include "bits/stdc++.h"
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
ListNode* oddEvenList(ListNode* head) {
        ListNode *evStart;
        ListNode* even;
        ListNode* odd;
        if(head == NULL) return NULL;
        if(!head->next || !head->next->next) return head;
        odd = head;
        even = evStart = head->next;
        while(odd->next && even->next){
            if(odd->next && odd->next->next){
                odd->next = odd->next->next;
                odd = odd->next;
            }
            if(even->next && even->next->next){
                even->next = even->next->next;
                even = even->next;
            }
        }
        odd->next = evStart;
        return head;

    }
    
    
int main()
{
    struct ListNode* head = new ListNode(2);
    ListNode* tmp = head;
    for(int i=2; i<=7; i++){
        int n; cin>>n;
        tmp->next = new ListNode(n);
        tmp = tmp->next;
        
    }
    
    ListNode* ans = oddEvenList(head);
    for(int i=0; i<7; i++){
        cout<<ans->val<<" ";
        ans = ans->next;
    }
}