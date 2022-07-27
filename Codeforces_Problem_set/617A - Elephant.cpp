#include<iostream>
 
using namespace std;
 
int main()
{
	int x;
	cin>>x;
	if(x == 1 || x == 2 || x == 3 || x == 4 || x == 5)
	{
		cout<<"1";
	}
	else if(x>5)
	{
		if(x%5 == 0)
		{
			cout<<x/5;
		}
		else
			cout<<(x/5) + 1;
	}
	return 0;
