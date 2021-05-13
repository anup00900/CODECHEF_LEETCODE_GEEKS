#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long long int T;
	cin>>T;
	while(T--)
	{
	      long long int N;
	      cin>>N;
	      long long int a[N];
	      
	      for(int i=0;i<N;i++)
	      {
	            cin>>a[i];
	      }
	      
	      int o=0;
	      for(int i=0;i<N;i++)
	      {
	            if(a[i]%2 != 0)
	            {
	                  o++;
	            }
	      }
	      
	      if(o%2 == 0)
	      {
	            cout<<1<<endl;
	      }
	      else
	      {
	            cout<<2<<endl;
	      }
	      
	      
	      
	}
	
	
	
	return 0;
}
