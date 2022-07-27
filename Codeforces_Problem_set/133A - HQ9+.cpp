#include<iostream>
#include<cstring>

using namespace std;
 
int main()
{
	string x;
	
	cin>>x;
	
	int count = 0;
	for(int i=0;i<x.length();i++)
	{
		if(x[i] == 'H' || x[i] == 'Q' || x[i] == '9')
		{
			cout<<"YES";break;
		}
		else
		{
			count ++;
		}
	}
	if(count == x.length())
		cout<<"NO";
	
	return 0;
}
