#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	string x;
	
	cin>>x;
	for(int i=0;i<x.length();i++)
	{
		if(i == 0)
			cout<<(char)toupper(x[i]);
		else
			cout<<x[i];
	}
	
	return 0;
}
