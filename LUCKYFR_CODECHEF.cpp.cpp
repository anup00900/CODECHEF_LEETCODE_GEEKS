#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long long int T;
	cin>>T;
	long long int p =T;
	int i=0;
	while(T--)
	{
	     int a; 
	     
	     cin>>a;
	        int c=0;
	            
	            while(a)
	            {
	                  int r = a%10;
	                  if(r == 4)
	                  {
	                     c++;
	                  }
	                  a = a/10;
	            }
	            
	            cout<<c<<endl;
	            
	      
	      
	      
	      
	      
	      
	      
	}
	
	      
	      
	         
	     
	
	
	
	
	return 0;
}
