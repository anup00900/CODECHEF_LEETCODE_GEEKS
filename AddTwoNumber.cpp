public:
    ListNode* l3=new ListNode(), *curr=l3;
    unsigned long long r;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
           ListNode * prev=NULL;
           ListNode * temp1=l1;
           ListNode * temp2=l2;
           ListNode * t1=l1;
           ListNode * t2=l2;
           int c1=0,c2=0;
        
        
           while(t1 != NULL)
           {
               c1++;
               t1=t1->next;
           }
           
         while(t2 != NULL)
           {
               c2++;
               t2=t2->next;
           }
        
            
        
         int carry=0;
      
        
            while(temp1!=NULL)
             {
                if(temp2== NULL)
                {
                    int r = temp1->val + carry;
                     int p = r%10;
                     curr->next=new ListNode(p);
                     r=r/10;
                     carry = r;
                     curr=curr->next;
                     temp1=temp1->next;
                    
                    
                }
                else
                {
                     int r = temp1->val + temp2->val + carry;
                     int p = r%10;
                     curr->next=new ListNode(p);
                     r=r/10;
                     carry = r;
                     curr=curr->next;
                     temp1=temp1->next;
                     temp2=temp2->next;
                    
                }
                    
                 
             }
        while(temp2 !=NULL)
        {
                    int r = temp2->val + carry;
                     int p = r%10;
                     curr->next=new ListNode(p);
                     r=r/10;
                     carry = r;
                     curr=curr->next;
                     temp2=temp2->next;
        }
            
             
        if(carry !=0) 
        {
            curr->next=new ListNode(carry);
           
        }
              
        
        
         
        
        return(l3->next);
        
        
    }
};