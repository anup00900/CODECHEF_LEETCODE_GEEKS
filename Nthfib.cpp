class Solution {
    
    long long int fib(vector<long long int>&v,long long int n)
    {
        
        
        if(n == 0)
        {
            return(0);
        }
        else if(n == 1)
        {
            return(1);
        }
       
        
        if(v[n] != -1)
        {
            return(v[n]);
        }
        else
        {
            return(v[n]=(fib(v,n-1)+fib(v,n-2))%1000000007);
        }
        
        
        
        
       
        
    }
    
    
    
    
    
    
  public:
    long long int nthFibonacci(long long int n){
        
        
        
        vector<long long int>v(n+1,-1);
        
        
       
        return(fib(v,n));
        
        
        
        
    }
};