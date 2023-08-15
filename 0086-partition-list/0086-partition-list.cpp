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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* list1=new ListNode();
        ListNode* list2=new ListNode();
        
        ListNode* l1=list1;
        ListNode* l2=list2;
        
        while(head){
            ListNode *h=new ListNode(head->val);
            if(head->val<x){
                l1->next=h;
                l1=l1->next;
            }else{
                l2->next=h;
                l2=l2->next;
            }
            head=head->next;
        }
        
        l1->next=list2->next;
        
        
        return list1->next;
    }
};