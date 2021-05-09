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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        
        ListNode *t = list1;
        ListNode *n = list1;
        for(int i=1;i<a;i++)
        {
            t=t->next;
        }
        for(int j=0;j<b;j++)
        {
            n=n->next;
        }
        
        t->next=list2;
        ListNode * k=list2;
        while(k ->next != NULL)
        {
            k=k->next;
        }
        
        k->next=n->next;
        n->next=NULL;
        return(list1);
        
        
        
        
        
        
        
        
    }
};