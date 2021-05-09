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
    ListNode* swapNodes(ListNode* head, int k) {
        
        
        ListNode *t = head;
        ListNode *te = head;
        ListNode *tem = head;
        int c=0;
        
        while(t!=NULL)
        {
            c++;
            t=t->next;
        }
        int p = c-k;
        
        if(p > c)
        {
            return(head);
        }
        else
        {
            
            for(int i =0;i<k-1;i++)
            {
                te=te->next;
            }
            for(int i=0;i<p;i++)
            {
                tem=tem->next;
            }
            
            
        }
        int r = te->val;
        te->val=tem->val;
        tem->val=r;
        return(head);
        
        
        
        
    }
};