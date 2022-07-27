#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n,x[100],y[100],z[100],a = 0,b = 0,c = 0;
	cin>>n;
	
	for(int i = 0;i<n;i++)
	{
		cin>>x[i];
		cin>>y[i];
		cin>>z[i];
		
		a = a + x[i];
		b = b + y[i];
		c = c + z[i];
	}
	if(a == 0 && b == 0 && c == 0)cout<<"YES";
	else cout<<"NO";
	
	return 0;
