/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 //iterative
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* curr_next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=curr_next;
        }
        return prev;
    }
};

//recurssive
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* newhead=reverseList(head->next);
        (head->next)->next=head;  //newhead->next=head;
        head->next=NULL;
        return newhead;
    }
};
