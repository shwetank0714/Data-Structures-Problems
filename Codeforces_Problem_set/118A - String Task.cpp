#include<iostream>
#include<cstring>

using namespace std;
 
int main()
{
	string x;
	
	cin>>x;
	
	transform(x.begin(),x.end(),x.begin(),::tolower);
	
	for(int i=0;i<=x.length()-1;i++)
	{
		if(x[i] != 'a' && x[i] !=  'e' && x[i] !=  'i' && x[i] != 'o' && x[i] != 'u' && x[i] != 'y')
		{
			cout<<"."<<x[i];
		}
	}
		return 0;
}
