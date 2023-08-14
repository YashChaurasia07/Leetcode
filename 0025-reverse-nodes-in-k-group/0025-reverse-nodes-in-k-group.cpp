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
    ListNode* rev(ListNode* head,int k, int l)
    {
        if(l<k)
        {
            return head;
        }
        ListNode* prev = NULL;
        ListNode* forw = NULL;
        ListNode* cur = head;
        int c = 0;
        while(cur!=NULL && c<k)
        {
            forw = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forw;
            c++;
        }
        if(forw!=NULL) head->next = rev(forw,k,l-k);
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int l = 0;
        ListNode* n1 = head;
        while(n1!=NULL)
        {
            n1 = n1->next;
            l++;
        }
        return rev(head,k,l);
    }
};