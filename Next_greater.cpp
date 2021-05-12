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
    vector<int> nextLargerNodes(ListNode* head) {
        
        
         vector <int> v;
        int f=0;
         int c=0;
         ListNode *t=head;
         ListNode *temp=head->next;
         ListNode *t1=head;
         while(t1!=NULL)
         {
             c++;
             t1=t1->next;
         }
         if(head==NULL )
         {
             return(v);
         }
         else if(head->next == NULL)
         {
             v.push_back(0);
             return(v);
         }
         else
         {
             int i=0;
             while(i<c)
             {
                 while(temp !=NULL)
                 {
                     
                     if(t-> val < temp->val)
                     {
                         v.push_back(temp->val);
                         t=t->next;
                         temp=t->next;
                         i++;
                     }
                     else
                     {
                         temp=temp->next;
                     }
                     
                     
                 }
                 v.push_back(0);
                 t=t->next;
                 if(t == NULL)
                 {
                     break;
                 }
                 temp=t->next;
                 i++;
             }    
         }
         
         return(v);
         
         
        
        
        
        
        
    }
};