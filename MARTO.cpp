#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
	      cin>>a[i];
	}
	
	sort(a,a+n);
	int sum=0;
	int c=0;
	for(int i=0;i<n;i++)
	{
	      sum =sum + a[i];
	      c++;
	      if(sum > k)
	      {
	            sum = sum - a[i];
	            c--;
	            break;
	      }
	}
	
	cout<<c;
	
	
	return 0;
}
