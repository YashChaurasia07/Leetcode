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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next== NULL || k == 0) return head;
        int l = 1;
        ListNode* n1 = head;
        while(n1->next)
        {
            n1 = n1->next;
            l++;
        }
        n1->next= head;
        k = k%l;
        k = l-k;
        while(k--) n1=n1->next;

        head= n1->next;
        n1->next = NULL;
        return head;
    }
};