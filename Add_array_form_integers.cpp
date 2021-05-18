class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
         int n=num.size();
         vector<int> res;
         for(int i=n-1;i>=0;i--)
         {
             int r = num[i]+k;
             res.push_back(r%10);
             k=r/10;
             
         }
        while(k > 0)
        {
            res.push_back(k%10);
            k=k/10;
        }
        reverse(res.begin(),res.end());
        return(res);
      
    }
};